#include "dialoglinkchecker.h"
#include "ui_dialoglinkchecker.h"
#include <QProcess>
#include <QDir>
#include <QDebug>

DialogLinkChecker::DialogLinkChecker(/*QStringList l,*/ QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogLinkChecker)
{
    ui->setupUi(this);
//    setModal(true);
//    setLinks(l);
    qDebug() << link;
    model = new QStandardItemModel();
    model->setHorizontalHeaderLabels(
            QStringList()
            << "Download From"
            << "File Type"
            << "Size"
            << "Status");
    ui->tvLink->setModel(model);
    ui->tvLink->setColumnWidth(0,300);

    connect(ui->pbBrowse,SIGNAL(clicked()),this,SLOT(browse()));
    connect(ui->pbOk,SIGNAL(clicked()),this,SLOT(ok()));
    connect(ui->pbClose,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pbStart,SIGNAL(clicked()),this,SLOT(checkSingleLink()));

}

DialogLinkChecker::~DialogLinkChecker()
{
    delete ui;
}

void DialogLinkChecker::changeEvent(QEvent *e)
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

void DialogLinkChecker::setLinks(QStringList l) {
    link = l;

    for(int i = 0; i < link.length(); i++) {
        QStandardItem *i0 = new QStandardItem();
        QStandardItem *i1 = new QStandardItem();
        QStandardItem *i2 = new QStandardItem();
        QStandardItem *i3 = new QStandardItem();
        i0->setData(l.at(i),Qt::DisplayRole);

        model->appendRow(QList<QStandardItem*>() <<i0<<i1<<i2<<i3);
    }
//    qDebug() << link;
//    checkSingleLink();
//    ui->tvLink->setModel(model);
//    qDebug() << "setelah cek Single link";

}

void DialogLinkChecker::checkSingleLink() {
    qDebug() << "link checker";
//    QProcess *p = new QProcess();
    QDir dir;
    dir.setPath(QDir::homePath().append("/.q-uma/tmp"));
    qDebug() << dir.absolutePath();
    if(!dir.exists()) {
        if(!dir.mkpath(dir.absolutePath())) {
            if(dir.mkpath(QDir::tempPath().append("/q-uma"))) {
                qDebug() << "Can not create temporari path!!!";
            } else {
                dir.setPath(QDir::tempPath().append("/q-uma"));
            }
        } else {
            dir.setPath(QDir::homePath().append("/.q-uma/tmp"));
        }
    }
    dir.cd(dir.path());

    qDebug() << dir.currentPath();
    // set directory kerja ke ~/q-uma/tmp
    for(int i = 0; i < link.length(); i++) {
        qDebug() << "Masik loop link checker ke-" << i;
        QProcess *p = new QProcess();
        p->execute("wget",QStringList()
                   << QString(link.at(i))
                   << "--spider"
                   << "-o" << "batch.log");

        // cek log!!! jika proses udah selese.
        qDebug() << "enter check log";
        QFile ff("batch.log");
        if (!ff.open(QIODevice::ReadOnly | QIODevice::Text))
                 qDebug() << "Cannot read log!!!";

        while (!ff.atEnd()) {
             QString line = ff.readLine();
             if(line.contains("failed:",Qt::CaseInsensitive)) {
                 qDebug() << "FAILED";
                 QStandardItem *i3 = new QStandardItem();
                 int p = line.lastIndexOf(":");
                 i3->setData(line.mid(p+1),Qt::DisplayRole);
                 model->setItem(i,3,i3);
             }
             if(line.contains("Length:",Qt::CaseInsensitive)) {
                 qDebug() << "FOUND";
                 QStandardItem *a =new QStandardItem(); // size
                 int pt = line.indexOf(":");
                 int pk = line.indexOf("[");
                 int ps = pk - pt;
                 a->setData(line.mid(pt+1,ps-1),Qt::DisplayRole);
                 model->setItem(i,2,a);

                 // filetypes
                 QStandardItem *b =new QStandardItem();
                 pt = line.indexOf("]");
                 ps = pt - pk;
                 b->setData(line.mid(pk+1,ps-1),Qt::DisplayRole);
                 model->setItem(i,1,b);
             }
             if(line.contains("404 Not Found",Qt::CaseInsensitive)) {
                 qDebug() << "NOT FOUND";
                 QStandardItem *i3 = new QStandardItem();
                 i3->setData("Nof Found",Qt::DisplayRole);
                 model->setItem(i,3,i3);
             }
        }
    }
}

void DialogLinkChecker::selectLink() {

}

void DialogLinkChecker::browse() {

}

void DialogLinkChecker::ok() {

}

void DialogLinkChecker::clOse() {

}

void DialogLinkChecker::tampil() {
    setVisible(true);
}
