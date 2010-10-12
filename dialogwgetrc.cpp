#include "dialogwgetrc.h"
#include "ui_dialogwgetrc.h"
#include <QDir>
#include <QDebug>

DialogWgetrc::DialogWgetrc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogWgetrc)
{
    ui->setupUi(this);
    cnf = new QSettings(QSettings::IniFormat,
                        QSettings::UserScope,".wgetrc");
    cnf->setPath(QSettings::IniFormat,
                 QSettings::UserScope,
                 QDir::homePath());
    qDebug() << cnf->fileName();
    loadWgetRC();
    readWgetRc();
    //connection
    connect(ui->pbApply,SIGNAL(clicked()),this,SLOT(Apply()));
    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(Cancel()));
    connect(ui->pbDefaults,SIGNAL(clicked()),this,SLOT(Default()));
    connect(ui->pbOk,SIGNAL(clicked()),this,SLOT(Ok()));
    connect(ui->listWidget,SIGNAL(currentRowChanged(int)),this,SLOT(change(int)));

    setWindowTitle(tr(".wgetrc Configuration"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Terminal.png"));
}

DialogWgetrc::~DialogWgetrc()
{
    delete ui;
}

void DialogWgetrc::loadWgetRC() {
    QFile ffs(cnf->fileName());
    QFile ffo(QDir::homePath().append("/.wgetrc"));
    if(!ffs.exists() || !ffo.exists()) {
        return;
    }

    if(!ffo.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Can't read file: " << ffo.fileName();
        return;
    }
    if(!ffs.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Can't read file: " << ffs.fileName();
        return;
    }

    QTextStream in(&ffo);
    QTextStream out(&ffs);
    out << "[General]" << "\n";
    while(!in.atEnd()) {
        QString line = in.readLine();
        out << line << "\n";
    }
    ffo.close();
    ffs.close();
}

void DialogWgetrc::Default() {
    // General
    ui->gBackground->setCurrentIndex(1);
//    ui->gContinue->setCurrentIndex(1);
    ui->gIgnoreCase->setCurrentIndex(0);
    ui->gIP4->setCurrentIndex(1);
    ui->gIP6->setCurrentIndex(1);
    ui->gLimit->setChecked(false);
    ui->gLimitVal->setValue(0);
    ui->gQuota->setChecked(false);
    ui->gQuotaVal->setValue(0);
    ui->gMirror->setCurrentIndex(1);
    ui->gNetRc->setCurrentIndex(1);
    ui->gTimeStamping->setCurrentIndex(0);

    // Connection
    ui->cDNSCache->setCurrentIndex(0);
    ui->cDNSto->setValue(0);
    ui->cRedir->setValue(20);
//    ui->cSercverCache->setCurrentIndex(0);
//    ui->cRetNum->setValue(20);
    ui->cTimeOut->setValue(0);
    ui->cUseProxy->setCurrentIndex(0);
    ui->cWaitRet->setValue(0);
    ui->cWaitRel->setValue(0);

    // HTTP
    ui->hILength->setCurrentIndex(0);
    ui->hCache->setCurrentIndex(0);
    ui->hHeader->clear();
    ui->hUserAgent->clear();

    // FTP
    ui->fPasiveFTP->setCurrentIndex(0);
    ui->fRetSym->setCurrentIndex(0);

    // log
    ui->lDotByte->setValue(1024);
    ui->lDotLine->setValue(50);
    ui->lDotSpace->setValue(10);

    // user
    ui->uUser->clear();
    ui->uPass->clear();
    ui->uHUser->clear();
    ui->uHPass->clear();
    ui->uFUser->clear();
    ui->uFPass->clear();
    ui->uUseAll->setChecked(false);

}

void DialogWgetrc::Apply() {
    // general
    cnf->setValue("background",ui->gBackground->currentText());
//    cnf->setValue("continue",ui->gContinue->currentText());
    cnf->setValue("inet4_only",ui->gIP4->currentText());
    cnf->setValue("inet6_only",ui->gIP6->currentText());
    cnf->setValue("timestamping",ui->gTimeStamping->currentText());
    cnf->setValue("netrc",ui->gNetRc->currentText());
    if(ui->gLimit->isChecked()) {
        cnf->setValue("limit_rate",ui->gLimitVal->value());
    } else {
        cnf->remove("limit_rate");
    }
    if(ui->gQuota->isChecked()) {
        cnf->setValue("quota",QString().setNum(ui->gQuotaVal->value()).append("k"));
    } else {
        cnf->remove("quota");
    }

    cnf->setValue("mirror",ui->gMirror->currentText());
    cnf->setValue("ignore_case",ui->gIgnoreCase->currentText());

    // Connection
    cnf->setValue("max_redirect",ui->cRedir->value());
    cnf->setValue("connect_timeout",ui->cTimeOut->value());
    cnf->setValue("dns_cache",ui->cDNSCache->currentText());
    cnf->setValue("dns_timeout",ui->cDNSto->value());
    cnf->setValue("retry_connrefused",ui->cRetCon->currentText());
    cnf->setValue("wait",ui->cWaitRel->value());
    cnf->setValue("wait_retry",ui->cWaitRet->value());
    cnf->setValue("use_proxy",ui->cUseProxy->currentText());
//    cnf->setValue("");

    // HTTP
    cnf->setValue("ignore_length",ui->hILength->currentText());
    cnf->setValue("cache",ui->hCache->currentText());

//    QStringList list = ui->hHeader->toPlainText().split("\n");
//    QString s;
//    foreach(s,list) {
//        cnf->setValue();
//    }
    if(ui->hHeader->toPlainText().isEmpty()) {
        cnf->remove("header");
    } else {
        cnf->setValue("header",ui->hHeader->toPlainText());
    }
    if(ui->hUserAgent->toPlainText().isEmpty()) {
        cnf->remove("user_agent");
    } else {
        cnf->setValue("user_agent",ui->hUserAgent->toPlainText());
    }

    // FTP
    cnf->setValue("retr_symlinks",ui->fRetSym->currentText());
    cnf->setValue("passive_ftp",ui->fPasiveFTP->currentText());

    // loging
    cnf->setValue("dot_bytes",ui->lDotByte->value());
    cnf->setValue("dot_spacing",ui->lDotSpace->value());
    cnf->setValue("dots_in_line",ui->lDotLine->value());

    // User
    if(ui->uUseAll->isChecked()) {
        if(ui->uUser->text().isEmpty()) {
            cnf->remove("user");
        }else {
            cnf->setValue("user",ui->uUser->text());
        }
        if(ui->uPass->text().isEmpty()) {
            cnf->remove("password");
        }else {
            cnf->setValue("password",ui->uPass->text());
        }
        cnf->remove("ftp_password");
        cnf->remove("ftp_user");
        cnf->remove("http_password");
        cnf->remove("http_user");
    } else {
        // FTP User
        if(ui->uFPass->text().isEmpty()) {
            cnf->remove("ftp_password");
        } else {
            cnf->setValue("ftp_password",ui->uFPass->text());
        }
        if(ui->uFUser->text().isEmpty()) {
            cnf->remove("ftp_user");
        } else {
            cnf->setValue("ftp_user",ui->uFUser->text());
        }
        // HTTP user
        if(ui->uHPass->text().isEmpty()) {
            cnf->remove("http_password");
        } else {
            cnf->setValue("http_password",ui->uHPass->text());
        }
        if(ui->uHUser->text().isEmpty()) {
            cnf->remove("http_user");
        } else {
            cnf->setValue("http_user",ui->uHUser->text());
        }

//        cnf->setValue();
//        cnf->setValue();
//        cnf->setValue();
//        cnf->setValue();
//        cnf->setValue();
//        cnf->setValue();
//        cnf->setValue();
    }

    QFile ffo(cnf->fileName());
    QFile ffs(QDir::homePath().append("/.wgetrc"));

    if(!ffo.open(QFile::ReadOnly | QFile::Text)) {
        qDebug() << "Can't read file: " << ffo.fileName();
        return;
    }
    if(!ffs.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Can't read file: " << ffs.fileName();
        return;
    }

    QTextStream in(&ffo);
    QTextStream out(&ffs);
    while(!in.atEnd()) {
        QString line = in.readLine();
        if(line.contains("[General]")) {
            continue;
        }
        out << line << "\n";
    }
//    ffo.close();
//    ffs.close();
}

void DialogWgetrc::Ok() {
    accept();
    close();
}

void DialogWgetrc::Cancel() {
    reject();
    close();
}

void DialogWgetrc::readWgetRc() {
    bool ok = true;
    ui->gBackground->setCurrentIndex((cnf->value("background","off") == "off") ? 0 : 1);
    ui->gIgnoreCase->setCurrentIndex((cnf->value("ignore_case","on") == "off") ? 1 : 0);
    ui->gIP4->setCurrentIndex((cnf->value("inet4_only","off") == "off") ? 0 : 1);
    ui->gIP6->setCurrentIndex((cnf->value("inet6_only","off") == "off") ? 0 : 1);
    ui->gLimit->setChecked(false);
    ui->gLimitVal->setValue(cnf->value("limit_rate",0).toInt(&ok));
    ui->gQuota->setChecked(false);
    ui->gQuotaVal->setValue(cnf->value("quota",0).toInt(&ok));
    ui->gMirror->setCurrentIndex((cnf->value("mirror","off") == "off") ? 0 : 1);
    ui->gNetRc->setCurrentIndex((cnf->value("netrc","off") == "off") ? 0 : 1);
    ui->gTimeStamping->setCurrentIndex((cnf->value("timestamping","on") == "off") ? 1 : 0);

    // Connection
    ui->cDNSCache->setCurrentIndex((cnf->value("dns_cache","on") == "off") ? 1 : 0);
    ui->cDNSto->setValue(cnf->value("dns_timeout",0).toInt(&ok));
    ui->cRedir->setValue(cnf->value("max_redirect",20).toInt(&ok));
    ui->cTimeOut->setValue(cnf->value("connect_timeout",0).toInt(&ok));
    ui->cUseProxy->setCurrentIndex((cnf->value("use_proxy","on") == "off") ? 1 : 0);
    ui->cWaitRet->setValue(cnf->value("wait_retry",0).toInt(&ok));
    ui->cWaitRel->setValue(cnf->value("wait",0).toInt(&ok));

    // HTTP
    ui->hILength->setCurrentIndex((cnf->value("ignore_length","on") == "off") ? 1 : 0);
    ui->hCache->setCurrentIndex((cnf->value("cache","on") == "off") ? 0 : 1);
    ui->hHeader->setText(cnf->value("header","").toString());
    ui->hUserAgent->setText(cnf->value("user_agent","").toString());

    // FTP
    ui->fPasiveFTP->setCurrentIndex((cnf->value("passive_ftp","on") == "off") ? 1 : 0);
    ui->fRetSym->setCurrentIndex((cnf->value("retr_symlinks","on") == "off") ? 1 : 0);

    // log
    ui->lDotByte->setValue(cnf->value("dot_bytes",1024).toInt(&ok));
    ui->lDotLine->setValue(cnf->value("dots_in_line",50).toInt(&ok));
    ui->lDotSpace->setValue(cnf->value("dot_spacing",10).toInt(&ok));

    // user
    ui->uUser->setText(cnf->value("user","").toString());
    ui->uPass->setText(cnf->value("password","").toString());
    ui->uHUser->setText(cnf->value("http_user","").toString());
    ui->uHPass->setText(cnf->value("http_password","").toString());
    ui->uFUser->setText(cnf->value("ftp_user","").toString());
    ui->uFPass->setText(cnf->value("ftp_password","").toString());
    ui->uUseAll->setChecked(false);

    // Backup
//    ui->gBackground->setCurrentIndex((cnf->value("background","off") == "off") ? 1 : 0);
//    ui->gIgnoreCase->setCurrentIndex((cnf->value("ignore_case","on") == "off") ? 1 : 0);
//    ui->gIP4->setCurrentIndex((cnf->value("inet4_only","off") == "off") ? 1 : 0);
//    ui->gIP6->setCurrentIndex((cnf->value("inet6_only","off") == "off") ? 1 : 0);
//    ui->gLimit->setChecked(false);
//    ui->gLimitVal->setValue(cnf->value("limit_rate",0).toInt(&ok));
//    ui->gQuota->setChecked(false);
//    ui->gQuotaVal->setValue(cnf->value("quota",0).toInt(&ok));
//    ui->gMirror->setCurrentIndex((cnf->value("mirror","off") == "off") ? 1 : 0);
//    ui->gNetRc->setCurrentIndex((cnf->value("netrc","off") == "off") ? 1 : 0);
//    ui->gTimeStamping->setCurrentIndex((cnf->value("timestamping","on") == "off") ? 1 : 0);
//
//    // Connection
//    ui->cDNSCache->setCurrentIndex((cnf->value("dns_cache","on") == "off") ? 1 : 0);
//    ui->cDNSto->setValue(cnf->value("dns_timeout",0).toInt(&ok));
//    ui->cRedir->setValue(cnf->value("max_redirect",20).toInt(&ok));
//    ui->cTimeOut->setValue(cnf->value("connect_timeout",0).toInt(&ok));
//    ui->cUseProxy->setCurrentIndex((cnf->value("use_proxy","on") == "off") ? 1 : 0);
//    ui->cWaitRet->setValue(cnf->value("wait_retry",0).toInt(&ok));
//    ui->cWaitRel->setValue(cnf->value("wait",0).toInt(&ok));
//
//    // HTTP
//    ui->hILength->setCurrentIndex((cnf->value("ignore_length","on") == "off") ? 1 : 0);
//    ui->hCache->setCurrentIndex((cnf->value("cache","on") == "off") ? 1 : 0);
//    ui->hHeader->setText(cnf->value("header","").toString());
//    ui->hUserAgent->setText(cnf->value("user_agent","").toString());
//
//    // FTP
//    ui->fPasiveFTP->setCurrentIndex((cnf->value("passive_ftp","on") == "off") ? 1 : 0);
//    ui->fRetSym->setCurrentIndex((cnf->value("retr_symlinks","on") == "off") ? 1 : 0);
//
//    // log
//    ui->lDotByte->setValue(cnf->value("dot_bytes",1024).toInt(&ok));
//    ui->lDotLine->setValue(cnf->value("dots_in_line",50).toInt(&ok));
//    ui->lDotSpace->setValue(cnf->value("dot_spacing",10).toInt(&ok));
//
//    // user
//    ui->uUser->setText(cnf->value("user","").toString());
//    ui->uPass->setText(cnf->value("password","").toString());
//    ui->uHUser->setText(cnf->value("http_user","").toString());
//    ui->uHPass->setText(cnf->value("http_password","").toString());
//    ui->uFUser->setText(cnf->value("ftp_user","").toString());
//    ui->uFPass->setText(cnf->value("ftp_password","").toString());
//    ui->uUseAll->setChecked(false);
}

void DialogWgetrc::writeWgetRc() {

}

void DialogWgetrc::change(int i) {
    ui->stacked->setCurrentIndex(i);
}
