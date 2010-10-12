#include "dialogcredits.h"
#include "ui_dialogcredits.h"

DialogCredits::DialogCredits(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCredits)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
}

DialogCredits::~DialogCredits()
{
    delete ui;
}

void DialogCredits::changeEvent(QEvent *e)
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
