#include "dialogscheduler.h"
#include "ui_dialogscheduler.h"
#include <QDebug>

DialogScheduler::DialogScheduler(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogScheduler)
{
    ui->setupUi(this);
//    ui->tbScheduler->setItemText(0,tr("Scheduler"));
//    ui->tbScheduler->setItemText(1,tr("Queue"));
//    ui->tbScheduler->setCurrentIndex(0);
//    ui->rbOnceAt->setChecked(true);
//    ui->deOnceAt->setEnabled(true);
//    ui->deOnceAt->setDate(QDate::currentDate());

    cnf = new QSettings("Q-Uma","quma-skripsi",this);


    // Main Connection
    connect(ui->cbStartAt,SIGNAL(toggled(bool)),
            ui->teStartAt,SLOT(setEnabled(bool)));
//    connect(ui->cbStartAt,SIGNAL(toggled(bool)),
//            ui->gbStartAt,SLOT(setEnabled(bool)));
//    connect(ui->rbOnceAt,SIGNAL(toggled(bool)),
//            ui->deOnceAt,SLOT(setEnabled(bool)));
//    connect(ui->rbDaily,SIGNAL(toggled(bool)),
//            ui->gbDaily,SLOT(setEnabled(bool)));
    connect(ui->cbStopAt,SIGNAL(toggled(bool)),
            ui->teStopAt,SLOT(setEnabled(bool)));
//    connect(ui->cbRetNum,SIGNAL(toggled(bool)),
//            ui->sbRetNum,SLOT(setEnabled(bool)));
//    connect(ui->tableView,SIGNAL(clicked(QModelIndex)),
//            this,SLOT(queueItemSelected()));
//    connect(ui->tableView,SIGNAL(activated(QModelIndex)),
//            this,SLOT(queueItemSelected()));
    connect(ui->pbApply,SIGNAL(clicked()),this,SLOT(apply()));
    connect(ui->pbClose,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pbStart,SIGNAL(clicked()),this,SLOT(start()));
    connect(ui->pbStop,SIGNAL(clicked()),this,SLOT(stop()));
//    connect(ui->pbUp,SIGNAL(clicked()),this,SLOT(up()));
//    connect(ui->pbDown,SIGNAL(clicked()),this,SLOT(down()));

    initAll();
    setWindowTitle(tr("Scheduler"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/History.png"));
}

//void DialogScheduler::setTableModel(QStandardItemModel* model) {
////    ui->tableView->setModel(model);
//    ui->tableView->setColumnHidden(0,true);
//    ui->tableView->setColumnHidden(1,true);
//    ui->tableView->setColumnHidden(2,true);
//    ui->tableView->setColumnWidth(3,300);
//    ui->tableView->setColumnWidth(4,100);
//    ui->tableView->setColumnWidth(5,100);
//    ui->tableView->setColumnHidden(6,true);
//    ui->tableView->setColumnHidden(7,true);
//    ui->tableView->setColumnHidden(8,true);
//    ui->tableView->setColumnHidden(9,true);
//
//
//}

void DialogScheduler::initAll() {
    // init all config, load from config file

    //tabel
//    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
//    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
//    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    // window
    setWindowTitle(tr("Scheduller"));

    // load config
    bool ok = true;
    cnf->beginGroup("scheduler");
    int st = cnf->value("auto-start",0).toInt(&ok);
    if(st == 0) {
        ui->cbStartAt->setChecked(false);
    } else {
        ui->cbStartAt->setChecked(true);
    }
    // Starting time
    ui->teStartAt->setTime(QTime::fromString(cnf->value("start-time","8:0:0 AM").toString(),"h:m:s AP"));

    if(cnf->value("auto-stop",0).toInt(&ok) == 0) {
        ui->cbStopAt->setChecked(false);
    } else {
        ui->cbStopAt->setChecked(true);
    }

    // stop time
    ui->teStopAt->setTime(QTime::fromString(cnf->value("stop-at","9:0:0 AM").toString(),"h:m:s AP"));



    // once at
//    if(cnf->value("once-atime",0).toInt(&ok) == 0) {
//        ui->rbDaily->setChecked(true);
//
//    } else {
//        ui->rbOnceAt->setChecked(true);
//    }
    // once
//    cnf->setValue("one-date",ui->deOnceAt->date().toString("ddd MMMM dd, yyyy"));
//    ga di load set auro dengan QDate ke current Date
//    // daily
//    //sunday
//    if(cnf->value("sun",0).toInt(&ok) == 0) {
//        ui->cbSun->setChecked(false);
//    } else {
//        ui->cbSun->setChecked(true);
//    }
//    // monday
//    if(cnf->value("mon",0).toInt(&ok) == 0) {
//        ui->cbMon->setChecked(false);
//    } else {
//        ui->cbMon->setChecked(true);
//    }
//    // tuesday
//    if(cnf->value("tue",0).toInt(&ok) == 0) {
//        ui->cbTue->setChecked(false);
//    } else {
//        ui->cbTue->setChecked(true);
//    }
//    // wednesday
//    if(cnf->value("wed",0).toInt(&ok) == 0) {
//        ui->cbWed->setChecked(false);
//    } else {
//        ui->cbWed->setChecked(true);
//    }
//    // thursday
//    if(cnf->value("thu",0).toInt(&ok) == 0) {
//        ui->cbThu->setChecked(false);
//    } else {
//        ui->cbThu->setChecked(true);
//    }
//    // fryday
//    if(cnf->value("fry",0).toInt(&ok) == 0) {
//        ui->cbFry->setChecked(false);
//    } else {
//        ui->cbFry->setChecked(true);
//    }
//    // saturday
//    if(cnf->value("sat",0).toInt(&ok) == 0) {
//        ui->cbSat->setChecked(false);
//    } else {
//        ui->cbSat->setChecked(true);
//    }

    // stop download at

    //ret num
//    ui->sbRetNum->setValue(cnf->value("ret-number",0).toInt(&ok) );

    // run number
//    ui->sbRun->setValue(cnf->value("run-number",4).toInt(&ok));

//    ui->teStartAt
    cnf->endGroup();

}

DialogScheduler::~DialogScheduler()
{
    delete ui;
}

//void DialogScheduler::queueItemSelected() {
//    if(ui->tableView->currentIndex().row() <= 0) {
//        ui->pbDown->setEnabled(true);
//        ui->pbUp->setEnabled(false);
//    } else if(ui->tableView->currentIndex().row() >= ui->tableView->model()->rowCount()-1){
//        ui->pbDown->setEnabled(false);
//        ui->pbUp->setEnabled(true);
//    } else {
//        ui->pbDown->setEnabled(true);
//        ui->pbUp->setEnabled(true);
//    }
//
//}
void DialogScheduler::apply() {
    qDebug() << "start time: " << ui->teStartAt->time().toString("h:m AP");

    cnf->beginGroup("scheduler");
    // auto start
    if(ui->cbStartAt->isChecked()) {
        cnf->setValue("auto-start",1);
    } else {
        cnf->setValue("auto-start",0);
    }
    // Starting time
    cnf->setValue("start-time",ui->teStartAt->time().toString("h:m AP"));

    // stop download at
    if(ui->cbStopAt->isChecked()) {
        cnf->setValue("auto-stop",1);
    } else {
        cnf->setValue("auto-stop",0);
    }
    // stop time
    cnf->setValue("stop-at",ui->teStopAt->time().toString("h:m AP"));


//    // once at
//    if(ui->rbOnceAt->isChecked()) {
//        cnf->setValue("once-atime",1);
//    } else {
//        cnf->setValue("once-atime",0);
//    }
    // once
//    cnf->setValue("one-date",ui->deOnceAt->date().toString("ddd MMMM dd, yyyy"));
    // daily
    //sunday
//    if(ui->cbSun->isChecked()) {
//        cnf->setValue("sun",1);
//    } else {
//        cnf->setValue("sun",0);
//    }
//    // monday
//    if(ui->cbMon->isChecked()) {
//        cnf->setValue("mon",1);
//    } else {
//        cnf->setValue("mon",0);
//    }
//    // tuesday
//    if(ui->cbTue->isChecked()) {
//        cnf->setValue("tue",1);
//    } else {
//        cnf->setValue("tue",0);
//    }
//    // wednesday
//    if(ui->cbWed->isChecked()) {
//        cnf->setValue("wed",1);
//    } else {
//        cnf->setValue("wed",0);
//    }
//    // thursday
//    if(ui->cbThu->isChecked()) {
//        cnf->setValue("thu",1);
//    } else {
//        cnf->setValue("thu",0);
//    }
//    // fryday
//    if(ui->cbFry->isChecked()) {
//        cnf->setValue("fry",1);
//    } else {
//        cnf->setValue("fry",0);
//    }
//    // saturday
//    if(ui->cbSat->isChecked()) {
//        cnf->setValue("sat",1);
//    } else {
//        cnf->setValue("sat",0);
//    }


    //ret num
//    if(ui->cbRetNum->isChecked()) {
//        cnf->setValue("ret-number",ui->sbRetNum->value());
//    }

    // run number
//    cnf->setValue("run-number",ui->sbRun->value());

    cnf->endGroup();
}

void DialogScheduler::start() {

}

void DialogScheduler::stop() {

}

//void DialogScheduler::up() {
//
//}
//
//void DialogScheduler::down() {
//
//}


void DialogScheduler::changeEvent(QEvent *e)
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
