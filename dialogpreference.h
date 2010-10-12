#ifndef DIALOGPREFERENCE_H
#define DIALOGPREFERENCE_H

#include <QDialog>
#include <QSettings>
#include <QStandardItemModel>

namespace Ui {
    class DialogPreference;
}

class DialogPreference : public QDialog {
    Q_OBJECT
public:
    DialogPreference(QWidget *parent = 0);
    ~DialogPreference();
    struct category {
        QString catName;
        QStringList catValue;
        QString saveDir;
    };
    QList<category> cats;
    QList<category> callBackCat;

public slots:
    void applyConfig();
    void closeDialog();
    // page category
    void changeCategory();  // index ComboBox category changed
    void browseCategorySaveDir();
    void leType();
    void leSaveDir();



protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogPreference *ui;
    void initAll();
    int curCat;

    // Property
//    bool runAtStart;
    int language;
    int retNum;
    int waitRetry;
    QString tempDir;
    bool useLimit;
    int maxLimitKB;
    bool retConRefused;
    QStringList categories;
    QStringList types;
    QStringList catDir;
    bool rememberLast;

    QStringList otherOpt;

    QSettings *cnf;

    QStringList catDocument;
    QStringList catVideo;
    QStringList catMusic;
    QStringList catArchive;
    QStringList catPicture;
};

#endif // DIALOGPREFERENCE_H
