#ifndef WIDGETUTAMA_H
#define WIDGETUTAMA_H

#include <QWidget>
#include <QMenu>
#include <QStandardItemModel>
#include <QProcess>
#include <QSettings>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QSettings>
#include "logreader.h"
#include <QTime>
#include <QTimer>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QDomDocument>
#include <QDomElement>

//int LONGLIST=10000;

namespace Ui {
    class WidgetUtama;
}

class WidgetUtama : public QWidget {
    Q_OBJECT
public:
    WidgetUtama(QWidget *parent = 0);
    ~WidgetUtama();
    struct jobs {
        QProcess proc;
        int number;
        QStringList opt;
        QString url;
        QString fileName;
        QString size;
        QString downloaded;
        QString remaining;
        QString category;
        QString status;
        QString directory;
        QString log;
        QString errorString;
        QString logText;
    };
    jobs project[1000];
    QStandardItemModel* getModel();
    QStandardItemModel *tabelModel;
    void loadConfig();
    bool scheduled;
//    QDomElement jobsToNode(QDomDocument &dc,);
    void exportList(QString filePath);


public slots:
    void addRow();
    void addNew(QString url, QStringList e,bool startnow,QString cat,QString saveDir,QString size);
    void addGrabber(QString name, QString dir, QString url, QStringList opts);
    void removeRow();
    void removeComplete();
    void categoryChanged();
    void complete();
    void updateInterface();
    int saveDownloadStat();
    int startDownload();
    int startDownload(int pNum);
//    int startDownload(QModelIndex i);
    int stopDownload();
    int restartDownload();
    int readLog();
    void updateStatus();
    void startScheduled();
    void stopScheduled();

    void categorySelected(QModelIndex i);

    /// signal processing
    void cellActivated(QModelIndex i);

    //// Log reader
    void bacaLog(); // baca loh, langsung set atribut dalam tabel;

    void stopAll();
    void removeALL();
    void checkQueue();
    void checkTime();

    // on startup....
    void loadList();
    void saveList();
    void addItemList();
    void removeItemList();


protected:
    void changeEvent(QEvent *e);

signals:
//    void itemSelected(int pos, QString stat);
    void itemSelected(int pos, int stat);
    void itemUnselected();
    void finished(QString url);

private:
    QStringList env;
//    QStandardItemModel *tabelModel;
    QString url;
    QString fileName;
    QString saveDir;
    QString status;
    QString speed;
    QString wget;
//    QStandardItemModel *model;

    QProcess *pQue;
    QProcess proc[10000];
    LogReader reader[10000];


    void parseLog();

    Ui::WidgetUtama *ui;
    int jobNum;
    int curRow;
    int procNum;
    int queNum;

    QModelIndex curModelIndex;
    QList<int> FINISHED;
    QList<int> RUNNING;
    QSettings *cnf;
    QString tmpDir;
    QString logDir;

    QTime *waktu;
    QTimer *tdr;

//    QList<int>
};

#endif // WIDGETUTAMA_H
