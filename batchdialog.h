#ifndef BATCHDIALOG_H
#define BATCHDIALOG_H

#include <QDialog>

namespace Ui {
    class BatchDialog;
}

class BatchDialog : public QDialog {
    Q_OBJECT
public:
    BatchDialog(QWidget *parent = 0);
    ~BatchDialog();
    QStringList getList();

public slots:
    void changeWildcard();
    void pbOke();
    void pbCancel();
    void showHideFirstTo();
    void toggleStatus(bool stat);
    void setWildcard(int w);
    void isiContoh();
    void swapAngka();
    void cekLetter();
    void swapLetter();
    void setMinTo();
    void browse();

    void setStart();
    void setStop();

signals:
    void sendList(QStringList url,QString dir);

protected:
    void changeEvent(QEvent *e);

private:
    QStringList listUrl;
    Ui::BatchDialog *ui;
};

#endif // BATCHDIALOG_H
