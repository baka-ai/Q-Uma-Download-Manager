/********************************************************************************
** Form generated from reading UI file 'dialoglinkchecker.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGLINKCHECKER_H
#define UI_DIALOGLINKCHECKER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_DialogLinkChecker
{
public:
    QGridLayout *gridLayout;
    QTableView *tvLink;
    QCheckBox *cbAddToQueue;
    QLabel *label;
    QLineEdit *saveTo;
    QPushButton *pbBrowse;
    QPushButton *pbClose;
    QPushButton *pbOk;
    QPushButton *pbStart;
    QSpacerItem *horizontalSpacer;

    void setupUi(QDialog *DialogLinkChecker)
    {
        if (DialogLinkChecker->objectName().isEmpty())
            DialogLinkChecker->setObjectName(QString::fromUtf8("DialogLinkChecker"));
        DialogLinkChecker->resize(515, 424);
        gridLayout = new QGridLayout(DialogLinkChecker);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tvLink = new QTableView(DialogLinkChecker);
        tvLink->setObjectName(QString::fromUtf8("tvLink"));

        gridLayout->addWidget(tvLink, 0, 0, 1, 4);

        cbAddToQueue = new QCheckBox(DialogLinkChecker);
        cbAddToQueue->setObjectName(QString::fromUtf8("cbAddToQueue"));

        gridLayout->addWidget(cbAddToQueue, 2, 0, 1, 2);

        label = new QLabel(DialogLinkChecker);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);

        gridLayout->addWidget(label, 3, 0, 1, 1);

        saveTo = new QLineEdit(DialogLinkChecker);
        saveTo->setObjectName(QString::fromUtf8("saveTo"));
        saveTo->setEnabled(false);
        saveTo->setFrame(true);
        saveTo->setReadOnly(false);

        gridLayout->addWidget(saveTo, 3, 1, 1, 2);

        pbBrowse = new QPushButton(DialogLinkChecker);
        pbBrowse->setObjectName(QString::fromUtf8("pbBrowse"));
        pbBrowse->setEnabled(false);
        pbBrowse->setMinimumSize(QSize(30, 30));
        pbBrowse->setMaximumSize(QSize(30, 30));

        gridLayout->addWidget(pbBrowse, 3, 3, 1, 1);

        pbClose = new QPushButton(DialogLinkChecker);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        gridLayout->addWidget(pbClose, 4, 0, 1, 1);

        pbOk = new QPushButton(DialogLinkChecker);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        gridLayout->addWidget(pbOk, 4, 2, 1, 2);

        pbStart = new QPushButton(DialogLinkChecker);
        pbStart->setObjectName(QString::fromUtf8("pbStart"));

        gridLayout->addWidget(pbStart, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 3);


        retranslateUi(DialogLinkChecker);
        QObject::connect(cbAddToQueue, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(cbAddToQueue, SIGNAL(toggled(bool)), saveTo, SLOT(setEnabled(bool)));
        QObject::connect(cbAddToQueue, SIGNAL(toggled(bool)), pbBrowse, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(DialogLinkChecker);
    } // setupUi

    void retranslateUi(QDialog *DialogLinkChecker)
    {
        DialogLinkChecker->setWindowTitle(QApplication::translate("DialogLinkChecker", "Dialog", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbAddToQueue->setToolTip(QApplication::translate("DialogLinkChecker", "Add all link to download Queue.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbAddToQueue->setText(QApplication::translate("DialogLinkChecker", "Add to Downloads Queue", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogLinkChecker", "Save Files to:", 0, QApplication::UnicodeUTF8));
        pbBrowse->setText(QApplication::translate("DialogLinkChecker", "...", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("DialogLinkChecker", "&Close", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("DialogLinkChecker", "&Ok", 0, QApplication::UnicodeUTF8));
        pbStart->setText(QApplication::translate("DialogLinkChecker", "Start Checking", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogLinkChecker: public Ui_DialogLinkChecker {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGLINKCHECKER_H
