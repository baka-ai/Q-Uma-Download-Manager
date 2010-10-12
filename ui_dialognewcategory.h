/********************************************************************************
** Form generated from reading UI file 'dialognewcategory.ui'
**
** Created: Mon Jun 7 16:52:26 2010
**      by: Qt User Interface Compiler version 4.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEWCATEGORY_H
#define UI_DIALOGNEWCATEGORY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStackedWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogNewCategory
{
public:
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *leCatName;
    QFrame *line_2;
    QWidget *page_2;
    QLabel *label_4;
    QLabel *label_5;
    QFrame *line_3;
    QLabel *label_6;
    QLineEdit *leTypes;
    QWidget *page_3;
    QLabel *label_7;
    QLabel *label_8;
    QFrame *line_4;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *leCat;
    QLineEdit *leTtt;
    QFrame *line;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbCancle;
    QPushButton *pbFinish;

    void setupUi(QDialog *DialogNewCategory)
    {
        if (DialogNewCategory->objectName().isEmpty())
            DialogNewCategory->setObjectName(QString::fromUtf8("DialogNewCategory"));
        DialogNewCategory->resize(362, 221);
        stackedWidget = new QStackedWidget(DialogNewCategory);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 361, 161));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 79, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/general/Image/icon/category.png")));
        label->setScaledContents(true);
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(100, 20, 251, 71));
        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 79, 20));
        leCatName = new QLineEdit(page);
        leCatName->setObjectName(QString::fromUtf8("leCatName"));
        leCatName->setGeometry(QRect(110, 110, 241, 26));
        line_2 = new QFrame(page);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(100, 70, 251, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(0, 0, 81, 81));
        label_4->setPixmap(QPixmap(QString::fromUtf8(":/general/Image/icon/categoryfiles.png")));
        label_4->setScaledContents(true);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(100, 20, 211, 51));
        line_3 = new QFrame(page_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(100, 60, 251, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 110, 61, 20));
        leTypes = new QLineEdit(page_2);
        leTypes->setObjectName(QString::fromUtf8("leTypes"));
        leTypes->setGeometry(QRect(90, 110, 261, 26));
        stackedWidget->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        label_7 = new QLabel(page_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 10, 71, 71));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/general/Image/icon/categoryfinish.png")));
        label_7->setScaledContents(true);
        label_8 = new QLabel(page_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(90, 20, 161, 51));
        line_4 = new QFrame(page_3);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(90, 60, 261, 20));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        label_9 = new QLabel(page_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(20, 90, 79, 20));
        label_10 = new QLabel(page_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(20, 120, 79, 30));
        leCat = new QLineEdit(page_3);
        leCat->setObjectName(QString::fromUtf8("leCat"));
        leCat->setGeometry(QRect(110, 80, 241, 26));
        leCat->setReadOnly(true);
        leTtt = new QLineEdit(page_3);
        leTtt->setObjectName(QString::fromUtf8("leTtt"));
        leTtt->setGeometry(QRect(110, 120, 241, 26));
        leTtt->setReadOnly(true);
        stackedWidget->addWidget(page_3);
        line = new QFrame(DialogNewCategory);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(-10, 160, 381, 20));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        pbBack = new QPushButton(DialogNewCategory);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));
        pbBack->setGeometry(QRect(120, 180, 71, 30));
        pbNext = new QPushButton(DialogNewCategory);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));
        pbNext->setGeometry(QRect(200, 180, 71, 30));
        pbCancle = new QPushButton(DialogNewCategory);
        pbCancle->setObjectName(QString::fromUtf8("pbCancle"));
        pbCancle->setGeometry(QRect(280, 180, 71, 30));
        pbFinish = new QPushButton(DialogNewCategory);
        pbFinish->setObjectName(QString::fromUtf8("pbFinish"));
        pbFinish->setGeometry(QRect(200, 180, 71, 30));

        retranslateUi(DialogNewCategory);

        stackedWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(DialogNewCategory);
    } // setupUi

    void retranslateUi(QDialog *DialogNewCategory)
    {
        DialogNewCategory->setWindowTitle(QApplication::translate("DialogNewCategory", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("DialogNewCategory", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">Category Name</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogNewCategory", "Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QString());
        label_5->setText(QApplication::translate("DialogNewCategory", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">File Types</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogNewCategory", "Types", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leTypes->setToolTip(QApplication::translate("DialogNewCategory", "Insert file types, separate with space.\n"
"exc: jpg png gif tif", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_7->setText(QString());
        label_8->setText(QApplication::translate("DialogNewCategory", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:24pt; font-weight:600;\">Finishing</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogNewCategory", "Category", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DialogNewCategory", "Types", 0, QApplication::UnicodeUTF8));
        pbBack->setText(QApplication::translate("DialogNewCategory", "Back", 0, QApplication::UnicodeUTF8));
        pbNext->setText(QApplication::translate("DialogNewCategory", "Next", 0, QApplication::UnicodeUTF8));
        pbCancle->setText(QApplication::translate("DialogNewCategory", "Cancle", 0, QApplication::UnicodeUTF8));
        pbFinish->setText(QApplication::translate("DialogNewCategory", "Finish", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogNewCategory: public Ui_DialogNewCategory {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEWCATEGORY_H
