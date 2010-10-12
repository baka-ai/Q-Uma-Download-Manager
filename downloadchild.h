#ifndef DOWNLOADCHILD_H
#define DOWNLOADCHILD_H

#include <QWidget>

class DownloadChild : public QWidget
{
Q_OBJECT
public:
    explicit DownloadChild(QString *url,QString *opt, QString *save, QWidget *parent = 0);
//    void newDownload();
//    bool resume(int index);

protected:


signals:
    void finished();

public slots:
    void download();
    void setURL(QString *url);
    QString *getURL();
    void setSaveFile(QString *file);
    QString *getSaveFile();
    void setOpt(QString *opt);
    QString *getOpt();

private:
    QString *URL;
    QString *SaveFile;
    QString *option;


};

#endif // DOWNLOADCHILD_H
