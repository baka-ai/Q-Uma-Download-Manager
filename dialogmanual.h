#ifndef DIALOGMANUAL_H
#define DIALOGMANUAL_H

#include <QDialog>

namespace Ui {
    class DialogManual;
}

class DialogManual : public QDialog {
    Q_OBJECT
public:
    DialogManual(QWidget *parent = 0);
    ~DialogManual();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogManual *ui;
};

#endif // DIALOGMANUAL_H
