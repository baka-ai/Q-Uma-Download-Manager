#ifndef WGETRCHELP_H
#define WGETRCHELP_H

#include <QDialog>

namespace Ui {
    class WgetRCHelp;
}

class WgetRCHelp : public QDialog {
    Q_OBJECT
public:
    WgetRCHelp(QWidget *parent = 0);
    ~WgetRCHelp();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::WgetRCHelp *ui;
};

#endif // WGETRCHELP_H
