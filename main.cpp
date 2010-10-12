#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QTranslator>
#include <QSettings>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);


//    QSettings cnf("Q-Uma","quma-skripsi");
//    cnf.beginGroup("general");
//    bool aaa = true;
//    QTranslator trans;
//    if(cnf.value("lang",0).toInt(&aaa) == 1) {
//        trans.load("q-uma_id");
//    }
//    cnf.endGroup();

    MainWindow w;
    w.show();
    return a.exec();
}
