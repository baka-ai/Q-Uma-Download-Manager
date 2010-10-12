/********************************************************************************
** Form generated from reading UI file 'addnewdialog.ui'
**
** Created: Sat Apr 17 12:39:02 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNEWDIALOG_H
#define UI_ADDNEWDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AddNewDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leURL;
    QLineEdit *leSaveTo;
    QPushButton *pbBrowse;
    QCheckBox *cbDownloadNow;
    QPushButton *pbAdvance;
    QWidget *widget;
    QCheckBox *cbUseAccount;
    QFrame *frame;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *leAdvUsername;
    QLineEdit *leAdvPassword;
    QCheckBox *leAdvSaveAcc;
    QPushButton *pbCancle;
    QPushButton *pbDownload;

    void setupUi(QDialog *AddNewDialog)
    {
        if (AddNewDialog->objectName().isEmpty())
            AddNewDialog->setObjectName(QString::fromUtf8("AddNewDialog"));
        AddNewDialog->resize(480, 340);
        label = new QLabel(AddNewDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 79, 20));
        label_2 = new QLabel(AddNewDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 60, 79, 20));
        leURL = new QLineEdit(AddNewDialog);
        leURL->setObjectName(QString::fromUtf8("leURL"));
        leURL->setGeometry(QRect(90, 20, 381, 26));
        leSaveTo = new QLineEdit(AddNewDialog);
        leSaveTo->setObjectName(QString::fromUtf8("leSaveTo"));
        leSaveTo->setGeometry(QRect(90, 60, 291, 26));
        pbBrowse = new QPushButton(AddNewDialog);
        pbBrowse->setObjectName(QString::fromUtf8("pbBrowse"));
        pbBrowse->setGeometry(QRect(390, 60, 81, 30));
        cbDownloadNow = new QCheckBox(AddNewDialog);
        cbDownloadNow->setObjectName(QString::fromUtf8("cbDownloadNow"));
        cbDownloadNow->setGeometry(QRect(10, 100, 151, 25));
        pbAdvance = new QPushButton(AddNewDialog);
        pbAdvance->setObjectName(QString::fromUtf8("pbAdvance"));
        pbAdvance->setGeometry(QRect(10, 130, 131, 30));
        widget = new QWidget(AddNewDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 169, 461, 161));
        cbUseAccount = new QCheckBox(widget);
        cbUseAccount->setObjectName(QString::fromUtf8("cbUseAccount"));
        cbUseAccount->setGeometry(QRect(10, 10, 141, 25));
        frame = new QFrame(widget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setEnabled(false);
        frame->setGeometry(QRect(10, 40, 441, 111));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 101, 20));
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 50, 91, 20));
        leAdvUsername = new QLineEdit(frame);
        leAdvUsername->setObjectName(QString::fromUtf8("leAdvUsername"));
        leAdvUsername->setGeometry(QRect(120, 10, 311, 26));
        leAdvPassword = new QLineEdit(frame);
        leAdvPassword->setObjectName(QString::fromUtf8("leAdvPassword"));
        leAdvPassword->setGeometry(QRect(120, 40, 311, 26));
        leAdvSaveAcc = new QCheckBox(frame);
        leAdvSaveAcc->setObjectName(QString::fromUtf8("leAdvSaveAcc"));
        leAdvSaveAcc->setGeometry(QRect(10, 80, 251, 25));
        pbCancle = new QPushButton(AddNewDialog);
        pbCancle->setObjectName(QString::fromUtf8("pbCancle"));
        pbCancle->setGeometry(QRect(360, 130, 107, 30));
        pbDownload = new QPushButton(AddNewDialog);
        pbDownload->setObjectName(QString::fromUtf8("pbDownload"));
        pbDownload->setGeometry(QRect(240, 130, 107, 30));

        retranslateUi(AddNewDialog);

        QMetaObject::connectSlotsByName(AddNewDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNewDialog)
    {
        AddNewDialog->setWindowTitle(QApplication::translate("AddNewDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AddNewDialog", "Url", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("AddNewDialog", "Save To", 0, QApplication::UnicodeUTF8));
        pbBrowse->setText(QApplication::translate("AddNewDialog", "Browse", 0, QApplication::UnicodeUTF8));
        cbDownloadNow->setText(QApplication::translate("AddNewDialog", "Download Now", 0, QApplication::UnicodeUTF8));
        pbAdvance->setText(QApplication::translate("AddNewDialog", "Advance >>", 0, QApplication::UnicodeUTF8));
        cbUseAccount->setText(QApplication::translate("AddNewDialog", "Use Account", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("AddNewDialog", "Username", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("AddNewDialog", "Password", 0, QApplication::UnicodeUTF8));
        leAdvSaveAcc->setText(QApplication::translate("AddNewDialog", "Save Account for this Site", 0, QApplication::UnicodeUTF8));
        pbCancle->setText(QApplication::translate("AddNewDialog", "Cancle", 0, QApplication::UnicodeUTF8));
        pbDownload->setText(QApplication::translate("AddNewDialog", "Download", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddNewDialog: public Ui_AddNewDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNEWDIALOG_H
