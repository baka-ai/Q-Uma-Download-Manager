#include "downloadchild.h"

DownloadChild::DownloadChild(QString *url,QString *opt, QString *save, QWidget *parent) :
    QWidget(parent)
{
    URL = url;
    option = opt;
    SaveFile = save;
    download();
}

void DownloadChild::download() {

}

void DownloadChild::setURL(QString *url) {

}

void DownloadChild::setSaveFile(QString *file) {

}

void DownloadChild::setOpt(QString *opt) {

}

QString *DownloadChild::getURL() {
    return URL;
}

QString *DownloadChild::getSaveFile() {
    return SaveFile;
}

QString *DownloadChild::getOpt() {
    return option;
}
