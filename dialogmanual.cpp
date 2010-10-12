#include "dialogmanual.h"
#include "ui_dialogmanual.h"

DialogManual::DialogManual(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogManual)
{
    ui->setupUi(this);

    setWindowTitle(tr("GNU Wget manual"));
    setWindowIcon(QIcon(":/icon/menu/image/icon/Help Blue Button.png"));
}

DialogManual::~DialogManual()
{
    delete ui;
}

void DialogManual::changeEvent(QEvent *e)
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
