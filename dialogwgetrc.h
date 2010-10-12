#ifndef DIALOGWGETRC_H
#define DIALOGWGETRC_H

#include <QDialog>
#include <QSettings>

namespace Ui {
    class DialogWgetrc;
}

class DialogWgetrc : public QDialog
{
    Q_OBJECT

public:
    explicit DialogWgetrc(QWidget *parent = 0);
    ~DialogWgetrc();
    void loadWgetRC();

public slots:
    void Default();
    void Apply();
    void Ok();
    void Cancel();

    void readWgetRc();
    void writeWgetRc();
    void change(int);

private:
    Ui::DialogWgetrc *ui;
    QSettings *cnf;
};

#endif // DIALOGWGETRC_H
