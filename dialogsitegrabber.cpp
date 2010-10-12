#include "dialogsitegrabber.h"
#include "ui_dialogsitegrabber.h"
#include <QMessageBox>
#include <QDir>
#include <QFileDialog>
#include <QDebug>

DialogSiteGrabber::DialogSiteGrabber(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogSiteGrabber)
{
    ui->setupUi(this);
    loadConfig();

    // conection
    connect(ui->pbNext,SIGNAL(clicked()),
            this,SLOT(next()));
    connect(ui->pbBack,SIGNAL(clicked()),
            this,SLOT(back()));
//    connect(ui->cbAcceptList,SIGNAL(editTextChanged(QString)),
//            this,SLOT(addFilter()));
//    connect(ui->pbAddFilterAcc,SIGNAL(clicked()),
//            this,SLOT(addFilter()));
    connect(ui->pbRun,SIGNAL(clicked()),
            this,SLOT(run()));
    connect(ui->pbPDir,SIGNAL(clicked()),
            this,SLOT(browse()));
    connect(ui->stackedWidget,SIGNAL(currentChanged(int)),
            this,SLOT(pageChanged(int)));
    connect(ui->pbCancel,SIGNAL(clicked()),
            this,SLOT(cancel()));
    connect(ui->cbPType,SIGNAL(currentIndexChanged(int)),
            this,SLOT(typeChanged(int)));
    connect(ui->lePName,SIGNAL(textChanged(QString)),
            this,SLOT(lePNameChanged(QString)));
    connect(ui->lePDir,SIGNAL(textChanged(QString)),
            this,SLOT(lePDirChanged(QString)));
    connect(ui->lePURL,SIGNAL(textChanged(QString)),
            this,SLOT(lePURLChanged(QString)));
    connect(ui->leFTPURL,SIGNAL(textChanged(QString)),
            this,SLOT(leFTPURLChanged(QString)));

    setWindowTitle(tr("New Grabber Project"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Web Browser.png"));
}


// setStyleSheet("QLineEdit { background: white }")
DialogSiteGrabber::~DialogSiteGrabber()
{
    delete ui;
}

void DialogSiteGrabber::changeEvent(QEvent *e)
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

void DialogSiteGrabber::next() {
    if(ui->stackedWidget->currentIndex() == 0) {
        switch(ui->cbPType->currentIndex()) {
        case 0:
            ui->stackedWidget->setCurrentIndex(1);
            break;
        case 1:
            ui->stackedWidget->setCurrentIndex(2);
            break;
        case 2:
            ui->stackedWidget->setCurrentIndex(3);
            break;
        }
    }
}

void DialogSiteGrabber::back() {
    if(ui->stackedWidget->currentIndex() != 0){
        ui->stackedWidget->setCurrentIndex(0);
    }

}

void DialogSiteGrabber::run() {
    QStringList opts;
    if(!ftp) {
        if(ui->lePURL->text().isEmpty()) {
            QMessageBox::warning(this,tr("Insert URL"),
                                 tr("Please insert Project URL.\nClick Back and insert URL."));
            return;
        }
    }

    // creating options
    projectName = ui->lePName->text();
    projectDir  = ui->lePDir->text();
    QDir pdr(projectDir);
    if(!pdr.exists()) {
        if(QMessageBox::question(this,tr("Directory not exist!!"),
                             tr("Directory does't exist! Create?"),
                             QMessageBox::Ok|QMessageBox::Cancel)
            == QMessageBox::Ok) {
            if(!pdr.mkpath(projectDir)) {
                QMessageBox::critical(this,tr("Cannot create Directory"),
                    tr("Cannot create Directory, please select an other one!!!"));
                return;
            }
        }
    }

    if(ftp)
        projectURL  = ui->leFTPURL->text();
    else
        projectURL  = ui->lePURL->text();
    projectType = ui->cbPType->currentIndex();

    if(projectType == 0) {
        QStringList proto0;
        mirror      = ui->cbMirror->isChecked();
        if(mirror) {
            proto0 << "-m";

        } else {
            level = ui->sbLevelDepthOBP->value();
            proto0 << QString("--level=%0").arg(level);

            convLinks = ui->cbConvertLinkOBP->isChecked();
            if(convLinks) {
                proto0 << "-k";
                crtBackup = ui->cbCreateBackupOBP->isChecked();
                if(crtBackup) {
                    proto0 << "-K";
                }
            }

            fFTP = ui->cbFollowFTPOBP->isChecked();
            if(fFTP) {
                proto0 << "--follow-ftp";
            }

            fRelOnly = ui->cbFollowRelativeOBP->isChecked();
            if(fRelOnly) {
                proto0 << "-L";
            }

            noParent = ui->cbNoParentOBP->isChecked();
            if(noParent) {
                proto0 << "-np";
            }
        }
        opts = proto0;
    } else if(projectType == 1)  { // ftp
        QStringList ftpOpt;
        level = ui->sbLevelDepthFTP->value();
        ftpOpt << QString("--level=%0").arg(level);

        retSymLnk = ui->cbRetrieveSimLinkFTP->isChecked();
        if(retSymLnk) {
            ftpOpt << "--retr-symlinks";
        }

        useAcc = ui->gbUseAcc->isChecked();
        if(useAcc) {
            uname = ui->leUser->text();
            upass = ui->lePass->text();
            ftpOpt << QString("--ftp-user=%0").arg(uname)
                    << QString("--ftp-password=%0").arg(upass);
        }
        opts = ftpOpt;

    } else {                        // Custom
        QStringList proto0;
        level = ui->sbLevelDepthCP->value();
        proto0 << QString("--level=%0").arg(level);
        convLinks = ui->cbConvertLinkCP->isChecked();
        if(convLinks) {
            proto0 << "-k";
            crtBackup = ui->cbCreateBackupCP->isChecked();
            if(crtBackup) {
                proto0 << "-K";
            }
        }

        fFTP = ui->cbFollowFTPCP->isChecked();
        if(fFTP) {
            proto0 << "--follow-ftp";
        }

        fRelOnly = ui->cbSearchLocalOnly->isChecked();
        if(fRelOnly) {
            proto0 << "-L";
        }

        noParent = ui->cbNoParentCP->isChecked();
        if(noParent) {
            proto0 << "-np";
        }

        if(ui->cbAcceptList->currentIndex() != 0) {
            accList = ui->cbAcceptList->currentText();
            proto0 << QString("--accept=%0").arg(accList);
        }
        if(ui->cbRejectList->currentIndex() != 0) {
            rjjList = ui->cbRejectList->currentText();
            proto0<< QString("--reject=%0").arg(rjjList);
        }

        opts = proto0;
    }
    qDebug() << projectName << projectDir << projectURL << opts;

    emit runProject(projectName,projectDir,projectURL,QStringList() << "-r" <<opts);
    close();
}

void DialogSiteGrabber::cancel() {
    if(QMessageBox::question(this,
                             tr("Canceling Grabber Project"),
                             tr("Are you sure"),
                             QMessageBox::Ok |
                             QMessageBox::Cancel) ==
       QMessageBox::Ok) {
        close();
    } else {
        return;
    }
}

void DialogSiteGrabber::addFilter() {

}

void DialogSiteGrabber::browse() {
    QString ttd = QFileDialog::getExistingDirectory(
            this,tr("Select Project Directory"),
            QDir::homePath(),
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->lePDir->setText(ttd);
}

void DialogSiteGrabber::pageChanged(int page) {
    switch(page) {
    case 0:
        ui->pbBack->setEnabled(false);
        ui->pbNext->setVisible(true);
        ui->pbRun->setVisible(false);
        ftp = false;
        break;
    case 1:
        ui->pbBack->setEnabled(true);
        ui->pbNext->setVisible(false);
        ui->pbRun->setVisible(true);
        ftp = false;
        break;
    case 2:
        ui->pbBack->setEnabled(true);
        ui->pbNext->setVisible(false);
        ui->pbRun->setVisible(true);
        ftp = true;
        break;
    case 3:
        ui->pbBack->setEnabled(true);
        ui->pbNext->setVisible(false);
        ui->pbRun->setVisible(true);
        ftp = false;
        break;
    }
}

void DialogSiteGrabber::typeChanged(int type) {
    if(type == 1) {
        ui->lePURL->setEnabled(false);
    } else {
        ui->lePURL->setEnabled(true);
    }
}

void DialogSiteGrabber::lePNameChanged(QString s) {
    if(s.isEmpty()) {
        ui->lePName->setStyleSheet("QLineEdit { color: red }");
        if(ui->lePDir->text().isEmpty()) {
            ui->pbNext->setEnabled(false);
        }
    } else {
        ui->lePName->setStyleSheet("QLineEdit { color: black }");
        if(ui->lePDir->text().isEmpty()) {
            ui->pbNext->setEnabled(false);
        } else {
            ui->pbNext->setEnabled(true);
        }
    }
}

void DialogSiteGrabber::lePDirChanged(QString s) {
    if(s.isEmpty()) {
        ui->lePDir->setStyleSheet("QLineEdit { color: red }");
        if(ui->lePName->text().isEmpty()) {
            ui->pbNext->setEnabled(false);
        }
    } else {
        ui->lePDir->setStyleSheet("QLineEdit { color: black }");
        if(ui->lePName->text().isEmpty()) {
            ui->pbNext->setEnabled(false);
        }else {
            ui->pbNext->setEnabled(true);
        }
    }
}

void DialogSiteGrabber::lePURLChanged(QString s) {
    if(s.isEmpty()) {
        ui->lePURL->setStyleSheet("QLineEdit { color: red }");
    } else {
        ui->lePURL->setStyleSheet("QLineEdit { color: black }");
    }
}

void DialogSiteGrabber::leFTPURLChanged(QString s) {
    if(s.isEmpty()) {
        ui->leFTPURL->setStyleSheet("QLineEdit { color: red }");
        ui->pbRun->setEnabled(false);
    } else {
        ui->leFTPURL->setStyleSheet("QLineEdit { color: black }");
        ui->pbRun->setEnabled(true);
    }
//    if(s.contains("*")) {
//        ui->sbLevelDepthFTP->setEnabled(false);
//        ui->label_14->setEnabled(false);
//    } else {
//        ui->sbLevelDepthFTP->setEnabled(true);
//        ui->label_14->setEnabled(true);
//    }
    // disabled, cause there are some wildcard like ?, [ and ] to retrive likns.
}

void DialogSiteGrabber::loadConfig() {
    ui->stackedWidget->setCurrentIndex(0);
    ui->pbRun->setVisible(false);
    ui->pbBack->setEnabled(false);
    ui->pbNext->setEnabled(false);
    ui->cbRejectList->setModel(ui->cbAcceptList->model());


    ui->lePDir->setText(QDir::homePath());
}
