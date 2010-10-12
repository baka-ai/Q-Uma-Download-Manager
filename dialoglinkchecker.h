#ifndef DIALOGLINKCHECKER_H
#define DIALOGLINKCHECKER_H

#include <QDialog>
#include <QStandardItemModel>
#include <QStandardItem>

namespace Ui {
    class DialogLinkChecker;
}

class DialogLinkChecker : public QDialog {
    Q_OBJECT
public:
    DialogLinkChecker(/*QStringList l,*/ QWidget *parent = 0);
//    DialogLinkChecker(QWidget *parent = 0);
    ~DialogLinkChecker();

public slots:
    void setLinks(QStringList l);
    void tampil();

private slots:
    void checkSingleLink();
    void selectLink();
    void browse();
    void ok();
    void clOse();



protected:
    void changeEvent(QEvent *e);

private:
    QStringList link;
    QStandardItemModel *model;
    Ui::DialogLinkChecker *ui;
};

#endif // DIALOGLINKCHECKER_H
