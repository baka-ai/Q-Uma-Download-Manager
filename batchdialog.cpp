#include "batchdialog.h"
#include "ui_batchdialog.h"
#include <QToolTip>
#include <QtDebug>
#include <exception>
#include <QFileDialog>
#include <QDir>
#include <QMessageBox>
#include <QFileInfo>

BatchDialog::BatchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::BatchDialog)
{
    ui->setupUi(this);
    ui->rbNumber->setChecked(true);
    toggleStatus(true);
    ui->leSaveDir->setText(QDir::homePath());

    //init komponen untuk pilihan number
    ui->sbFrom->setMinimum(0);
    ui->sbTo->setMinimum(0);
    ui->sbWildcard->setMinimum(1);
    ui->sbWildcard->setMaximum(3);
    ui->sbWildcard->setValue(2);
    ui->sbFrom->setMaximum(98);
    ui->sbTo->setMaximum(99);
    ui->sbTo->setValue(99);

    // init komponen untuk pilihan letter
    ui->cbAkhir->setCurrentIndex(25);
    ui->cbUpperCase->setChecked(true);



    // connections
    connect(ui->leUrl,SIGNAL(textChanged(QString)),
            this,SLOT(changeWildcard()));
    connect(ui->rbNumber,SIGNAL(clicked()),
            this,SLOT(showHideFirstTo()));
    connect(ui->rbLetter,SIGNAL(clicked()),
            this,SLOT(showHideFirstTo()));
    connect(ui->sbWildcard,SIGNAL(valueChanged(int)),
            this,SLOT(setWildcard(int)));
//    connect(ui->sbFrom,SIGNAL(valueChanged(int)),
//            this,SLOT(changeWildcard()));
    connect(ui->sbFrom,SIGNAL(valueChanged(int)),
            this,SLOT(setMinTo()));
    connect(ui->sbTo,SIGNAL(valueChanged(int)),
            this,SLOT(setStop()));
    connect(ui->sbWildcard,SIGNAL(valueChanged(int)),
            this,SLOT(changeWildcard()));
    connect(ui->sbFrom,SIGNAL(valueChanged(int)),
            this,SLOT(setMinTo()));
    connect(ui->cbMulai,SIGNAL(currentIndexChanged(int)),
            this,SLOT(cekLetter()));
    connect(ui->cbAkhir,SIGNAL(currentIndexChanged(int)),
            this,SLOT(cekLetter()));
    connect(ui->rbLetter,SIGNAL(clicked()),
            this,SLOT(cekLetter()));
    connect(ui->pbOk,SIGNAL(clicked()),
            this,SLOT(pbOke()));
    connect(ui->pbCancel,SIGNAL(clicked()),
            this,SLOT(pbCancel()));
    connect(ui->pbBrowseDir,SIGNAL(clicked()),
            this,SLOT(browse()));

    setWindowTitle(tr("New Batch Downloads"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Add Green Button.png"));
}

BatchDialog::~BatchDialog()
{
    delete ui;
}

void BatchDialog::changeEvent(QEvent *e)
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


void BatchDialog::setMinTo() { /* set nilai minimum untuk sbTo */
    ui->sbTo->setMinimum(ui->sbFrom->value()+1);
    changeWildcard();
}

void BatchDialog::changeWildcard() {
    /* changing wildcard asteriks into number or letter*/

    // check if there are asteriks character
    if(!ui->leUrl->text().contains("*",Qt::CaseInsensitive)) {
        QToolTip::showText(this->pos(),
                           tr("Dont forget to add Asteriks *"),
                           this);
        ui->leFirst->setText("");
        ui->leSecond->setText("");
        ui->leLast->setText("");
    }
    else {
        if(ui->rbNumber->isChecked()) {
            swapAngka();
        } else {
            swapLetter();
        }
    }

}

void BatchDialog::swapAngka() {

    // cek banyanya asterik
    QString url,tmp;
    url = ui->leUrl->text();
    tmp = "0000";

    int lg,wc,a,b;
    lg = ui->sbTo->value() - ui->sbFrom->value();
    wc = ui->sbWildcard->value();
    a = ui->sbFrom->value();
    b = ui->sbTo->value();

    QString lu[lg+1];

    for(int i = 0; i <= lg; i++) {
        lu[i] = url;
    }

    QString tt;
    int i = 0;
        for(int j = a; j <= b;j++) {
            tt.setNum(j);
            tmp = "0000";
            if(wc == 1) {
                lu[i].replace("*",tt);
            } else {
                tmp.append(tt);
                QString s = tmp.right(wc);
                lu[i].replace("*",s);
            }
            i++;
        }
    ui->leFirst->setText(lu[0]);
    ui->leSecond->setText(lu[1]);
    ui->leLast->setText(lu[lg]);

    QStringList list;
    for( int i = 0; i <= lg; i++) {
        list << lu[i];
    }
    listUrl = list;
}

void BatchDialog::cekLetter() {
    if(ui->cbMulai->currentIndex() >= ui->cbAkhir->currentIndex()) {
        if(ui->cbMulai->currentIndex() >= 25) {
            ui->cbAkhir->setEnabled(false);
        }
        else{
            ui->cbAkhir->setEnabled(true);
            ui->cbAkhir->setCurrentIndex(ui->cbMulai->currentIndex() + 1);
        }
    } else {
        ui->cbAkhir->setEnabled(true);
    }
    swapLetter();
}

void BatchDialog::swapLetter() {

    QString llt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    QString url,tmp;
    url = ui->leUrl->text();

    int aw, ak;
    aw = ui->cbMulai->currentIndex();
    ak = ui->cbAkhir->currentIndex();
    int lg = ak - aw;
    if(lg < 0)
        lg = 0;
    QString lu[lg + 1];

    if(ui->cbAkhir->isEnabled()) { // kalo awal bukan Z 
        for(int i = 0; i <= lg; i++) {
            lu[i] = url;
            QString cc;
            cc.append(llt.at(aw+i));
            lu[i].replace("*",cc);
        }
        ui->leFirst->setText(lu[0]);
        ui->leSecond->setText(lu[1]);
        ui->leLast->setText(lu[lg]);
    } else {
        lu[0] = url;
        QString cc;
        cc.append(llt.at(aw));
        lu[0].replace("*",cc);

        ui->leFirst->setText(lu[0]);
        ui->leSecond->setText("");
        ui->leLast->setText(lu[lg]);
    }

    QStringList list;
    for( int i = 0; i <= lg; i++) {
        list << lu[i];
    }
    listUrl = list;
}

void BatchDialog::isiContoh() {
}

void BatchDialog::pbOke() {
    if(ui->leSaveDir->text().isEmpty()) {
        QMessageBox::warning(this,tr("Please select Saveing Directory"),
                             tr("Please select saving directory for this list"));
        return;
    }
    QDir ddr(ui->leSaveDir->text());
//    QFileInfo inf(ui->leSaveDir->text());
    if(!ddr.exists()) {
        if(QMessageBox::question(this,tr("Directory not exist!!"),
                             tr("Directory does't exist! Create?"),
                             QMessageBox::Ok|QMessageBox::Cancel)
            == QMessageBox::Ok) {
            if(!ddr.mkpath(ui->leSaveDir->text())) {
                QMessageBox::critical(this,tr("Cannot create Directory"),
                    tr("Cannot create Directory, please select an other one!!!"));
                return;
            }
        } else {
            return;
        }
    }

    emit sendList(listUrl,ddr.absolutePath());
    accept();
}

void BatchDialog::pbCancel() {
    reject();
}

void BatchDialog::showHideFirstTo() {
    if(ui->rbNumber->isChecked()) {
        toggleStatus(true);
    } else {
        toggleStatus(false);
    }
}

void BatchDialog::toggleStatus(bool stat) {
    ui->cbAkhir->setShown(!stat);
    ui->cbMulai->setShown(!stat);
    ui->cbUpperCase->setShown(!stat);
    ui->sbFrom->setShown(stat);
    ui->sbTo->setShown(stat);
    ui->labelWildcard->setShown(stat);
    ui->sbWildcard->setShown(stat);
}

void BatchDialog::setWildcard(int w) {
    // maximum wildcard 3 angka/tingkat untuk menanggulangi overloading
    switch(w) {
    case 1:
        ui->sbFrom->setMaximum(998);
        ui->sbTo->setMaximum(999);
        ui->sbTo->setValue(999);
        break;
    case 2:
        ui->sbFrom->setMaximum(98);
        ui->sbTo->setMaximum(99);
        ui->sbTo->setValue(99);
        break;
    case 3:
        ui->sbFrom->setMaximum(998);
        ui->sbTo->setMaximum(999);
        ui->sbTo->setValue(99);
        break;
    default:
        ui->sbFrom->setMaximum(998);
        ui->sbTo->setMaximum(999);
        ui->sbTo->setValue(999);
        break;
    }
}

QStringList BatchDialog::getList() {
    return listUrl;
}

void BatchDialog::browse() {
    QString ttd = QFileDialog::getExistingDirectory(
            this,tr("Select Project Directory"),
            QDir::homePath(),
            QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
    ui->leSaveDir->setText(ttd);

}

void BatchDialog::setStart() {
    if(ui->sbFrom->value() < ui->sbTo->value() && ui->sbTo != 0) {
        ui->sbFrom->setValue(ui->sbTo->value()-1);
    }
}

void BatchDialog::setStop() {
    if(ui->sbFrom->value() > ui->sbTo->value() &&  ui->sbFrom->value() != ui->sbTo->maximum()) {
        ui->sbTo->setValue(ui->sbFrom->value()+1);
    }
    changeWildcard();
}
