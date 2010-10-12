#include "mainwindow.h"
#include <QInputDialog>
#include <QtDebug>
#include <QFileDialog>
#include "dialognew.h"
#include "dialoglinkchecker.h"
#include <QMessageBox>
#include "dialogmanual.h"
#include "dialogcredits.h"
#include "dialogwgetrc.h"
#include "dialogimport.h"
#include <QApplication>
#include "RCEditor-001/dialogeditor.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    createMenu();
    createAction();
    createToolbar();
    createTryIcon();
    utama = new WidgetUtama(this);
    statusBar = new QStatusBar();
    cnf = new QSettings("Q-Uma","quma-skripsi",this);
    loadConfig();

//    ChildDownload *ch = new ChildDownload();
    

//    Load file konfigurasi
//            linux     .quma.conf
//            windows   Windows Registry atau quma.ini


    // connection default
    connect(utama,SIGNAL(itemSelected(int,int)),
            this,SLOT(getItemStat(int,int)));
    connect(utama,SIGNAL(itemUnselected()),this,SLOT(deactiveMenu()));
    connect(utama,SIGNAL(finished(QString)),this,SLOT(showNotification(QString)));

    setMinimumSize(600,400);
    setCentralWidget(utama);
    setStatusBar(statusBar);
//    setWindowIcon(QIcon(":"));
    setWindowTitle("Q-Uma Download Manager");
    setWindowIcon(QIcon(":/image/icon/big/download_manager.png"));
}

MainWindow::~MainWindow()
{
    saveConfig();
}

void MainWindow::closeEvent(QCloseEvent *event) {
    hide();
    event->ignore();
}


void MainWindow::createMenu() {
    menuBar         = new QMenuBar();
    menuDownload    = new QMenu("&Task");
    menuJobs        = new QMenu("&Jobs");
    menuQueue       = new QMenu("&Download");
    menuHelp        = new QMenu("&Help");

    menuBar->addMenu(menuDownload);
    menuBar->addMenu(menuJobs);
    menuBar->addMenu(menuQueue);
    menuBar->addMenu(menuHelp);

    setMenuBar(menuBar);
}

void MainWindow::createToolbar() {
    toolBar = addToolBar("Main Toolbar");
    toolBar->setMovable(true);
    toolBar->setIconSize(QSize(32,32));
    toolBar->addAction(dlAddNewAct);
    toolBar->addSeparator();
    toolBar->addAction(jsResumeAct);
    toolBar->addAction(jsStopAct);
    toolBar->addAction(jsStopAllAct);
    toolBar->addAction(jsRemoveAct);
    toolBar->addAction(jsRemoveAllCompleteAct);
    toolBar->addSeparator();
    toolBar->addAction(dlSiteGrabberAct);
    toolBar->addSeparator();
    toolBar->addAction(hlpManualAct);
}

void MainWindow::createAction() {
    //ACTION
    // Menu Download
    dlAddNewAct    = new QAction(
            QIcon(":/icon/menu/image/icon/Add.png"),
            tr("Add New Download..."),this);
    dlAddNewAct->setStatusTip(tr("Download files"));
    dlAddNewAct->setShortcut(QKeySequence::New);
    connect(dlAddNewAct,SIGNAL(triggered()),
            this,SLOT(showDownloadDialog()));

    dlAddBatchAct   = new QAction(
            QIcon(":/icon/menu/image/icon/Add Green Button.png"),
            tr("Add Batch Download..."),this);
    dlAddBatchAct->setStatusTip(tr("Add new Batch Download"));
    connect(dlAddBatchAct,SIGNAL(triggered()),
            this,SLOT(dlAddBatch()));

    dlSiteGrabberAct = new QAction(
            QIcon(":/icon/menu/image/icon/Web Browser.png"),
            tr("Run Site Grabber..."),this);
    dlSiteGrabberAct->setStatusTip(tr("Run Site Grabber"));
    connect(dlSiteGrabberAct,SIGNAL(triggered()),
            this,SLOT(dlSiteGrabber()));

    dlImportAct     = new QAction(
            QIcon(":/icon/menu/image/icon/Import Document.png"),
            tr("Import List..."),this);
    dlImportAct->setStatusTip(tr("Import Download From File..."));
    connect(dlImportAct,SIGNAL(triggered()),
            this,SLOT(dlImport()));

    dlExportAct     = new QAction(
            QIcon(":/icon/menu/image/icon/Export To Document.png"),
            tr("Export List..."),this);
    dlExportAct->setStatusTip(tr("Export Download List To File..."));
    connect(dlExportAct,SIGNAL(triggered()),
            this,SLOT(dlExport()));

    dlCloseAct  = new QAction(
            QIcon(":/icon/menu/image/icon/yl/door.png"),
            tr("Close"),this);
    dlCloseAct->setStatusTip(tr("Close Window"));
    connect(dlCloseAct,SIGNAL(triggered()),
            this,SLOT(dlCloseWindow()));

    dlQuitAct   = new QAction(
            QIcon(":/icon/menu/image/icon/yl/power.png"),
            tr("Quit"),this);
    dlQuitAct->setStatusTip(tr("Quit Application"));
    connect(dlQuitAct,SIGNAL(triggered()),qApp,SLOT(quit()));
//    connect(dlQuitAct,SIGNAL(triggered()),
//            this,SLOT(dlQuitApps()));

    // Menu Jobs
    jsResumeAct = new QAction(
            QIcon(":/icon/menu/image/icon/Play.png"),
            tr("Resume Download"),this);
    jsResumeAct->setStatusTip(tr("Resume Download"));
    connect(jsResumeAct,SIGNAL(triggered()),
            this,SLOT(jsResume()));

    jsStopAct   = new QAction(
            QIcon(":/icon/menu/image/icon/Stop.png"),
            tr("Stop Download"),this);
    jsStopAct->setStatusTip(tr("Stop Selected Download"));
    connect(jsStopAct,SIGNAL(triggered()),this,SLOT(jsStop()));
//    connect(jsStopAct,SIGNAL(triggered()),utama,SLOT(stopDownload()));


    jsStopAllAct = new QAction(
            QIcon(":/icon/menu/image/icon/Stop All.png"),
            tr("Stop All"),this);
    jsStopAllAct->setStatusTip(tr("Stop All Download"));
    connect(jsStopAllAct,SIGNAL(triggered()),
            this,SLOT(jsStopAll()));


    jsRemoveAct = new QAction(
            QIcon(":/icon/menu/image/icon/Remove.png"),
            tr("Remove Selected"),this);
    jsRemoveAct->setStatusTip(tr("Remove Selected Job"));
    connect(jsRemoveAct,SIGNAL(triggered()),
            this,SLOT(jsRemove()));

    jsRemoveAllCompleteAct = new QAction(
            QIcon(":/icon/menu/image/icon/Minus Green Button.png"),
            tr("Remove All Complete"),this);
    jsRemoveAllCompleteAct->setStatusTip(tr("Remove All Complete jobs."));
    connect(jsRemoveAllCompleteAct,SIGNAL(triggered()),
            this,SLOT(jsRemoveAllComplete()));

    jsRestartAct = new QAction(
            QIcon(":/icon/menu/image/icon/Backup Green Button.png"),
            tr("Restart"),this);
    jsRestartAct->setStatusTip(tr("Restart Selected Job"));
    connect(jsRestartAct,SIGNAL(triggered()),
            this,SLOT(jsRestart()));

    // Menu Queue
    qStartQueAct   = new QAction(
            QIcon(":/icon/menu/image/icon/Play Blue Button.png"),
            tr("Start"),this);
    qStartQueAct->setStatusTip(tr("Start Download"));
    connect(qStartQueAct,SIGNAL(triggered()),
            this,SLOT(queStartQue()));

    qStopQueAct    = new QAction(
            QIcon(":/icon/menu/image/icon/Pause Blue Button.png"),
            tr("Stop"),this);
    qStopQueAct->setStatusTip(tr("Stop Queue"));
    connect(qStopQueAct,SIGNAL(triggered()),
            this,SLOT(queStopQue()));


    qSchedulerAct      = new QAction(
            QIcon(":/icon/menu/image/icon/History.png"),
            tr("Scheduler..."),this);
    qSchedulerAct->setStatusTip(tr("Download Scheduler"));
    connect(qSchedulerAct,SIGNAL(triggered()),
            this,SLOT(queSchedule()));


    stPreferenceAct = new QAction(
            QIcon(":/icon/menu/image/icon/Gear Alt.png"),
            tr("Preferences..."),this);
    stPreferenceAct->setStatusTip(tr("Application Preferences"));
    connect(stPreferenceAct,SIGNAL(triggered()),
            this,SLOT(settingPreference()));

    stWgetRC = new QAction(
            QIcon(":/icon/menu/image/icon/Terminal.png"),
            tr("Configure wgetrc..."),this);
    stWgetRC->setStatusTip(tr("Wget Startup Configuration"));
    connect(stWgetRC,SIGNAL(triggered()),
            this,SLOT(settingConfigure()));


    // Menu Help
    hlpManualAct    = new QAction(
            QIcon(":/icon/menu/image/icon/Help Blue Button.png"),
            tr("Manual"),this);
    hlpManualAct->setStatusTip(tr("View manual"));
    connect(hlpManualAct,SIGNAL(triggered()),
            this,SLOT(helpManual()));

    hlpCreditAct    = new QAction(
            QIcon(":/icon/menu/image/icon/Star.png"),
            tr("Credits"),this);
    hlpCreditAct->setStatusTip(tr("View Application Credits"));
    connect(hlpCreditAct,SIGNAL(triggered()),
            this,SLOT(helpCredit()));


    // Adjust menu
    menuDownload->addAction(dlAddNewAct);
    menuDownload->addAction(dlAddBatchAct);
    menuDownload->addAction(dlSiteGrabberAct);
    menuDownload->addSeparator();
    menuDownload->addAction(dlImportAct);
    menuDownload->addAction(dlExportAct);
    menuDownload->addSeparator();
    menuDownload->addAction(dlCloseAct);
    menuDownload->addAction(dlQuitAct);

    menuJobs->addAction(jsResumeAct);
    menuJobs->addAction(jsStopAct);
    menuJobs->addAction(jsStopAllAct);
    menuJobs->addSeparator();
    menuJobs->addAction(jsRestartAct);
    menuJobs->addSeparator();
    menuJobs->addAction(jsRemoveAct);
    menuJobs->addAction(jsRemoveAllCompleteAct);
//    menuJobs->addSeparator();



    menuQueue->addAction(qStartQueAct);
    menuQueue->addAction(qStopQueAct);
    menuQueue->addSeparator();
    //menuQueue->addAction(qManageQueAct);
    menuQueue->addAction(qSchedulerAct);
    menuQueue->addAction(stPreferenceAct);
    menuQueue->addAction(stWgetRC);


    menuHelp->addAction(hlpManualAct);
    menuHelp->addAction(hlpCreditAct);

    // set menu not activated
    jsRemoveAct->setEnabled(false);
    jsRemoveAllCompleteAct->setEnabled(false);
    jsRestartAct->setEnabled(false);
    jsResumeAct->setEnabled(false);
    jsStopAct->setEnabled(false);
    jsStopAllAct->setEnabled(false);

}


//// SYSTEM TRY
//void MainWindow::setVisible(bool v) {
//   this
//}

void MainWindow::createTryIcon() {
//    tryIconMenu = new QMenu(this);
//    tryIconMenu->addAction(dlAddNewAct);
//    tryIconMenu->addAction(stPreferenceAct);
//    tryIconMenu->addAction(hlpManualAct);
//    tryIconMenu->addSeparator();
//    tryIconMenu->addAction(dlQuitAct);

    trayIcon = new QSystemTrayIcon(this);
//    trayIcon->setContextMenu(tryIconMenu);
    trayIcon->setIcon(QIcon(":/image/icon/big/download_manager.png"));
    trayIcon->show();
    connect(trayIcon,SIGNAL(activated(QSystemTrayIcon::ActivationReason))
            ,this,SLOT(iconActivated(QSystemTrayIcon::ActivationReason)));
}

void MainWindow::iconActivated(QSystemTrayIcon::ActivationReason reason) {
    switch(reason) {
    case QSystemTrayIcon::Trigger:
        if(this->isHidden()) {
            this->setVisible(true);
        } else {
            this->setVisible(false);
        }
        break;
    case QSystemTrayIcon::MiddleClick:
        break;
    case QSystemTrayIcon::DoubleClick:
        break;
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////

void MainWindow::loadConfig() {
    int h,v;
    bool t = true;
    cnf->beginGroup("window");
    h = cnf->value("horizontal",600).toInt(&t);
    v = cnf->value("vertical",400).toInt(&t);
    cnf->endGroup();
    resize(h,v);

    // options
//    cnf->beginGroup("download-options");
//    cnf->beginGroup("opt-all");
//    listOptions = cnf->value("current-opt").toStringList();
//    cnf->endGroup();
//    cnf->endGroup();

}
void MainWindow::saveConfig() {
    cnf->beginGroup("window");
    cnf->setValue("horizontal",this->size().width());
    cnf->setValue("vertical",this->size().height());
    cnf->endGroup();
}

// Private SLOTS

void MainWindow::showDownloadDialog() {
    DialogNew *dd = new DialogNew();

    connect(dd,SIGNAL(diterima(QString,QString,QString)),
            this,SLOT(spiderNewDownload(QString,QString,QString)));
    connect(dd,SIGNAL(diterima(QString)),
            this,SLOT(spiderNewDownload(QString)));

    dd->show();
}

void MainWindow::spiderNewDownload(QString a,QString u,QString p) {
    DownloadDialog *ddl = new DownloadDialog(a,u,p);
    connect(ddl,SIGNAL(sendDownload(QString,QString,bool,bool,QString,QString,QString)),
            this,SLOT(dlAddNew(QString,QString,bool,bool,QString,QString,QString)));
    ddl->show();
}

void MainWindow::spiderNewDownload(QString a) {
    DownloadDialog *ddl = new DownloadDialog(a);
    connect(ddl,SIGNAL(sendDownload(QString,QString,QString,bool,bool,QString,QString,QString,QString)),
            this,SLOT(dlAddNew(QString,QString,QString,bool,bool,QString,QString,QString,QString)));
    ddl->show();
}

void MainWindow::readSetting() {

}

void MainWindow::saveSetting() {

}




/*
 * Menu Download
 */
void MainWindow::dlAddNew(QString url, QString saveTo,QString fName,
                          bool dlNow, bool acc,
                          QString uname, QString pass,QString kat, QString sz) {
    // Parameter saveTo berisi direktory tempat menyimpan File
    // filename langsung diolah oleh downloader wget...
    // dan akan ditampilakan pada property download/job....

    cnf->beginGroup("download-options");
    cnf->beginGroup("opt-all");
    listOptions = cnf->value("current-opt").toStringList();
    cnf->endGroup();
    cnf->endGroup();

    QStringList options;

//#ifndef Q_OS_WIN32
    options = listOptions;
//#endif // Q_OS_WIN32

    if(acc) {
        options.append(QString("--user=%1").arg(uname));
        options.append(QString("--password=%1").arg(pass));
    }
    if(!fName.isEmpty()) {
        options.append("-O");
        options.append(fName);
    }

    qDebug() << "wget " <<url <<" "<<options;
    utama->addNew(url,options,dlNow,kat,saveTo,sz);

}

void MainWindow::dlAddBatch() {

    batchDdl = new BatchDialog(this);
    connect(batchDdl,SIGNAL(sendList(QStringList,QString)),
            this,SLOT(terimaList(QStringList,QString)));
    batchDdl->exec();
}

void MainWindow::dlSiteGrabber() {
    grabberDlg = new DialogSiteGrabber(this);
//    connect(grabberDlg,SIGNAL(runProject(QString,QString,QString,QStringList)),
//            this,SLOT(terimaGrabber(QString,QString,QString,QStringList)));
    connect(grabberDlg,SIGNAL(runProject(QString,QString,QString,QStringList)),
            utama,SLOT(addGrabber(QString,QString,QString,QStringList)));
    grabberDlg->show();
}

void MainWindow::dlImport() {
    importFileName.clear();
    DialogImport *imprt = new DialogImport(this);
    QString fileName;
    fileName = QFileDialog::getOpenFileName(this,
                                            tr("Open File"),
                                            QDir::homePath(),
                                            tr("Supported Files (*.txt *.htm)"));
    if(!fileName.isEmpty()) {
        importFileName = fileName;
        imprt->show();
        connect(imprt,SIGNAL(send(int,QString)),this,SLOT(import(int,QString)));
    }
}

void MainWindow::dlExport() {
    QString fileName;
    fileName = QFileDialog::getSaveFileName(this,tr("Export"),QDir::homePath(),tr("Text file (*.txt)"));
    // jika nama file ga ada tanda titik
    // tambahkan extension berupa *.txt
    // tergantung pilihan, jika save as Q-Uma download list maka akan
    // disimpan dalam format penyimpanan Q-Uma.
    if(fileName.isEmpty()) {
        return;
    }

    if(!fileName.contains(".")) {
        fileName.append(".txt");
    }
    utama->exportList(fileName);
}

void MainWindow::dlCloseWindow() {
    close();
}

void MainWindow::dlQuitApps() {
//    close();

}

/*
 * Menu Jobs
 */
void MainWindow::jsResume() {
    utama->startDownload();
}

void MainWindow::jsStop() {
    utama->stopDownload();
}

void MainWindow::jsStopAll() {
    utama->stopAll();
}

void MainWindow::jsRemove() {
    utama->removeRow();
}

void MainWindow::jsRemoveAllComplete() {
    utama->removeComplete();
}

void MainWindow::jsRestart() {
    utama->restartDownload();
}


/*
 * Menu Queue
 */
void MainWindow::queStartQue() {
    utama->scheduled = true;
    utama->startScheduled();
}

void MainWindow::queStopQue() {
    utama->stopScheduled();
}

void MainWindow::queManageQue() {
}

void MainWindow::queSchedule() {
//    utama->getModel();
    DialogScheduler *schedDlg = new DialogScheduler(this);
//    schedDlg->setTableModel(utama->getModel());
    schedDlg->show();
}

/*
 * Menu Setting
 */

void MainWindow::settingPreference() {
    prefDlg = new DialogPreference(this);
    prefDlg->show();
}

void MainWindow::settingConfigure() { // call wgetrc
//    DialogWgetrc *wgr = new DialogWgetrc(this);
//    wgr->show();
    DialogEditor *edt = new DialogEditor;
    edt->show();
}
void MainWindow::settingView() {
}

/*
 * Menu Tools
 */

void MainWindow::toolsScriptManager() {

}

void MainWindow::toolsSpeedMapper() {
}

/**
  * Menu Help
  */

void MainWindow::helpManual() {
    DialogManual *man = new DialogManual();
    man->show();
}

void MainWindow::helpCredit() {
    DialogCredits *cr = new DialogCredits();
    cr->show();
}

void MainWindow::terimaList(QStringList listUrl,QString d) {
    QStringList ll;
    for(int i = 0; i < listUrl.length(); i++) {
        utama->addNew(listUrl.at(i),ll,false,"Batch",d,"");
//        qDebug() << listUrl.at(i);
    }
}

void MainWindow::terimaGrabber(QString pName,QString pDir,QString pUrl,QStringList pOpt) {

}

QStringList MainWindow::generateOptions() {
    QStringList opt;
    // read form standar option
//    cnf-

    return opt;
}

void MainWindow::getItemStat(int jobNum, int state) {
    curSelectedJobNum = jobNum;
    switch(state) {
    case 0: // Not Runing
        jsRemoveAct->setEnabled(true);
        jsRemoveAllCompleteAct->setEnabled(true);
        jsRestartAct->setEnabled(true);
        jsResumeAct->setEnabled(true);
        jsStopAct->setEnabled(false);
        jsStopAllAct->setEnabled(true);
        break;
    case 1:
        jsRemoveAct->setEnabled(false);
        jsRemoveAllCompleteAct->setEnabled(true);
        jsRestartAct->setEnabled(false);
        jsResumeAct->setEnabled(false);
        jsStopAct->setEnabled(true);
        jsStopAllAct->setEnabled(true);
        break;
    case 2:
        jsRemoveAct->setEnabled(false);
        jsRemoveAllCompleteAct->setEnabled(true);
        jsRestartAct->setEnabled(false);
        jsResumeAct->setEnabled(false);
        jsStopAct->setEnabled(true);
        jsStopAllAct->setEnabled(true);
        break;
    }

//    if(state.contains("RUNNING")) {        // jalan beberapa persen
//        jsRemoveAct->setEnabled(false);
//        jsRemoveAllCompleteAct->setEnabled(true);
//        jsRestartAct->setEnabled(true);
//        jsResumeAct->setEnabled(false);
//        jsStopAct->setEnabled(true);
//        jsStopAllAct->setEnabled(true);
//    } else if(state == "ERROR") {   // error
//        jsRemoveAct->setEnabled(true);
//        jsRemoveAllCompleteAct->setEnabled(true);
//        jsRestartAct->setEnabled(true);
//        jsResumeAct->setEnabled(true);
//        jsStopAct->setEnabled(false);
//        jsStopAllAct->setEnabled(true);
//    } else if(state == "Not Found") {   // Not Found
//        jsRemoveAct->setEnabled(true);
//        jsRemoveAllCompleteAct->setEnabled(true);
//        jsRestartAct->setEnabled(true);
//        jsResumeAct->setEnabled(true);
//        jsStopAct->setEnabled(false);
//        jsStopAllAct->setEnabled(true);
//    } else if(state == "FINISHED") {   // finished
//        jsRemoveAct->setEnabled(true);
//        jsRemoveAllCompleteAct->setEnabled(true);
//        jsRestartAct->setEnabled(true);
//        jsResumeAct->setEnabled(false);
//        jsStopAct->setEnabled(false);
//        jsStopAllAct->setEnabled(true);
//    } else {                            // selain di atas
//        jsRemoveAct->setEnabled(true);
//        jsRemoveAllCompleteAct->setEnabled(true);
//        jsRestartAct->setEnabled(true);
//        jsResumeAct->setEnabled(true);
//        jsStopAct->setEnabled(false);
//        jsStopAllAct->setEnabled(true);
//    }
}

void MainWindow::deactiveMenu() {
    jsRemoveAct->setEnabled(false);
    jsRemoveAllCompleteAct->setEnabled(true);
    jsRestartAct->setEnabled(false);
    jsResumeAct->setEnabled(false);
    jsStopAct->setEnabled(false);
    jsStopAllAct->setEnabled(true);
}

void MainWindow::import(int i,QString st) {
    switch(i) {
    case 0: // text
        utama->addGrabber(importFileName,st,"",QStringList() << "-i" << importFileName);
//        utama->addNew("",QStringList() << "-i" << importFileName,false,"Other",st,"");
        break;
    case 1: // html
        utama->addGrabber(importFileName,st,"",QStringList() << "-i" << importFileName << "-F");
//        utama->addNew("",QStringList() << "-i" << importFileName << "-F",false,"Other",st,"");
        break;
    case 2: // batch
        QFile ff(importFileName);
        if(!ff.open(QFile::ReadOnly | QFile::Text)) {
            qDebug() << "Can't open file :" << importFileName;
            return;
        }
        QTextStream strm(&ff);
        QStringList lU;
        while(!strm.atEnd()) {
            QString line = strm.readLine();
            lU.append(line);
        }
        terimaList(lU,st);
        break;
    }
}

void MainWindow::showNotification(QString PName) {
    QString message = tr("File or Project ") + PName + tr("\nhas finished.");
    trayIcon->showMessage("Download Finished",message,QSystemTrayIcon::Information);
}

