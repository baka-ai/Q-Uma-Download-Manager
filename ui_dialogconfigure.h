/********************************************************************************
** Form generated from reading UI file 'dialogconfigure.ui'
**
** Created: Tue May 25 11:18:13 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGCONFIGURE_H
#define UI_DIALOGCONFIGURE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogConfigure
{
public:

    void setupUi(QDialog *DialogConfigure)
    {
        if (DialogConfigure->objectName().isEmpty())
            DialogConfigure->setObjectName(QString::fromUtf8("DialogConfigure"));
        DialogConfigure->resize(480, 640);

        retranslateUi(DialogConfigure);

        QMetaObject::connectSlotsByName(DialogConfigure);
    } // setupUi

    void retranslateUi(QDialog *DialogConfigure)
    {
        DialogConfigure->setWindowTitle(QApplication::translate("DialogConfigure", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogConfigure: public Ui_DialogConfigure {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGCONFIGURE_H
