/********************************************************************************
** Form generated from reading UI file 'dialogmanagequeue.ui'
**
** Created: Wed May 26 08:04:57 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMANAGEQUEUE_H
#define UI_DIALOGMANAGEQUEUE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_DialogManageQueue
{
public:

    void setupUi(QDialog *DialogManageQueue)
    {
        if (DialogManageQueue->objectName().isEmpty())
            DialogManageQueue->setObjectName(QString::fromUtf8("DialogManageQueue"));
        DialogManageQueue->resize(571, 425);

        retranslateUi(DialogManageQueue);

        QMetaObject::connectSlotsByName(DialogManageQueue);
    } // setupUi

    void retranslateUi(QDialog *DialogManageQueue)
    {
        DialogManageQueue->setWindowTitle(QApplication::translate("DialogManageQueue", "Dialog", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogManageQueue: public Ui_DialogManageQueue {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMANAGEQUEUE_H
