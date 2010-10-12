#ifndef DIALOGIMPORT_H
#define DIALOGIMPORT_H

#include <QDialog>
#include <QSettings>
#include <QDir>

namespace Ui {
    class DialogImport;
}

class DialogImport : public QDialog {
    Q_OBJECT
public:
    DialogImport(QWidget *parent = 0);
    ~DialogImport();

private slots:
    void next();
    void back();
    void cancel();
    void indexCh(int);
    void browse();

signals:
    void send(int type,QString dir);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogImport *ui;
    QSettings *cnf;
    QString saveto;
};

#endif // DIALOGIMPORT_H
