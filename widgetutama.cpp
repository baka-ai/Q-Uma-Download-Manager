#include "widgetutama.h"
#include "ui_widgetutama.h"
#include <QDebug>
#include <QUrl>
#include <QMessageBox>
#include <QDir>
#include <QTime>




WidgetUtama::WidgetUtama(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WidgetUtama)
{
    ui->setupUi(this);
    ui->treeWidget->expandAll();
    wget = "wget";
    jobNum = 0;
    curRow = -1;
    queNum = 0;
    scheduled = false;
    cnf = new QSettings("Q-Uma","quma-skripsi",this);
    waktu = new QTime();

    // timer
    tdr = new QTimer();
    tdr->setInterval(1000);
    tdr->start();
    connect(tdr,SIGNAL(timeout()),this,SLOT(bacaLog()));
    connect(tdr,SIGNAL(timeout()),this,SLOT(readLog()));

    // Queue
    pQue = new QProcess();
    connect(pQue,SIGNAL(finished(int,QProcess::ExitStatus)),this,SLOT(startScheduled()));

//    connect(tdr,SIGNAL(timeout()),this,SLOT(updateStatus()));

    tabelModel = new QStandardItemModel();
    tabelModel->setHorizontalHeaderLabels(
            QStringList()
            << "JobNumber"          // 0    -> Hidden
            << "LongListOpt"        // 1    -> hidden
            << "URL"                // 2    -> Hidden
            << "File Name"          // 3
            << "Size"               // 4
            << "Downloaded"         // 5
            << "Progress"           // 6
            << "Speed"              // 7
            << "Remaining"          // 8    -> hide
            << "Categori"           // 9    -> hidden
            << "AppStat"            // 10    -> hidden   ["Finished","Running","Stopped"]
            << "Save Dir");         // 11    -> save dir

    ui->tableView->setModel(tabelModel);
    ui->tableView->setColumnHidden(0,true);
    ui->tableView->setColumnHidden(1,true);
    ui->tableView->setColumnHidden(2,true);
    ui->tableView->setColumnHidden(8,true);
    ui->tableView->setColumnHidden(9,true);
    ui->tableView->setColumnHidden(10,true);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
//    ui->tableView->setAcceptDrops(true);
//    ui->tableView->setDragEnabled(true);

//    cnf->

//    connect(ui->tableView,SIGNAL(activated(QModelIndex)),
//            this,SLOT(cellActivated(QModelIndex)));
    // ^^ untuk double click -> property download

    connect(ui->tableView,SIGNAL(clicked(QModelIndex)),
            this,SLOT(cellActivated(QModelIndex)));
    connect(ui->tableView,SIGNAL(activated(QModelIndex)),
            this,SLOT(cellActivated(QModelIndex)));
    connect(ui->tableView,SIGNAL(doubleClicked(QModelIndex)),
            this,SLOT(cellActivated(QModelIndex)));
    connect(ui->tableView,SIGNAL(entered(QModelIndex)),
            this,SLOT(cellActivated(QModelIndex)));
    connect(ui->tableView,SIGNAL(pressed(QModelIndex)),
            this,SLOT(cellActivated(QModelIndex)));
    // ^^ single click --_ emit signal

    connect(ui->treeWidget,SIGNAL(clicked(QModelIndex)),
            this,SLOT(categorySelected(QModelIndex)));
    loadConfig();
    loadList();

}

void WidgetUtama::loadConfig() {
    cnf->beginGroup("general");
    tmpDir = cnf->value("temp-dir",QDir::homePath().append("/.q-uma/tmp")).toString();
    cnf->endGroup();
}



WidgetUtama::~WidgetUtama()
{
    delete ui;
    for(int i = 0; i < jobNum; i++) {
        project[i].proc.kill();
        project[i].proc.deleteLater();
    }
}

void WidgetUtama::changeEvent(QEvent *e)
{
    QWidget::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

QStandardItemModel* WidgetUtama::getModel() {
    return tabelModel;
}

void WidgetUtama::addRow() {

}
void WidgetUtama::addNew(QString ul, QStringList e,
                         bool startnow,QString cat,QString saveDir,QString sz) {
//    QStandardItem item;
    // get filename
    int psl;
    QString ulTMP = ul;
    if(e.contains("-O",Qt::CaseSensitive)) {
        QString t = e.at(e.indexOf("-O") + 1);
        fileName = t.mid(t.lastIndexOf("/")+1);
    } else {
        psl = ul.lastIndexOf("/")+1;
        fileName = ulTMP.mid(psl);
    }

//    qDebug() << fileName;

    QString log;
    log = saveDir;
    project[jobNum].number      = jobNum;
//    project[jobNum].opt   // setelah log dibuat
    project[jobNum].url         = ul;
    project[jobNum].fileName    = fileName;
    project[jobNum].size        = sz;
    project[jobNum].downloaded  = "";
    project[jobNum].remaining   = "";
    project[jobNum].category    = cat;
    project[jobNum].status      = "";
    project[jobNum].directory   = saveDir;
    project[jobNum].log         = log.append("/").append(fileName).append(".log");
    project[jobNum].opt         = e  << "-o" << project[jobNum].log;
    project[jobNum].errorString = "";

//    QUrl *inf = new QUrl(e.at(0));

    QStandardItem *i0 = new QStandardItem();    // job num
    QStandardItem *i1 = new QStandardItem();    // long list opt
    QStandardItem *i2 = new QStandardItem();    // Url
    QStandardItem *i3 = new QStandardItem();    // Save As
    QStandardItem *i4 = new QStandardItem();    // Size
    QStandardItem *i5 = new QStandardItem();    // Downloaded
    QStandardItem *i6 = new QStandardItem();    // Progress
    QStandardItem *i7 = new QStandardItem();    // Speed
    QStandardItem *i8 = new QStandardItem();    // Remaining
    QStandardItem *i9 = new QStandardItem();    // Category
    QStandardItem *i10 = new QStandardItem();    // AppStat
    QStandardItem *i11 = new QStandardItem();    // SaveDir
    i0->setData(QString("%0").arg(jobNum),Qt::DisplayRole);
    i1->setData(e.join(","),Qt::DisplayRole);
    i2->setData(ul,Qt::DisplayRole);
    i3->setData(fileName,Qt::DisplayRole);
    i4->setData(sz,Qt::DisplayRole);
    i9->setData(cat,Qt::DisplayRole);
    i11->setData(saveDir,Qt::DisplayRole);
    if(startnow) {
        // addRow + Start now
        startDownload(jobNum);
    } else {
        // addRow;
        i10->setData("STOPPED",Qt::DisplayRole);
    }

    tabelModel->appendRow(QList<QStandardItem*>() << i0
                          << i1 << i2 << i3 << i4 << i5
                          << i6 << i7 << i8<< i9 << i10 << i11);
    jobNum++;
//    loadConfig();
    saveList();
}

void WidgetUtama::addGrabber(QString name, QString dir, QString ul, QStringList opts) {
//    QStandardItem item;
    QString log;
    log = dir;

    project[jobNum].number      = jobNum;
//    project[jobNum].opt   // setelah log dibuat
    project[jobNum].url         = ul;
    project[jobNum].fileName    = name;
    project[jobNum].size        = "";
    project[jobNum].downloaded  = "";
    project[jobNum].remaining   = "";
    project[jobNum].category    = "Grabber";
    project[jobNum].status      = "";
    project[jobNum].directory   = dir;
    project[jobNum].log         = log.append("/").append("Grabber-").append(name).append(".log");
    project[jobNum].opt         = opts << "-o" << project[jobNum].log;
    project[jobNum].errorString = "";

    qDebug() << "Project log: " << project[jobNum].log;

//    qDebug() << "file log: " << project[jobNum].lread.getLog();

    QStandardItem *i0 = new QStandardItem();    // job num
    QStandardItem *i1 = new QStandardItem();    // long list opt
    QStandardItem *i2 = new QStandardItem();    // Url
    QStandardItem *i3 = new QStandardItem();    // Save As
    QStandardItem *i4 = new QStandardItem();    // Size
    QStandardItem *i5 = new QStandardItem();    // Downloaded
    QStandardItem *i6 = new QStandardItem();    // Progress
    QStandardItem *i7 = new QStandardItem();    // Progress
    QStandardItem *i8 = new QStandardItem();    // Remaining
    QStandardItem *i9 = new QStandardItem();    // Category
    QStandardItem *i10 = new QStandardItem();    // AppStat
    QStandardItem *i11 = new QStandardItem();    // SaveDir

    i0->setData(QString("%0").arg(jobNum),Qt::DisplayRole);
    i1->setData(opts.join(","),Qt::DisplayRole);
    i2->setData(ul,Qt::DisplayRole);
    i3->setData(name,Qt::DisplayRole);
    i4->setData("~",Qt::DisplayRole);
    i8->setData("undefined",Qt::DisplayRole);
    i9->setData("Grabber",Qt::DisplayRole);
    i11->setData(dir,Qt::DisplayRole);

    tabelModel->appendRow(QList<QStandardItem*>() << i0
                          << i1 << i2 << i3 << i4 << i5
                          << i6 << i7 << i8 << i9 << i10 << i11);


    // set Grabber Auto start!!!
    startDownload(jobNum);

    jobNum++;
    saveList();
}

void WidgetUtama::removeRow() {
    queNum = 0;
    if(ui->tableView->model()->rowCount() == 0) {
        emit itemUnselected();
        return;
    }
    qDebug() << "removing row " << curModelIndex.row();

    bool bn =true;
    int pn = tabelModel->item(curModelIndex.row(),0)->data(Qt::DisplayRole).toInt(&bn);
    QString stt;
    stt = tabelModel->item(curModelIndex.row(),10)->data(Qt::DisplayRole).toString();
    if(stt != "FINISHED") { // unfinished
        if(QMessageBox::warning(this,
                             tr("Removing Unfinished jobs"),
                             tr("The jobs is unfinished, are you sure to remove it"),
                             QMessageBox::Ok|QMessageBox::Cancel)
            == QMessageBox::Ok) {
            tabelModel->removeRow(curModelIndex.row());
        }else {
            return;
        }
    } else {    // finished
        tabelModel->removeRow(curModelIndex.row());
    }

    curModelIndex = ui->tableView->currentIndex();
    curRow--;
    project[pn].proc.disconnect();
    project[pn].proc.kill();

    // removing log
    QFile ff(project[pn].log);
    ff.close();
    if(!ff.remove(project[pn].log)) {
        qDebug() << "unable to remove log";
    }
    saveList();
}

void WidgetUtama::removeComplete() {
    int rr;
    foreach(rr,FINISHED) {
        removeRow();
    }
}

void WidgetUtama::categoryChanged() {

}

void WidgetUtama::complete() {

}

void WidgetUtama::updateInterface() {

}

int WidgetUtama::saveDownloadStat() {
    // ga kepake
}

int WidgetUtama::startDownload() {
    qDebug() << "Start Download";
    bool ok = true;
    int p = ui->tableView->currentIndex().row();
    int curRow = tabelModel->item(p,0)->data(Qt::DisplayRole).toInt(&ok);
    startDownload(curRow);
//    if(project[curRow].proc.state() == QProcess::Running) {
//        return 1;
//    }
//    project[curRow].proc.setWorkingDirectory(project[curRow].directory);
//    project[curRow].proc.start("wget",QStringList() << project[curRow].url << project[curRow].opt);
////    tdr->start();
//    return project[curRow].proc.state();
}

int WidgetUtama::startDownload(int pNum) {
    project[pNum].proc.disconnect();
    qDebug() << "Start Download";
    if(project[pNum].proc.state() == QProcess::Running) {
        return 1;
    }
    if(!project[pNum].opt.contains("-c",Qt::CaseSensitive)) {
        project[pNum].opt.append("-c");
    }

    qDebug() << "starting wget...";
    project[pNum].proc.setWorkingDirectory(project[pNum].directory);
    qDebug() << "wget working directory: " << project[pNum].proc.workingDirectory();
    project[pNum].proc.start("wget",QStringList() << project[pNum].url << project[pNum].opt);
//    project[pNum].lread.startRead(); // masih belum mau!!!! langsung keluar apps.... catet!!!
//    connect(&project[pNum].lread,SIGNAL(lastLine(QString)),)
//    tdr->start();
    if(!tdr->isActive())
        tdr->start();

    emit itemSelected(ui->tableView->currentIndex().row(),project[pNum].proc.state());
    return project[pNum].proc.state();
}

int WidgetUtama::stopDownload() {
    if(curRow < 0) {
        return 0;
    }
    bool ok;
//    int r = ui->tableView->currentIndex().row() + 1;
    int cPs = tabelModel->item(curRow,0)->data(Qt::DisplayRole).toInt(&ok);
    if(project[cPs].proc.state() == QProcess::NotRunning) {
        return 0;
    }
//    project[cPs].proc.terminate(); // windows
    project[cPs].proc.kill(); // linux
    qDebug() << "Stopping download " << curRow << " => " << cPs;
}

int WidgetUtama::restartDownload() {
    bool ok;
    int r = curRow;
    int cPs = tabelModel->item(r,0)->data(Qt::DisplayRole).toInt(&ok);
    project[cPs].proc.kill();
    if(project[cPs].opt.contains("-c",Qt::CaseSensitive)) {
        int pos = project[cPs].opt.indexOf("-c");
        if(pos != -1) {
            project[cPs].opt.removeAt(pos);
        }
    }
    startDownload(cPs);
}

int WidgetUtama::readLog() {
    bool ok = true;
    int r = curRow;
    if(r < 0) {
        return 1;
    }
    int cPs = tabelModel->item(r,0)->data(Qt::DisplayRole).toInt(&ok);
    QFile *ff = new QFile(project[cPs].log);
    if (!ff->open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "Error while reading log";
    } else {
        ui->tbLogText->setText(ff->readAll());
    }
    ui->tbLogText->append("\n");
}

void WidgetUtama::updateStatus() {
    FINISHED.clear();
    RUNNING.clear();
    int jumRow = ui->tableView->model()->rowCount();
    for(int i = 0; i < jumRow; i++) {
        QString stt = tabelModel->item(i,10)->data(Qt::DisplayRole).toString();

        if(stt == "FINISHED") {
            FINISHED.append(i);
        }
        if(stt == "RUNNING") { // Running
            RUNNING.append(i);
        }
    }
}


void WidgetUtama::categorySelected(QModelIndex i) {
    curRow = -1;
    ui->tableView->clearSelection();
    emit itemUnselected();

    QString kategori = i.data(Qt::DisplayRole).toString();
    qDebug() <<kategori;
    QList<int> com;
    QList<int> doc;
    QList<int> msc;
    QList<int> vid;
    QList<int> oth;
    QList<int> fin;
    QList<int> unf;
    QList<int> bat;
    QList<int> grb;
    QList<int> all;

    int jumRow = ui->tableView->model()->rowCount();
    for(int i = 0; i < jumRow; i++) {
        all.append(i);
        QString cct = tabelModel->item(i,9)->data(Qt::DisplayRole).toString();  // category
        QString stt = tabelModel->item(i,10)->data(Qt::DisplayRole).toString(); // status
        if( cct == "Archive") {
            com.append(i);
        }
        if(cct == "Documents") {
            doc.append(i);
        }
        if(cct == "Music") {
            msc.append(i);
        }
        if(cct == "Video") {
            vid.append(i);
        }
        if(cct == "Other") {
            oth.append(i);
        }
        if(stt == "Finished") {
            fin.append(i);
        }
        if(stt != "Finished") { // Unfinished
            unf.append(i);
        }
        if(cct == "Batch") {
            bat.append(i);
        }
        if(cct == "Grabber") {
            grb.append(i);
        }
        ui->tableView->setRowHidden(i,true);
    }

    int pos;
    if(kategori == "Compressed") {
        foreach(pos,com) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Document") {
        foreach(pos,doc) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Music") {
        foreach(pos,msc) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Video") {
        foreach(pos,vid) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Other") {
        foreach(pos,oth) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Finished") {
        foreach(pos,fin) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Unfinished") {
        foreach(pos,unf) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Batch") {
        foreach(pos,bat) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "Grabber") {
        foreach(pos,grb) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else if(kategori == "All Downloads") {        // yg lain kayak "All Downloads"
        // show all
        foreach(pos,all) {
            ui->tableView->setRowHidden(pos,false);
        }
    } else {
        foreach(pos,all) {
            ui->tableView->setRowHidden(pos,false);
        }
    }
}


// signal processing
void WidgetUtama::cellActivated(QModelIndex i) {
//    qDebug() << "memasuki cell ke-" << row;
    curModelIndex = i;
    int row = i.row();
    curRow = row;
    qDebug() << "memasuki cell ke-" << row;

    if(procNum >= 0) {
        project[procNum].proc.disconnect();
        project[procNum].logText = ui->tbLogText->toPlainText();
    }

    bool ok = true;
    int itm = tabelModel->item(row,0)->data(Qt::DisplayRole).toInt(&ok);       // proc num
    procNum = itm;
    QString stat = tabelModel->item(row,10)->data(Qt::DisplayRole).toString(); // state
//    qDebug() << itm << stat;
    int stt = project[procNum].proc.state();
    emit itemSelected(itm,stt); // stat yang dikirim adalah stat process.....

    // baca log dari process.
//    readLog();
//    ui->tbLogText->setText(project[procNum].logText);
//    ui->tbLogText->append(project[procNum].proc.readAll());
//    project[procNum].proc.setReadChannel(QProcess::StandardOutput);
//    connect(&project[procNum].proc,SIGNAL(readyRead()),this,SLOT(readLog()));
//    connect(&project[procNum].proc,SIGNAL(readyReadStandardError()),this,SLOT(readLog()));
//    connect(&project[procNum].proc,SIGNAL(readyReadStandardOutput()),this,SLOT(readLog()));
}

void WidgetUtama::startScheduled() {


    if(!scheduled) {
        return;
    }

    bool ok = true;
    int jmlRow = tabelModel->rowCount();

    for(int i = 0; i < jmlRow; i++) {
        // cek, apakah FINISHED
        QString stt = tabelModel->item(i,10)->data(Qt::DisplayRole).toString();
//        if(stt == "ERROR" ) {
//            continue;
//        }
        if(stt != "FINISHED") {
            if(stt == "Not Found") {
                continue;
            }
            if(stt == "ERROR") {
                continue;
            }
            if(stt == "Invalid URL") {
                continue;
            }

            int pn = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
//            pQue->setWorkingDirectory(project[pn].directory);
//            pQue->start("wget",QStringList() << project[pn].url << project[pn].opt);
//            connect(&project[pn].proc,SIGNAL(finished(int)),this,SLOT(startScheduled()));
//            connect(pQue,SIGNAL(finished(int)),this,SLOT(startScheduled()));
            if(project[pn].proc.state() == QProcess::NotRunning && stt != "Not Found" && stt != "ERROR") {
                qDebug() << "Start queue";
                startDownload(pn);
            }
            break;
        }
    }
}

void WidgetUtama::checkQueue() {
    if(!scheduled) {
        return;
    }
    bool ok = true;
    // cek apakah ada running process
    QString stt = tabelModel->item(queNum,10)->data(Qt::DisplayRole).toString();
    int p = tabelModel->item(queNum,0)->data(Qt::DisplayRole).toInt(&ok);
    if(stt != "FINISHED") {
        if(project[p].proc.state() == QProcess::NotRunning) {
            startDownload(p);
            queNum++;
        }
    }
}


void WidgetUtama::stopScheduled() {
    scheduled = false;
    stopAll();
    if(pQue->state() != QProcess::NotRunning ) {
        pQue->kill();
    }
    qDebug() << "Stop queue";
}

void WidgetUtama::bacaLog() {
//    qDebug() << "Baca Log";
    int jmlRow = tabelModel->rowCount();

    bool ok = true;
    // update each row
    for(int i = 0; i < jmlRow; i++) {
        QString stt;
        QString line;
        QString linePersen;
        QString lineSaved;
        QString lineSaveAs;
        QString lineLength;
        QString lineDownloaded;
        // cek status row ke i: jika complete jangan update!
        stt = tabelModel->item(i,10)->data(Qt::DisplayRole).toString();
        int jbs = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
//        QString lg = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
        QString LINESTR = "";    // error string
//        QString STAT    = stt;       // status
        QString STAT    = project[jbs].status;
        QString DOWNLOADED  = tabelModel->item(i,5)->data(Qt::DisplayRole).toString(); // Ukuran file yang sudah berhasil di download
        QString PERCENTAGE  = tabelModel->item(i,10)->data(Qt::DisplayRole).toString(); // Persentase
        QString SPEED       = "~";      // Kecepatan
        QString REMAINING   = tabelModel->item(i,8)->data(Qt::DisplayRole).toString();  // Remaining

        ////////////////////////////////////////////////////////////////////

        if(project[jbs].proc.state() != 0) { // Process Still Running
//            qDebug() << "row ke-" << i << " Belum selesai";
            QFile *ff = new QFile(project[jbs].log);
            if (!ff->open(QIODevice::ReadOnly | QIODevice::Text)) {
                // unable to read log : set status unnable to read log
                qDebug() << "Error while reading log";
//                STAT    = "ERROR";
                LINESTR = "Error while reading log";
            } else {
                QTextStream in(ff);
                while(!in.atEnd()){
                    line = in.readLine();

                    if(line.contains(QRegExp("\\b[0-9]+[K|B|G]\\b"))) {
                        lineDownloaded = line;
                    }

                    if(line.contains("%")) {
                        linePersen = line;
                    }
                    if(line.contains("saved")) {
                        lineSaved = line;
                    }
                    if(line.contains("Saving to:")) {
                        lineSaveAs = line;
                    } else if(line.contains(" =>")) {
                        lineSaveAs = line;
                    } else if(line.contains("==> RETR")) {
                        lineSaveAs = line;
                    }
//                    if(line.contains(""))

                    if(line.contains("Length:")) {
                        lineLength = line;
                    }

                }
                // log state:
//                qDebug() << line;
                // proses last line:
                // CONNECTION
                if(line.contains("Connecting to",Qt::CaseInsensitive)) {
                    if(line.contains("failed:",Qt::CaseInsensitive)) {  // failed
                        // cell no 10 : set status failed na apa?
                        STAT = "FAILED";
                        LINESTR = line;
                    } else if(line.contains("connected.",Qt::CaseInsensitive)) {  // connected
                        // cell no 10 : set status "Connected"
                        STAT = "CONNECTED";
//                            LINESTR = line;
                    } else {
                        // cell no 10 : set status "Connecting..."
                        STAT = "CONNECTING...";
//                            LINESTR = line;
                    }
                }
                // ERROR
                if(line.contains("Error",Qt::CaseInsensitive)   ||
                   line.contains("Cannot write to")             ||
                   line.contains("No URLs found in")            ||
                   line.contains("failed",Qt::CaseInsensitive)  ||
                   line.contains("EXCEEDED",Qt::CaseSensitive)  ||
                   line.contains("Not enough memory")           ||
                   line.contains("Cannot open cookies file")    ||
                   line.contains("closing control connection",Qt::CaseInsensitive) ||
                   line.contains("The server refuses login")    ||
                   line.contains("Login incorrect")             ||
                   line.contains("Unknown type")                ||
                   line.contains("No such")                     ||
                   line.contains("Cannot initiate PASV transfer") ||
                   line.contains("Cannot parse PASV response")  ||
                   line.contains("couldn't connect to")         ||
                   line.contains("Invalid PORT")                ||
                   line.contains("Control connection closed")   ||
                   line.contains("Data transfer aborted")       ||
                   line.contains("Authorization failed")        ||
                   line.contains("Unable to establish SSL connection")  ||
                   line.contains("Unknown authentication scheme") ||
                   line.contains("Giving up.")) {
                    STAT = "";
                    LINESTR = line;
                }

                if(line.contains("not retrieving") ||
                   line.contains("The file is already fully retrieved") ||
                   line.contains("already")) {  // file sudah ada,ato newer
                    STAT = "";
                    LINESTR = line;
                }

                if(line.contains("Downloaded:")) { // popups
                    /*
                        Downloaded: 10 files, 749M in 5h 47m 55s (31.9 KB/s)
                      */
                }

                // PROGRESS
                /*
                  "\n%*s[ skipping %dK ]",2 + skipped_k_len, "", skipped_k
                  "\n%5ldK", skipped / 1024
                  "%3d%%", percentage
                  " %s",retr_rate (bytes, dltime - dp->last_timer_value, 1  ## download speed
                  "\n%5ldK", dp->rows * row_bytes / 1024
                  */

//                    if(line.contains("skipping")) {
//                        // ambil sebelum K berarti ambil lokasi skipping, kemudian mid sampai tanda  ] -1
//                    }

                if(line.contains("%") || line.contains(QRegExp("0[K|M|G] ",Qt::CaseSensitive))) {
                    // sebelum % harusnya ada angka
                    // atau cek jika ada tanda , paling tidak satu
                    // atau titik paling tidak 1
                    ///// ambil semua karakter sebelum tanda titik atau koma yang pertama
                    // untuk downloaded

                    // "%3d%%"
                    // ambil 3 karakter sebelum % untuk persentase
                    // mid dari % sampai akhir, ambil posisi spasi pertama dan terakhir
                    // mid kedua spasi untuk speed
                    // mid dari posisi sampai terakhir, untuk mengambil time remaining
                    // STAT = speedna berapa??
                    int pa = lineDownloaded.indexOf(QRegExp("[K|M|G]"));
                    QString tta = line;
                    QString ttb = tta.left(pa); // downloaded

                    int pb = linePersen.indexOf("%");
                    tta = linePersen;
                    QString ttc = tta.mid(pb-3,4); // percentage


                    // cari kecepatan
                    QString ttd = linePersen.mid(pb+1);
                    QString ttd1 = ttd;
                    int pc = ttd.indexOf(QRegExp("[0-9]"));
                    int pk = ttd.indexOf(QRegExp("[K|M|G]"));

                    QString tte = ttd.mid(pc, pk-pc+1); // speed

                    // remaining
                    QString ttf = ttd1.mid(pk+1);        // remaining
#ifndef Q_WS_WIN
                    tte = ttd.mid(pc, pk-pc+4);
                    ttf = "Unknown"; // masih belum untuk windows
#endif //Q_WS_WIN
                    // kalkulasi jumlah titik
                    // 1 titik = 1 KB
                    int jmlTitik;

                    jmlTitik = lineDownloaded.count(".");
                    int jmlKoma = 0;
                    if(lineDownloaded.contains(",")) {
                        jmlKoma = lineDownloaded.count(",");
                    }

                    QString tmm = ttb;
                    int ssz = tmm.remove(QRegExp("\s")).toInt(&ok);
                    int totSize = ssz + jmlTitik + jmlKoma;

                    if(ssz == 0) {
                        ttc = "calculating";
                        tte = "calculating";
                        ttf = "calculating";
                    }


                    // debug
//                    qDebug() << "Persentase       : " << ttc;
//                    qDebug() << "Speed            : " << tte;
//                    qDebug() << "Time Remaining   : " << ttf;
//                    qDebug() << "Jumlah titik     : " << jmlTitik;
//                    qDebug() << "Seize Downloaded : " << ssz << "\tTotal = " << totSize;

                    // Update Tabel
                    DOWNLOADED  = QString("%0").arg(totSize).append(" KB");
                    PERCENTAGE  = ttc;
                    SPEED       = tte;
                    REMAINING   = ttf;
//                    STAT        = "RUNNING";

                }
            }
            ff->close();
        }else { // kalau proses tidak jalan
            if(project[jbs].proc.exitStatus() == 0) {
//                if(STAT == "FINISHED") {
//                    continue;
//                }
                // cek apakah log ada yang mengandung kata "saved" jika ada set status "Finished"
                STAT = "STOPPED";
                if(project[jbs].status == "FINISHED") {
                    QStandardItem *stx = new QStandardItem();
                    stx->setData(project[jbs].status,Qt::DisplayRole);
                    tabelModel->setItem(i,6,stx);
                    continue;
                }
                QFile *ff = new QFile(project[jbs].log);
                if(ff->exists()) {
                    // baca log
                    if (!ff->open(QIODevice::ReadOnly | QIODevice::Text)) {
                        qDebug() << "unable to read log for process number " << jbs;
                    } else {
                        QTextStream in(ff);
                        
                         
                        while(!in.atEnd()){
                            line = in.readAll();
                            
                            if(STAT != "FINISHED" ||
                               STAT != "STOPPED"  ||
                               STAT != "ERROR"    ||
                               STAT != "Not Found"||
                               STAT != "Invalid URL") {
                                if(line.contains("saved") ||
                                   line.contains("The file is already fully retrieved")) {
//                                    lineSaved = line;
                                    qDebug() << "Process number " << jbs << " has finished";
                                    STAT = "FINISHED";
                                    project[jbs].status = "FINISHED";
                                    saveList();

                                    QStandardItem *stf = new QStandardItem();
                                    stf->setData(STAT,Qt::DisplayRole);
                                    project[jbs].status = STAT;
                                    tabelModel->setItem(i,10,stf);
                                    tabelModel->setItem(i,6,stf);
                                    emit finished(project[jbs].fileName);
                                    continue;
                                } else if(line.contains("Error",Qt::CaseInsensitive)   ||
                                   line.contains("Cannot write to")             ||
                                   line.contains("Invalid URL")                 ||
                                   line.contains("No URLs found in")            ||
                                   line.contains("failed",Qt::CaseInsensitive)  ||
                                   line.contains("EXCEEDED",Qt::CaseSensitive)  ||
    //                               line.contains("Not enough memory")           ||
    //                               line.contains("Cannot open cookies file")    ||
                                   line.contains("closing control connection",Qt::CaseInsensitive) ||
                                   line.contains("The server refuses login")    ||
                                   line.contains("Login incorrect")             ||
                                   line.contains("Unknown type")                ||
                                   line.contains("No such")                     ||
    //                               line.contains("Cannot initiate PASV transfer") ||
                                   line.contains("Cannot parse PASV response")  ||
                                   line.contains("couldn't connect to")         ||
                                   line.contains("Invalid PORT")                ||
    //                               line.contains("Control connection closed")   ||
                                   line.contains("Data transfer aborted")       ||
                                   line.contains("Authorization failed")        ||
    //                               line.contains("Unable to establish SSL connection")  ||
                                   line.contains("Unknown authentication scheme") ||
                                   line.contains("Giving up.")) {

                                    if(line.contains("Invalid URL")) {
                                        STAT = "Invalid URL";
//                                        saveList();
                                    } else if(line.contains("Not Found")) {
                                        STAT = "Not Found";
//                                        saveList();
                                    } else {
                                        STAT = "ERROR";
                                        LINESTR = line;
                                    }
                                }
//                                saveList();
                            }
                        }
                    }
                }

                ff->close();
            }
        }

        ///////////////////////////////////////////////////////////////// LAMA
        project[jbs].errorString = LINESTR;

        QString FNN;
        if(!lineSaveAs.isEmpty()) {
            FNN = lineSaveAs;

            if(FNN.contains(" =>")) {
//                int pps = FNN.indexOf("`");
                FNN.remove("           => ");
//                FNN.remove(QRegExp("\s"));
                FNN.remove("\'");
//                FNN.right(pps);
                FNN.remove("`");
            } else if(FNN.contains("Saving to:")) {
                FNN.remove("Saving to:");
//                FNN.remove(QRegExp("\s"));
                FNN.remove("\"");
            } else if(FNN.contains("==> RETR")) {
                int la = FNN.lastIndexOf(">") + 2;
//                FNN.right(la);
                FNN.remove("==> PASV");
                FNN.remove("==> RETR ");
                FNN.remove(" ... done.");
            } else {
                FNN = tabelModel->item(i,3)->data(Qt::DisplayRole).toString();
            }
            // file name di project ga usah di ubah.
            QStandardItem *fnn = new QStandardItem();
            fnn->setData(FNN,Qt::DisplayRole);
            tabelModel->setItem(i,3,fnn);

        }
        if(!lineLength.isEmpty()) {
            QString LLT;
            QString num;
            LLT = lineLength;
            LLT.remove("Length:");
            if(LLT.contains("(")) {
                int pb = LLT.indexOf("(");
                int pt = LLT.indexOf(")");
                num = LLT.mid(pb+1,pt-pb-1);
            } else {
                int pb = LLT.indexOf(QRegExp("[0-9]"));
                int pt = LLT.indexOf("[");
                num = LLT.mid(pb,pt-pb-1);
            }
            project[jbs].size = num;
            QStandardItem *fnn = new QStandardItem();
            fnn->setData(num,Qt::DisplayRole);
            tabelModel->setItem(i,4,fnn);
        }
        // update Tabel di Sini!!!
        // tambahkan kolom persentase dan speed
        // col num 5 = DOWNLOADED
        // col num x = PERSENTASE
        // col num y = SPEED
        // col num 8 = REMAINING
        // jika terjadi error set col 10 ke "ERROR"
        QStandardItem *dld = new QStandardItem();
        QStandardItem *prs = new QStandardItem();
        QStandardItem *spd = new QStandardItem();
        QStandardItem *rem = new QStandardItem(); // Untuk di Windows Masih belum bisa di implementasikan
        QStandardItem *sta = new QStandardItem();


        dld->setData(DOWNLOADED,Qt::DisplayRole);
        project[jbs].downloaded = DOWNLOADED;

        prs->setData(PERCENTAGE,Qt::DisplayRole);

        spd->setData(SPEED,Qt::DisplayRole);

        rem->setData(REMAINING,Qt::DisplayRole);
        project[jbs].remaining = REMAINING;

        if(project[jbs].status == "FINISHED") {
            STAT = project[jbs].status;
        }
        sta->setData(STAT,Qt::DisplayRole);
//        project[jbs].status = STAT;


        tabelModel->setItem(i,5,dld);
        tabelModel->setItem(i,6,prs);
        tabelModel->setItem(i,7,spd);
        tabelModel->setItem(i,8,rem);
        tabelModel->setItem(i,10,sta);

    }

    // update status
    updateStatus();
    readLog();
//    checkQueue();
    checkTime();
    startScheduled();
    // aktivasi timer
    tdr->start();

}

void WidgetUtama::stopAll() {
    for(int i = 0; i < 1000; i++ ) {
        if(project[i].proc.state() == QProcess::Running) {
            project[i].proc.kill();
        }
    }
    tdr->stop();
    queNum = 0;
}

void WidgetUtama::removeALL() {
//    foreach(int i,FINISHED) {
//        tabelModel->removeRow(i);
//    }
}

void WidgetUtama::checkTime() {
    // ambil scheduling time pada registri ato ini file
    // cek current time? jika sama start scheduler. jika tidak, stop....

    bool ok = true;
    cnf->beginGroup("scheduler");
    int st = cnf->value("auto-start",0).toInt(&ok);
    if(st == 0) {
        cnf->endGroup();
        return;
    }
//    waktu->fromString(cnf->value("start-time").toString(),"h:m AP");
//    qDebug() << "Current time : " << QTime::currentTime().toString("h:m AP");
//    qDebug() << "Start at     : " << QTime::fromString(cnf->value("start-time").toString(),"h:m AP");

    // Starting time
    if(QTime::currentTime().toString("h:m AP") ==
       cnf->value("start-time").toString() && !scheduled) {
        scheduled = true;
        startScheduled();
    }

    if(cnf->value("auto-stop",0).toInt(&ok) == 0) {
        cnf->endGroup();
        return;
    }

    // stop time
    waktu->fromString(cnf->value("stop-at").toString(),"h:m AP");
//    qDebug() << "Stop at     : " << QTime::fromString(cnf->value("stop-at").toString(),"h:m AP");

    if(QTime::currentTime().toString("h:m AP") ==
       cnf->value("stop-at").toString() && scheduled) {
        stopScheduled();
    }
    cnf->endGroup();

}

void WidgetUtama::loadList() {
    // Load list from download list
    // file under $HOMEPATH/.q-uma-skripsi/downloadlist.xml

    QDomDocument doc("QUmaML");

    QFile file;
    file.setFileName(QDir::homePath().append("/.q-uma").append("/downloadlist.xml"));
//    qDebug() <<file.fileName();

    if (!file.open(QIODevice::ReadOnly)) {
        qDebug() << "can't open file xml";
        return;
    }
    if(!doc.setContent(&file)) {
        file.close();
        qDebug() << "can't set xml data";
        return;
    }
    file.close();

    QDomElement root = doc.documentElement();
    if(root.tagName() != "DownloadList") {
        qDebug() << "unknown list";
        return;
    }

    QDomNode n = root.firstChild();
    while(!n.isNull()) {
        QDomElement e = n.toElement();
        if(!e.isNull()) {
            if(e.tagName() == "list") {
                jobs a;
                a.url       = e.attribute("url","");
                a.fileName  = e.attribute("name","");
                a.directory = e.attribute("dir","");
                a.category  = e.attribute("category","");
                a.log       = e.attribute("log","");
                a.opt       = e.attribute("options","").split(",", QString::SkipEmptyParts);
                a.downloaded= e.attribute("downloaded","");
                a.status    = e.attribute("state","");
                a.size      = e.attribute("size","");
                a.remaining = e.attribute("remaining","");

                // add to table
                project[jobNum].number      = jobNum;
                project[jobNum].opt         = a.opt;
                project[jobNum].url         = a.url;
                project[jobNum].fileName    = a.fileName;
                project[jobNum].size        = a.size;
                project[jobNum].downloaded  = a.downloaded;
                project[jobNum].remaining   = a.remaining;
                project[jobNum].category    = a.category;
                project[jobNum].status      = a.status;
                project[jobNum].directory   = a.directory;
                project[jobNum].log         = a.log;
                project[jobNum].errorString = "";

            //    QUrl *inf = new QUrl(e.at(0));

                QStandardItem *i0 = new QStandardItem();    // job num
                QStandardItem *i1 = new QStandardItem();    // long list opt
                QStandardItem *i2 = new QStandardItem();    // Url
                QStandardItem *i3 = new QStandardItem();    // Save As
                QStandardItem *i4 = new QStandardItem();    // Size
                QStandardItem *i5 = new QStandardItem();    // Downloaded
                QStandardItem *i6 = new QStandardItem();    // Progress
                QStandardItem *i7 = new QStandardItem();    // Speed
                QStandardItem *i8 = new QStandardItem();    // Remaining
                QStandardItem *i9 = new QStandardItem();    // Category
                QStandardItem *i10 = new QStandardItem();    // AppStat
                QStandardItem *i11 = new QStandardItem();    // SaveDir
                i0->setData(QString("%0").arg(jobNum),Qt::DisplayRole);
                i1->setData(a.opt.join(","),Qt::DisplayRole);
                i2->setData(a.url,Qt::DisplayRole);
                i3->setData(a.fileName,Qt::DisplayRole);
                i4->setData(a.size,Qt::DisplayRole);
                i5->setData(a.downloaded,Qt::DisplayRole);
                i8->setData(a.remaining,Qt::DisplayRole);
//                i4->setData(sz,Qt::DisplayRole);

                i9->setData(a.category,Qt::DisplayRole);
                i10->setData(a.status,Qt::DisplayRole);
                i11->setData(a.directory,Qt::DisplayRole);

                tabelModel->appendRow(QList<QStandardItem*>() << i0
                                      << i1 << i2 << i3 << i4 << i5
                                      << i6 << i7 << i8<< i9 << i10 << i11);
                jobNum++;
            }
        }
        n = n.nextSibling();
    }

}

void WidgetUtama::exportList(QString filePath) {
    int row = tabelModel->rowCount();
    bool ok = true;
    QFile ff(filePath);

    if(!ff.open(QFile::WriteOnly | QFile::Text)) {
        qDebug() << "Can't export list to file:" << filePath;
        return;
    }
    QTextStream out(&ff);
    for(int i = 0; i < row; i++) {
        int j = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
        out << project[j].url << "\n";
    }
    ff.close();
}


void WidgetUtama::saveList() {
    // save all list... jalankan disaat proses selesai
    // saat file Not Found; saat terjadi error; saat finish;
//    qDebug() << "Save List";
    int row = tabelModel->rowCount();
    bool ok = true;

    QDomDocument doc("QUmaML");
    QDomElement root = doc.createElement("DownloadList");
    doc.appendChild(root);

    for(int i = 0; i < row; i++) {
        int j = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
        QString state = tabelModel->item(i,10)->data(Qt::DisplayRole).toString();
        QDomElement li = doc.createElement("list");
        li.setAttribute("url",project[j].url);
        li.setAttribute("name",project[j].fileName);
        li.setAttribute("dir",project[j].directory);
        li.setAttribute("category",project[j].category);
        li.setAttribute("log",project[j].log);
        li.setAttribute("options",project[j].opt.join(","));
        li.setAttribute("downloaded",project[j].downloaded);
        li.setAttribute("state",project[j].status);
        li.setAttribute("size",project[j].size);
        li.setAttribute("remaining",project[j].remaining);

        root.appendChild(li);
//        li.setAttribute();
    }

    QDir ddr(QDir::homePath().append("/.q-uma"));
    if(!ddr.exists()) {
        ddr.mkpath(QDir::homePath().append("/.q-uma"));
    }

    QFile file;
    file.setFileName(QDir::homePath().append("/.q-uma").append("/downloadlist.xml"));
//    qDebug() <<file.fileName();

    if (!file.open(QIODevice::WriteOnly)) {
        qDebug() << "can't open file xml";
    }
    QTextStream st(&file);
    st << doc.toString();
    file.close();


//    QXmlStreamWriter writer(&file);
//    writer.setAutoFormatting(true);
//    writer.writeStartDocument();
//    writer.writeStartElement("DOWNLOAD_LIST");
//    for(int i; i < row; i++) {
//        int j = tabelModel->item(i,0)->data(Qt::DisplayRole).toInt(&ok);
//        QString state = tabelModel->item(i,10)->data(Qt::DisplayRole).toString();
//        writer.writeStartElement(QString("%0").arg(i));
//        writer.writeTextElement("Url",project[j].url);
//        writer.writeTextElement("FName",project[j].fileName);
//        writer.writeTextElement("Dir",project[j].directory);
//        writer.writeTextElement("Category",project[j].category);
//        writer.writeTextElement("Downloaded",project[j].downloaded);
//        writer.writeTextElement("Log",project[j].log);
//        writer.writeTextElement("Options",project[j].opt.join(","));
//        writer.writeTextElement("State",state);
//        writer.writeTextElement("Size",project[j].size);
//        writer.writeTextElement("State",project[j].remaining);
//        writer.writeEndElement();
//    }
//    writer.writeEndElement();
//    writer.writeEndDocument();

}

void WidgetUtama::addItemList() {
    // Tambah item pada list
    //// jalankan di saat add download

}

void WidgetUtama::removeItemList() {
    // remove item pada list
    //// jalankan saat proses remove
}


