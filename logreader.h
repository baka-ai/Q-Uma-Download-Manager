#ifndef LOGREADER_H
#define LOGREADER_H

#include <QWidget>
#include <QFile>
#include <QTimer>

class LogReader : public QWidget
{
Q_OBJECT
public:
    explicit LogReader(QWidget *parent = 0);
    explicit LogReader(QString logName,QWidget *parent = 0);
    void setLog(QString ln);
    QString getLog();

signals:
    void lastLine(QString line);
    void allLog(QString log);

public slots:
    void readLog();
    void startRead();
    void stopRead();

private:
    QString Log;
    QString LogName;
    QTimer *tdr;
    QFile *file;
};

#endif // LOGREADER_H
