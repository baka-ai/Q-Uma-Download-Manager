#ifndef DOWNLOADDIALOG_H
#define DOWNLOADDIALOG_H

#include <QtGui/QDialog>
#include <QString>
#include <QDir>
#include <QSettings>
#include <QProcess>

namespace Ui {
    class DownloadDialog;
}

class DownloadDialog : public QDialog {
    Q_OBJECT
    Q_DISABLE_COPY(DownloadDialog)
public:
    explicit DownloadDialog(QWidget *parent = 0);
    explicit DownloadDialog(QString url,QWidget *parent = 0);
    explicit DownloadDialog(QString url, QString uname, QString pass,QWidget *parent = 0);
    virtual ~DownloadDialog();
    struct category {
        QString catName;
        QStringList catValue;
        QString saveDir;
        QString mime;
    };
    QList<category> cats;
    QList<category> callBackCat;

    void initAll();


protected:
    virtual void changeEvent(QEvent *e);

private slots:
    void browse();
//    void browseCookies();
    void download();
    void cancle();
    void showWidgetAdv();
    void saveConfig();
    void loadConfig();
    void cekUrl();
    void getFileName();
    void categoryChanged(int);
    //void cekFileExist();
    void readSTO();

//public slots:
//    void tampil();

signals:
    void sendDownload(QString url, QString saveAs,QString fileName, bool dl,
                      bool acc, QString uname, QString pass,QString kat,QString size);

private:
    void spider();
    QProcess *proc;

    Ui::DownloadDialog *m_ui;
    QString url;
    QString saveTo;
    bool dlNow;
    bool acc;
    QString uName;
    QString uPass;

    bool cookies;
    QString coFile;
    QString tempDir;

    QSettings *config;
    QStringList catDocument;
    QStringList catVideo;
    QStringList catMusic;
    QStringList catArchive;
    QStringList catPicture;


    QString saveDir;
};

#endif // DOWNLOADDIALOG_H
