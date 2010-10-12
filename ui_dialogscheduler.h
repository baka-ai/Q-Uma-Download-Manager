/********************************************************************************
** Form generated from reading UI file 'dialogscheduler.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSCHEDULER_H
#define UI_DIALOGSCHEDULER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTimeEdit>

QT_BEGIN_NAMESPACE

class Ui_DialogScheduler
{
public:
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLabel *label;
    QFrame *frame;
    QFormLayout *formLayout;
    QCheckBox *cbStartAt;
    QTimeEdit *teStartAt;
    QCheckBox *cbStopAt;
    QTimeEdit *teStopAt;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbStart;
    QPushButton *pbStop;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbApply;
    QPushButton *pbClose;

    void setupUi(QDialog *DialogScheduler)
    {
        if (DialogScheduler->objectName().isEmpty())
            DialogScheduler->setObjectName(QString::fromUtf8("DialogScheduler"));
        DialogScheduler->resize(384, 146);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogScheduler->sizePolicy().hasHeightForWidth());
        DialogScheduler->setSizePolicy(sizePolicy);
        DialogScheduler->setMinimumSize(QSize(0, 0));
        DialogScheduler->setMaximumSize(QSize(565, 427));
        gridLayout = new QGridLayout(DialogScheduler);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(DialogScheduler);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMaximumSize(QSize(75, 75));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/big/kalarm.png")));
        label_2->setScaledContents(true);

        gridLayout->addWidget(label_2, 0, 0, 2, 1);

        label = new QLabel(DialogScheduler);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 1, 1, 1);

        frame = new QFrame(DialogScheduler);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(frame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        cbStartAt = new QCheckBox(frame);
        cbStartAt->setObjectName(QString::fromUtf8("cbStartAt"));

        formLayout->setWidget(0, QFormLayout::LabelRole, cbStartAt);

        teStartAt = new QTimeEdit(frame);
        teStartAt->setObjectName(QString::fromUtf8("teStartAt"));
        teStartAt->setEnabled(false);
        teStartAt->setDateTime(QDateTime(QDate(2000, 1, 1), QTime(8, 9, 0)));

        formLayout->setWidget(0, QFormLayout::FieldRole, teStartAt);

        cbStopAt = new QCheckBox(frame);
        cbStopAt->setObjectName(QString::fromUtf8("cbStopAt"));

        formLayout->setWidget(1, QFormLayout::LabelRole, cbStopAt);

        teStopAt = new QTimeEdit(frame);
        teStopAt->setObjectName(QString::fromUtf8("teStopAt"));
        teStopAt->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, teStopAt);


        gridLayout->addWidget(frame, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbStart = new QPushButton(DialogScheduler);
        pbStart->setObjectName(QString::fromUtf8("pbStart"));

        horizontalLayout->addWidget(pbStart);

        pbStop = new QPushButton(DialogScheduler);
        pbStop->setObjectName(QString::fromUtf8("pbStop"));
        pbStop->setEnabled(false);

        horizontalLayout->addWidget(pbStop);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbApply = new QPushButton(DialogScheduler);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));
        pbApply->setEnabled(true);

        horizontalLayout->addWidget(pbApply);

        pbClose = new QPushButton(DialogScheduler);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        horizontalLayout->addWidget(pbClose);


        gridLayout->addLayout(horizontalLayout, 2, 0, 1, 2);


        retranslateUi(DialogScheduler);

        QMetaObject::connectSlotsByName(DialogScheduler);
    } // setupUi

    void retranslateUi(QDialog *DialogScheduler)
    {
        DialogScheduler->setWindowTitle(QApplication::translate("DialogScheduler", "Dialog", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        label->setText(QApplication::translate("DialogScheduler", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:12pt; font-weight:600; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">Scheduler</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        cbStartAt->setText(QApplication::translate("DialogScheduler", "Start Download at", 0, QApplication::UnicodeUTF8));
        teStartAt->setDisplayFormat(QApplication::translate("DialogScheduler", "h:mm AP", 0, QApplication::UnicodeUTF8));
        cbStopAt->setText(QApplication::translate("DialogScheduler", "Stop Download at", 0, QApplication::UnicodeUTF8));
        teStopAt->setDisplayFormat(QApplication::translate("DialogScheduler", "h:mm AP", 0, QApplication::UnicodeUTF8));
        pbStart->setText(QApplication::translate("DialogScheduler", "Start", 0, QApplication::UnicodeUTF8));
        pbStop->setText(QApplication::translate("DialogScheduler", "Stop", 0, QApplication::UnicodeUTF8));
        pbApply->setText(QApplication::translate("DialogScheduler", "Apply", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("DialogScheduler", "Close", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogScheduler: public Ui_DialogScheduler {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSCHEDULER_H
