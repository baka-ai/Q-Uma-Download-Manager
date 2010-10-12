#include "dialognew.h"
#include "ui_dialognew.h"
//#include "downloaddialog.h"
#include <QMessageBox>
#include <QClipboard>
#include <QUrl>
//#include <QUrlInfo>

#include <QDebug>

DialogNew::DialogNew(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNew)
{
    ui->setupUi(this);
    ui->gbUse->setChecked(false);
    getFromClipboard();

    // connection
    connect(ui->pbOk,SIGNAL(clicked()),this,SLOT(pbOk()));
    connect(ui->pbCancel,SIGNAL(clicked()),this,SLOT(pbCancel()));
    connect(ui->gbUse,SIGNAL(toggled(bool)),this,SLOT(getAuth()));

    setWindowTitle(tr("New Download"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Add.png"));
}

DialogNew::~DialogNew()
{
    delete ui;
}

void DialogNew::changeEvent(QEvent *e)
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
void DialogNew::getAuth() {


}

void DialogNew::getFromClipboard() {
    const QClipboard *clipboard = QApplication::clipboard();
    QString a = clipboard->text(QClipboard::Clipboard);
    if(a.isEmpty()) {
        return;
    }
    qDebug() << a;
    QRegExp rx("(^\\c+)(://)"); // filter Url
    if(a.startsWith("http:",Qt::CaseInsensitive) ||
       a.startsWith("https:",Qt::CaseInsensitive) ||
       a.startsWith("ftp:",Qt::CaseInsensitive) ||
       a.contains(rx)) {
        ui->leAddress->setText(a);
    }
}

void DialogNew::pbOk() {
//    DownloadDialog *ddl;
    if(ui->leAddress->text().isEmpty()) {
        QMessageBox::warning(this,tr("Insert Address"),
                             tr("Please insert download Url/Address"));
        return;
    }
    if(ui->gbUse->isChecked()) {
        if(ui->leUsername->text().isEmpty()) {
            QMessageBox::warning(this,
                                 tr("Insert Username"),
                                 tr("Please insert Username and password for this address"));
            return;
        }
        emit diterima(ui->leAddress->text(),
                      ui->leUsername->text(),
                      ui->lePass->text());
    } else {
        emit diterima(ui->leAddress->text());
    }
    accept();
}

void DialogNew::pbCancel() {
    reject();
}
