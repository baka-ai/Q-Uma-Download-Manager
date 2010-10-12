#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui/QMainWindow>
#include <QMenuBar>
#include <QToolBar>
//#include "addnewdialog.h"
#include "downloaddialog.h"
#include "batchdialog.h"
#include "dialogscheduler.h"
#include "dialogpreference.h"
#include "widgetutama.h"
#include "downloadchild.h"
#include "dialogsitegrabber.h"
#include "dialognew.h"
#include <QStatusBar>
#include <QSystemTrayIcon>
#include <QCloseEvent>
#include <QSettings>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();
//    void setVisible(bool visible);

protected:
    void closeEvent(QCloseEvent *event);

private slots:
    void spiderNewDownload(QString,QString,QString);
    void spiderNewDownload(QString);
    void showDownloadDialog();
    void readSetting();
    void saveSetting();
    void iconActivated(QSystemTrayIcon::ActivationReason reason);

    void dlAddNew(QString, QString, QString,bool,bool,QString,QString,QString,QString);
    void dlAddBatch();
    void dlSiteGrabber();
    void dlImport();
    void dlExport();
    void dlCloseWindow();
    void dlQuitApps();

    void jsResume();
    void jsStop();
    void jsStopAll();
    void jsRemove();
    void jsRemoveAllComplete();
    void jsRestart();

    void queStartQue();
    void queStopQue();
    void queManageQue();
    void queSchedule();

    void settingPreference();
    void settingConfigure();
    void settingView();

    void toolsScriptManager();
    void toolsSpeedMapper();

    void helpManual();
    void helpCredit();

    void terimaList(QStringList,QString);
    void terimaGrabber(QString,QString,QString,QStringList);

//    void showMessage();
    QStringList generateOptions();

    // utama
//    void getItemStat(int jobNum, QString state);
    void getItemStat(int jobNum, int state);
    void deactiveMenu();
    void import(int,QString);
    void showNotification(QString);

private:

    void createMenu();
    void createToolbar();
    void createAction();
    void createTryIcon();
    void loadConfig();
    void saveConfig();
//    DownloadChild *createDownloadChild();

    QSystemTrayIcon *trayIcon;
    QToolBar *toolBar;
    QMenuBar *menuBar;
    QMenu *menuDownload;
    QMenu *menuJobs;
    QMenu *menuQueue;
//    QMenu *menuSetting;
//    QMenu *menuTools;
    QMenu *menuHelp;
    QMenu *tryIconMenu;
    QStatusBar *statusBar;

    // Menu Download
    QAction *dlAddNewAct;
    QAction *dlAddBatchAct;
    QAction *dlSiteGrabberAct;
    QAction *dlImportAct;
    QAction *dlExportAct;
    QAction *dlCloseAct;
    QAction *dlQuitAct;

    // Menu Jobs
    QAction *jsResumeAct;
    QAction *jsStopAct;
    QAction *jsStopAllAct;
    QAction *jsRemoveAct;
    QAction *jsRemoveAllCompleteAct;
    QAction *jsRestartAct;


    // Menu Queue
    QAction *qStartQueAct;
    QAction *qStopQueAct;
    QAction *qSchedulerAct;

    // Menu Setting
    QAction *stPreferenceAct;
    QAction *stWgetRC;

    // Menu Help
    QAction *hlpManualAct;
    QAction *hlpCreditAct;

    BatchDialog *batchDdl;
//    DialogScheduler *schedDlg;
    DialogPreference *prefDlg;
    WidgetUtama *utama;
    DialogSiteGrabber *grabberDlg;

    // General Option
    QString url;
    QString saveName;
    QString dirName;
    bool downloadNow;
    bool useAccount;
    QString userName;
    QString userPass;
    // ^^ dari dialog new

    bool resume;
    /// vv dari dialog preference


    // General
    int retriesNumber;
    int waitRetry;
    QString tempDir;
    bool retryConReffuse;

    // category
    QString category;
    bool useDownloadLimit;
    int maxLimit;
    QString serverLimit;
    int limitSrv;


    QStringList listOptions;
    QSettings *cnf;
    int curSelectedJobNum;

    // import
    QString importFileName;
};

#endif // MAINWINDOW_H
