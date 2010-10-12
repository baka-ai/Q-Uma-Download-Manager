#include "logreader.h"
#include <QDebug>

LogReader::LogReader(QWidget *parent) :
    QWidget(parent)
{
    file = new QFile();
}

LogReader::LogReader(QString logName, QWidget *parent) :
    QWidget(parent)
{
    tdr = new QTimer();
    LogName = logName;
    tdr->setInterval(1000);
    file = new QFile(LogName);

}

void LogReader::setLog(QString ln) {
    LogName = ln;
    file->setFileName(LogName);
}

QString LogReader::getLog() {
    return LogName;
}
void LogReader::startRead() {
    tdr->start();
    connect(tdr,SIGNAL(timeout()),this,SLOT(readLog()));
}

void LogReader::stopRead() {
    tdr->disconnect();
    tdr->stop();
}

void LogReader::readLog() {
    QString last, lll;
    if(!file->open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "belum ada log";
        emit lastLine("belum ada log");
    } else {
        while (!file->atEnd()) {
            QString line = file->readLine();
            lll.append(line);
            last=line;
        }
        Log = lll;
        emit lastLine(last);
    }

    tdr->start();
}



