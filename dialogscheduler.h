#ifndef DIALOGSCHEDULER_H
#define DIALOGSCHEDULER_H

#include <QDialog>
#include <QStandardItemModel>
#include <QSettings>

namespace Ui {
    class DialogScheduler;
}

class DialogScheduler : public QDialog {
    Q_OBJECT
public:
    DialogScheduler(QWidget *parent = 0);
//    DialogScheduler(QStandardItemModel model,QWidget *parent = 0);
    ~DialogScheduler();
//    void setTableModel(QStandardItemModel* model);


public slots:
//    void enableGbStartAt();
//    void queueItemSelected();
    void apply();
    void start();
    void stop();
//    void up();
//    void down();

signals:
    void startAll();
    void stopAll();
    void applyAll();

protected:
    void changeEvent(QEvent *e);

private:
    void initAll();
    QSettings *cnf;

    Ui::DialogScheduler *ui;
};

#endif // DIALOGSCHEDULER_H
