#include "downloaddialog.h"
#include "ui_downloaddialog.h"
#include <QPixmap>
#include <QFileDialog>
//#include <QUrl>
//#include <QUrlInfo>
// For Debugging
#include <QMessageBox>
#include <QtDebug>

DownloadDialog::DownloadDialog(QWidget *parent) :
    QDialog(parent),
    m_ui(new Ui::DownloadDialog)
{
    m_ui->setupUi(this);

    initAll();
    setWindowTitle(tr("New Download"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Add.png"));
}

DownloadDialog::DownloadDialog(QString u,QWidget *parent) :
        QDialog(parent),
        m_ui(new Ui::DownloadDialog) {
    m_ui->setupUi(this);

    url = u;
    acc = false;

    initAll();
}

DownloadDialog::DownloadDialog(QString u, QString uname, QString pass,QWidget *parent) :
        QDialog(parent),
        m_ui(new Ui::DownloadDialog) {
    m_ui->setupUi(this);
    url = u;
    acc = true;
    uName = uname;
    uPass = pass;
    initAll();
}

void DownloadDialog::initAll() {
    // Callback Category
    catArchive << "rar" <<"zip" <<"7z"<<"gz"<<"bz2"<<"tgz" <<"tar";
    catDocument << "pdf"<<"doc"<<"odt"<<"xls"<<"ods"<<"txt";
    catMusic << "mp3"<<"acc"<<"ogg"<<"wav"<<"flac"<<"mka";
    catVideo << "mkv"<<"ogm"<<"avi"<<"rm"<<"mp4";
    QStringList catOther;


    category caa;
    caa.catName = "Archive";
    caa.catValue = catArchive;
    caa.mime    = ":/image/icon/big/mimearchive.png";
    callBackCat.append(caa);

    caa.catName = "Documents";
    caa.catValue = catDocument;
    caa.mime    = ":/image/icon/big/mimegeneral.png";
    callBackCat.append(caa);

    caa.catName = "Music";
    caa.catValue = catMusic;
    caa.mime    = ":/image/icon/big/mimemusic.png";
    callBackCat.append(caa);

    caa.catName = "Video";
    caa.catValue = catVideo;
    caa.mime    = ":/image/icon/big/mimevideo.png";
    callBackCat.append(caa);

    caa.catName = "Other";
    caa.catValue = catOther;
    caa.mime    = ":/image/icon/big/mimeother.png";
    callBackCat.append(caa);


    config = new QSettings("Q-Uma","quma-skripsi",this);
//    config = new QSettings();
//    if(QFile::exists(config->fileName())) {
        loadConfig();
//    }
    m_ui->leURL->setReadOnly(true);
    m_ui->leURL->setText(url);
    m_ui->cbDownloadNow->setChecked(true);
    m_ui->leSaveDir->setReadOnly(true);

//    connection
    connect(m_ui->pbBrowse,SIGNAL(clicked()),this,SLOT(browse()));
    connect(m_ui->pbDownload,SIGNAL(clicked()),
            this,SLOT(download()));
    connect(m_ui->pbCancle,SIGNAL(clicked()),
            this,SLOT(cancle()));
    connect(m_ui->comboBox,SIGNAL(currentIndexChanged(int)),
            this,SLOT(categoryChanged(int)));

    spider();

}

void DownloadDialog::spider() {
    qDebug() << "---- SPIDER ---- " << url;
    proc = new QProcess();
    proc->start("wget",QStringList() << "--spider" << url << "-o" <<tempDir);

    connect(proc,SIGNAL(finished(int)),this,SLOT(readSTO()));
}

void DownloadDialog::readSTO() {
    qDebug() << "=== read ===";
    QString line;
    QString info;
    QString size;
    QString mime;


    QFile file(tempDir);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
            return;
    while (!file.atEnd()) {
        QString line = file.readLine();
        if(line.contains("Length:")) { // berhasil
            int ln = line.indexOf("[");
            int lt = line.indexOf(":");
            int pj = ln - lt;
            info = line.mid(lt+1,pj-1);
        } else if(line.contains("404 Not Found")) {
            info = "Not Found";
        } else if(line.contains("failed:")) {
            info = line.mid(line.lastIndexOf(":")+1);
        }
    }
    m_ui->lbUkuran->setText(info);
    // set mime
    QString s;
    for(int i =0; i < cats.length(); i++) {
        foreach(s,cats.at(i).catValue) {
            if(info.contains(s)) {
                m_ui->comboBox->setCurrentIndex(i);
                m_ui->leSaveDir->setText(cats.at(i).saveDir);
                m_ui->lbImage->setPixmap(QPixmap(cats.at(i).mime));
            }
        }
    }
}


DownloadDialog::~DownloadDialog()
{
    delete m_ui;
}

void DownloadDialog::cekUrl() {
    // langsung spider
}


void DownloadDialog::changeEvent(QEvent *e)
{
    switch (e->type()) {
    case QEvent::LanguageChange:
        m_ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void DownloadDialog::loadConfig() {
    // load category
    config->beginReadArray("category");
    int a = 0;
    category cc;
//    qDebug() << QDir::homePath();
    for(int i = 0; i < 5;i++) {
        config->setArrayIndex(i);
        a = i;

        cc.catName = config->value("category",callBackCat.at(a).catName).toString();
        cc.catValue = config->value("type",callBackCat.at(a).catValue).toStringList();
        cc.saveDir = config->value("savedir",QDir::homePath().append("/Downloads/").append(cc.catName)).toString();
        cc.mime = callBackCat.at(a).mime;
        cats.append(cc);
        m_ui->comboBox->addItem(cc.catName);
    }
    config->endArray();

    QString ext;
    QString s;
    int pos = 0;
    if(!url.contains(".")) {
        m_ui->comboBox->setCurrentIndex(4);
        m_ui->leSaveDir->setText(cats.at(4).saveDir);
        m_ui->lbImage->setPixmap(QPixmap(cats.at(4).mime));
    } else {
        pos = url.lastIndexOf(".");
        ext = url.mid(pos);
        for(int i = 0; i < cats.length(); i++) {
//            qDebug() << cats.length() << "\t" << i;
            foreach(s,cats.at(i).catValue) {
                if(ext.contains(s)) {
                    m_ui->comboBox->setCurrentIndex(i);
                    m_ui->leSaveDir->setText(cats.at(i).saveDir);
                    m_ui->lbImage->setPixmap(QPixmap(cats.at(i).mime));
                } else {
                    m_ui->comboBox->setCurrentIndex(4);
                    m_ui->leSaveDir->setText(cats.at(4).saveDir);
                    m_ui->lbImage->setPixmap(QPixmap(cats.at(4).mime));
                }
            }
        }
    }

    config->beginGroup("download-options");
    // General options
    config->beginGroup("general");
    tempDir     = config->value("temp-dir",QDir::homePath().append("/.q-uma/tmp")).toString();
    config->endGroup();
    config->endGroup();
    QDir ttt(tempDir);
    if(!ttt.exists()) {
        ttt.mkpath(tempDir);
    }
    tempDir.append("/log");

    /*
      Buat save dir default,
      Jika spider udah berhasil mendapatkan filename,
      ambil file name kemudian di paste ke saveFile.
      jika ga bisa, pake saveFile yang didapat dari parsing url,
      jika parsing url ga ada nama filenya
      cuma ada / di last index,
      nama file defaultnya adalah index-default.html
      */

}

void DownloadDialog::saveConfig() {
    //last Download Setting
    QFileInfo tmp(m_ui->leSaveDir->text());
    int i = m_ui->comboBox->currentIndex();

//    cats.at(i).saveDir = tmp.absolutePath();
    if(m_ui->cbRemember->isChecked()) {
        config->beginWriteArray("category");
        config->setArrayIndex(i);
        config->setValue("savedir",tmp.absolutePath());
        config->endArray();
    }
}

// Private SLOTS
void DownloadDialog::browse() {
    QDir tmp;
    QString dirTmp;
    tmp.setPath(m_ui->leSaveDir->text());
    if(!(!m_ui->leSaveDir->text().isEmpty() && tmp.exists())) {
        tmp.setPath(QDir::homePath());
    }
    dirTmp = QFileDialog::getExistingDirectory(
            this,tr("Select Directory"),
            tmp.path(),QFileDialog::ShowDirsOnly);
    if(dirTmp.isEmpty())
        dirTmp = dirTmp;
    m_ui->leSaveDir->setText(dirTmp);
    saveDir = dirTmp;
    //getFileName();
}

//void DownloadDialog::browseCookies() {
//}

void DownloadDialog::download() {
    QString fileName = m_ui->leFName->text();
    saveTo = m_ui->leSaveDir->text();
    dlNow = m_ui->cbDownloadNow->isChecked();
    QString kategori = m_ui->comboBox->currentText();
    QString size = m_ui->lbUkuran->text();
    QFileInfo tmp(saveTo);
    if(!tmp.exists()) {
        QDir dir(saveTo);
        // jika saveto ga ada -> cek apakah direktoryna ada pa ga
        if(QMessageBox::question(this,tr("Directory not exist"),
                             tr("Directory not exist!\nCreate?"),
                             QMessageBox::Ok|QMessageBox::Cancel)
                == QMessageBox::Ok) {
                if(!dir.mkpath(saveTo)) {
                    QMessageBox::critical(this,tr("Cannot create Directory"),
                        tr("Cannot create Directory, please select an other one!!!"));
                    return;
                }
            }
            else return;
    }

    if(!fileName.isEmpty()) {
        QString ttt = saveTo;
        ttt.append("/").append(fileName);
        QFileInfo ttf(ttt);
        if(ttf.exists()) {
            if(QMessageBox::question(this,tr("File Exist!"),
                                     tr("File Exist! Overwrite?"),
                                     QMessageBox::Ok|QMessageBox::Cancel)
                != QMessageBox::Ok) {
                return;
            }
        }
    }

    emit sendDownload(url,saveTo,fileName,dlNow,acc,uName,uPass,kategori,size);
    qDebug() << url << saveTo << fileName << dlNow << acc << uName << uPass << kategori << size;
    saveConfig();
    close();
}

void DownloadDialog::cancle() {
    if(!m_ui->leURL->text().isEmpty()) {
        if(QMessageBox::question(this,tr("Cancle Download"),tr("Are you sure?"),QMessageBox::Ok|QMessageBox::Cancel)==QMessageBox::Ok) {
            close();
        } else {
            return;
        }
    }else
        close();
}

void DownloadDialog::showWidgetAdv() {
}

void DownloadDialog::getFileName() {
    QString tmp,dir,saveFile;

    tmp = m_ui->leURL->text();
    int pos = tmp.lastIndexOf("/")+1;
    QString ffname = tmp.mid(pos);

    dir = saveDir;
    if(dir.at(dir.length()-1)!='/') {
        dir.append("/");
    }

    QString tmpFname;
    if(QFile::exists(dir+ffname)) {
        for(int i = 2;;i++) {
            tmpFname = ffname;
            // file(1).zip
            QString indx;
            indx.append(i);
            tmpFname.insert(ffname.lastIndexOf("."),
                            QString("\(" + indx + ")"));
            if(!QFile::exists(dir+tmpFname)) {
                dir.append(tmpFname);
                break;
            }
        }
    }else {
        dir.append(ffname);
    }
    m_ui->leSaveDir->setText(dir);



//    QFileInfo ff(dirTmp);
//    if(ff.isFile()) {
//        int i = dirTmp.lastIndexOf("/");
//        dir = dirTmp.left(i+1);
//    }
//    else if(!dirTmp.endsWith("/")) {
//        dirTmp.append("/");
//        dir = dirTmp;
//    }
//    saveFile = dir;
//    saveFile.append(ffname);
//    m_ui->leSaveDir->setText(saveFile);


}

void DownloadDialog::categoryChanged(int i) {
    m_ui->leSaveDir->setText(cats.at(i).saveDir);
}
