#include "dialogpreference.h"
#include "ui_dialogpreference.h"
#include <QDebug>
#include <QAbstractItemModel>
#include <QDir>
#include <QFileDialog>
//#include "dialognewcategory.h"

DialogPreference::DialogPreference(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogPreference)
{
    ui->setupUi(this);
    cnf = new QSettings("Q-Uma","quma-skripsi",this);
    initAll();
    ui->listWidget->setViewMode(QListView::IconMode);
    ui->listWidget->setIconSize(QSize(75,75));
    ui->listWidget->setCurrentRow(0);
    ui->stackedWidget->setCurrentIndex(0);
    ui->listWidget->setAcceptDrops(false);
    curCat = 0;

    // bahasa
    ui->label_25->hide();
    ui->cbLang->hide();


    //Main Connection
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),
            ui->stackedWidget,SLOT(setCurrentIndex(int)));
    connect(ui->pbApply,SIGNAL(clicked()),this,SLOT(applyConfig()));
    connect(ui->pbClose,SIGNAL(clicked()),this,SLOT(closeDialog()));

    // Page General
    // Page Category
    connect(ui->cbCategory,SIGNAL(currentIndexChanged(int)),
            this,SLOT(changeCategory()));
    connect(ui->pbBrowseCatSaveDir,SIGNAL(clicked()),
            this,SLOT(browseCategorySaveDir()));
    connect(ui->leFilesType,SIGNAL(editingFinished()),
            this,SLOT(leType()));
    connect(ui->leCategorySaveDir,SIGNAL(editingFinished()),
            this,SLOT(leSaveDir()));

    setWindowTitle(tr("Preference"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Gear Alt.png"));
}

void DialogPreference::initAll() {

    // init all Componen... Load from config file
    useLimit = false;
    retConRefused = true;
    // page genaral
    // page category
    // page connection
    // page userlogin
    // Callback Category
    catArchive << "rar" <<"zip" <<"7z"<<"gz"<<"bz2"<<"tgz" <<"tar";
    catDocument << "pdf"<<"doc"<<"odt"<<"xls"<<"ods"<<"txt";
    catMusic << "mp3"<<"acc"<<"ogg"<<"wav"<<"flac"<<"mka";
    catVideo << "mkv"<<"ogm"<<"avi"<<"rm"<<"mp4";
    QStringList catOther;


    category caa;
    caa.catName = "Archive";
    caa.catValue = catArchive;
    callBackCat.append(caa);

    caa.catName = "Documents";
    caa.catValue = catDocument;
    callBackCat.append(caa);

    caa.catName = "Music";
    caa.catValue = catMusic;
    callBackCat.append(caa);

    caa.catName = "Video";
    caa.catValue = catVideo;
    callBackCat.append(caa);

    caa.catName = "Other";
    caa.catValue = catOther;
    callBackCat.append(caa);


    // load category

        cnf->beginReadArray("category");
        int a = 0;
        category cc;
        for(int i = 0; i < 5;i++) {
            cnf->setArrayIndex(i);
            a = i;

            cc.catName = cnf->value("category",callBackCat.at(a).catName).toString();
            cc.catValue = cnf->value("type",callBackCat.at(a).catValue).toStringList();
            cc.saveDir = cnf->value("savedir",QDir::homePath().append("/Downloads/").append(cc.catName)).toString();
            cats.append(cc);
            ui->cbCategory->addItem(cc.catName);
        }
        cnf->endArray(); // ReadArray("category");

        // atur di dialog
        int cindx = ui->cbCategory->currentIndex();
        ui->leFilesType->setText(cats.at(cindx).catValue.join(","));
        ui->leCategorySaveDir->setText(cats.at(cindx).saveDir);


        // load general
        cnf->beginGroup("download-options");
        // General options
        cnf->beginGroup("general");
        bool aaa = true;

        language    = cnf->value("lang",0).toInt(&aaa);
        ui->cbLang->setCurrentIndex(language);

        retNum      = cnf->value("retry-number",0).toInt(&aaa);
        ui->sbRetNum->setValue(retNum);

        waitRetry   = cnf->value("wait-retry",0).toInt(&aaa);
        ui->sbWaitRetNum->setValue(waitRetry);

        tempDir     = cnf->value("temp-dir",QDir::homePath().append("/.q-uma/tmp")).toString();
        ui->leTempDir->setText(tempDir);

        if(cnf->value("limit",0).toInt(&aaa) == 0 ) {
            useLimit = false;
        } else {
            useLimit = true;
        }
        ui->cbMaxLimit->setChecked(useLimit);

        maxLimitKB  = cnf->value("limit-val",256).toInt(&aaa);
        ui->sbMaxLimit->setValue(maxLimitKB);

        if(cnf->value("retry-conref",1).toInt(&aaa) == 0) {
            retConRefused = false;
        } else {
            retConRefused = true;
        }
        ui->cbRetryConRefuse->setChecked(retConRefused);

        cnf->endGroup(); // Group("general");

        // other options
        // all options
        QStringList allOpt;
        allOpt.append(QString("--tries=%0").arg(retNum));
        allOpt.append(QString("--wait=%0").arg(waitRetry));
        if(retConRefused) {
            allOpt.append("--retry-connrefused");
        }
        if(useLimit) {
            allOpt.append(QString("--limit-rate=%0k").arg(maxLimitKB));
        }
        allOpt.append(otherOpt);

        cnf->beginGroup("other-options");
        otherOpt    = cnf->value("opt").toStringList();
        ui->leOtherOptions->setText(otherOpt.join(" "));
        cnf->endGroup(); // Group("other-options");

        cnf->beginGroup("opt-all");
            ui->tbOptionsPreview->setText(cnf->value("current-opt",allOpt).toStringList().join("\n"));
        cnf->endGroup(); // Group("opt-all");
        cnf->endGroup(); // Group("download-options");

}

void DialogPreference::applyConfig() {
    //  simpan semua konfigurasi ke dalam config file
    language    = ui->cbLang->currentIndex();
    retNum      = ui->sbRetNum->value();
    waitRetry   = ui->sbWaitRetNum->value();
    tempDir     = ui->leTempDir->text();
    useLimit    = ui->cbMaxLimit->isChecked();
    maxLimitKB  = ui->sbMaxLimit->value();
    retConRefused   = ui->cbRetryConRefuse->isChecked();

    rememberLast = ui->cbCatRememberLasPath->isChecked();
    if(!ui->leOtherOptions->text().isEmpty())
        otherOpt    = ui->leOtherOptions->text().split(QRegExp("\\s+"));
    else
        otherOpt    = QStringList();


    // Category
    cnf->beginWriteArray("category");
    category cc;
    for(int i = 0; i < 5;i++) {
        cnf->setArrayIndex(i);

        cnf->setValue("category",cats.at(i).catName);
        cnf->setValue("type",cats.at(i).catValue);
        cnf->setValue("savedir",cats.at(i).saveDir);
    }
    cnf->endArray();    // WriteArray("category");

    // Options
    cnf->beginGroup("download-options");
    // General options
    cnf->beginGroup("general");
        cnf->setValue("lang",language);
        cnf->setValue("retry-number",retNum);
        cnf->setValue("wait-retry",waitRetry);
        cnf->setValue("temp-dir",tempDir);
        QDir().mkpath(tempDir);
        if(useLimit) {
            cnf->setValue("limit",1);
        } else {
            cnf->setValue("limit",0);
        }
        cnf->setValue("limit-val",maxLimitKB);
        if(retConRefused) {
            cnf->setValue("retry-conref",1);
        } else {
            cnf->setValue("retry-conref",0);
        }
    cnf->endGroup();    // Group("general");

    // other options
    cnf->beginGroup("other-options");
        cnf->setValue("opt",otherOpt);
    cnf->endGroup();    // Group("other-options");

    // all options
    QStringList allOpt;
    allOpt.append(QString("--tries=%0").arg(retNum));
    allOpt.append(QString("--wait=%0").arg(waitRetry));
    if(retConRefused) {
        allOpt.append("--retry-connrefused");
    }
    if(useLimit) {
        allOpt.append(QString("--limit-rate=%0k").arg(maxLimitKB));
    }
    allOpt.append(otherOpt);
    cnf->beginGroup("opt-all");
        cnf->setValue("current-opt",allOpt);
    cnf->endGroup();    // Group("opt-all");
    cnf->endGroup();    // Group("download-options");

    //read all opt
    cnf->beginGroup("download-options");
    cnf->beginGroup("opt-all");
        ui->tbOptionsPreview->setText(cnf->value("current-opt").toStringList().join("\n"));
    cnf->endGroup();    // Group("opt-all");
    cnf->endGroup();    // Group("download-options");
}

void DialogPreference::closeDialog() {
    close();
}

// page category
void DialogPreference::changeCategory() {
    // index combobox category berganti, load type dan save dir yang sesuai.
    int cindx = ui->cbCategory->currentIndex();
    ui->leFilesType->setText(cats.at(cindx).catValue.join(","));
    ui->leCategorySaveDir->setText(cats.at(cindx).saveDir);
    curCat = cindx;
}

void DialogPreference::browseCategorySaveDir() {
    // open file dialog, get selected dir
    QString dir;

    dir = QFileDialog::getExistingDirectory(this,
                                            "Select Directory",
                                            cats.at(curCat).saveDir,
                                            QFileDialog::ShowDirsOnly
                                            | QFileDialog::DontResolveSymlinks);
    if(dir.isEmpty()) {
        dir = cats.at(curCat).saveDir;
    }

    ui->leCategorySaveDir->setText(dir);
    leSaveDir();
}

void DialogPreference::leType() {
    QStringList cct = ui->leFilesType->text().split(",");
    category cc;
    cc.catName = ui->cbCategory->itemText(curCat);
    cc.catValue = ui->leFilesType->text().split(",");
    cc.saveDir = ui->leCategorySaveDir->text();
//    cats.removeAt(curCat);
    cats.replace(curCat,cc);
}

void DialogPreference::leSaveDir() {
//    cats.at(curCat).saveDir = ui->leCategorySaveDir->text();
    leType();
}


DialogPreference::~DialogPreference()
{
    delete ui;
}

void DialogPreference::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}
