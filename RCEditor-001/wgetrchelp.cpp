#include "wgetrchelp.h"
#include "ui_wgetrchelp.h"

WgetRCHelp::WgetRCHelp(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WgetRCHelp)
{
    ui->setupUi(this);
}

WgetRCHelp::~WgetRCHelp()
{
    delete ui;
}

void WgetRCHelp::changeEvent(QEvent *e)
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
