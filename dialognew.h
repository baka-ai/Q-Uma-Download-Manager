#ifndef DIALOGNEW_H
#define DIALOGNEW_H

#include <QDialog>

namespace Ui {
    class DialogNew;
}

class DialogNew : public QDialog {
    Q_OBJECT
public:
    DialogNew(QWidget *parent = 0);
    ~DialogNew();

public slots:
    void getFromClipboard();
    void pbOk();
    void pbCancel();
    void getAuth();

signals:
    void diterima(QString a,QString u,QString p);
    void diterima(QString a);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogNew *ui;
};

#endif // DIALOGNEW_H
