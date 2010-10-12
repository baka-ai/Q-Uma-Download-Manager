#include "dialogimport.h"
#include "ui_dialogimport.h"
#include <QMessageBox>
#include <QFileDialog>

DialogImport::DialogImport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogImport)
{
    ui->setupUi(this);
    ui->stackedWidget->setCurrentIndex(0);
    ui->pbBack->setEnabled(false);
    cnf = new QSettings("Q-Uma","quma-skripsi",this);

    cnf->beginReadArray("category");
    cnf->setArrayIndex(4);
    saveto = cnf->value("savedir",QDir::homePath().append("/Downloads")).toString();
    ui->leSaveTo->setText(saveto);
    cnf->endArray();

    connect(ui->stackedWidget,SIGNAL(currentChanged(int)),this,SLOT(indexCh(int)));
    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(cancel()));
    connect(ui->pbBack,SIGNAL(clicked()),this,SLOT(back()));
    connect(ui->pbNext,SIGNAL(clicked()),this,SLOT(next()));
    connect(ui->tbBrowse,SIGNAL(clicked()),this,SLOT(browse()));

    setWindowTitle(tr("Import Download List"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Import Document.png"));
}

DialogImport::~DialogImport()
{
    delete ui;
}

void DialogImport::changeEvent(QEvent *e)
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

void DialogImport::next() {
    if(ui->stackedWidget->currentIndex() == 0) {
        ui->stackedWidget->setCurrentIndex(1);
    } else {
        if(ui->leSaveTo->text().isEmpty()) {
            QMessageBox::critical(this,
                                  tr("Please set Save directory"),
                                  tr("Please specify saving directory!"),QMessageBox::Ok);
            return;
        }
        emit send(ui->comboBox->currentIndex(),ui->leSaveTo->text());
        done(0);
    }

}

void DialogImport::back() {
    if(ui->stackedWidget->currentIndex() == 1) {
        ui->stackedWidget->setCurrentIndex(0);
    } else {
        return;
    }
}

void DialogImport::cancel() {
    if(QMessageBox::question(this,
                          tr("Cancel"),
                          tr("Are you sure?"),QMessageBox::Ok|QMessageBox::Cancel) == QMessageBox::Ok) {
        close();
    } else {
        return;
    }
}

void DialogImport::indexCh(int i) {
    switch(i) {
    case 0:
        ui->pbBack->setEnabled(false);
        ui->pbNext->setText(tr("&Next"));
        break;
    case 1:
        ui->pbBack->setEnabled(true);
        ui->pbNext->setText(tr("&Finish"));
    }

}

void DialogImport::browse() {
    QString ddr = QFileDialog::getExistingDirectory(this,
                                      tr("Select Save Directory"),
                                      saveto,
                                      QFileDialog::ShowDirsOnly |
                                      QFileDialog::DontResolveSymlinks);
    if(ddr.isEmpty()) {
        ddr = saveto;
    }
    ui->leSaveTo->setText(ddr);
}
