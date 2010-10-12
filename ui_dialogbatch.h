/********************************************************************************
** Form generated from reading UI file 'dialogbatch.ui'
**
** Created: Tue Apr 27 20:16:34 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBATCH_H
#define UI_DIALOGBATCH_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogBatch
{
public:

    void setupUi(QWidget *DialogBatch)
    {
        if (DialogBatch->objectName().isEmpty())
            DialogBatch->setObjectName(QString::fromUtf8("DialogBatch"));
        DialogBatch->setEnabled(true);
        DialogBatch->resize(511, 457);
        DialogBatch->setMinimumSize(QSize(511, 410));

        retranslateUi(DialogBatch);

        QMetaObject::connectSlotsByName(DialogBatch);
    } // setupUi

    void retranslateUi(QWidget *DialogBatch)
    {
        DialogBatch->setWindowTitle(QApplication::translate("DialogBatch", "Form", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogBatch: public Ui_DialogBatch {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBATCH_H
