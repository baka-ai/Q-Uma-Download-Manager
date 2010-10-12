/********************************************************************************
** Form generated from reading UI file 'downloaddialog.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DOWNLOADDIALOG_H
#define UI_DOWNLOADDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DownloadDialog
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leURL;
    QLabel *label_3;
    QComboBox *comboBox;
    QCheckBox *cbRemember;
    QLabel *label_2;
    QLineEdit *leSaveDir;
    QPushButton *pbBrowse;
    QLabel *label_4;
    QLineEdit *leFName;
    QVBoxLayout *verticalLayout;
    QLabel *lbImage;
    QLabel *lbUkuran;
    QCheckBox *cbDownloadNow;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbDownload;
    QPushButton *pbCancle;

    void setupUi(QDialog *DownloadDialog)
    {
        if (DownloadDialog->objectName().isEmpty())
            DownloadDialog->setObjectName(QString::fromUtf8("DownloadDialog"));
        DownloadDialog->resize(622, 162);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DownloadDialog->sizePolicy().hasHeightForWidth());
        DownloadDialog->setSizePolicy(sizePolicy);
        DownloadDialog->setMinimumSize(QSize(0, 0));
        DownloadDialog->setMaximumSize(QSize(16777215, 16777215));
        gridLayout_2 = new QGridLayout(DownloadDialog);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DownloadDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leURL = new QLineEdit(DownloadDialog);
        leURL->setObjectName(QString::fromUtf8("leURL"));

        gridLayout->addWidget(leURL, 0, 1, 1, 3);

        label_3 = new QLabel(DownloadDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        comboBox = new QComboBox(DownloadDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setMinimumSize(QSize(170, 0));

        gridLayout->addWidget(comboBox, 1, 1, 1, 1);

        cbRemember = new QCheckBox(DownloadDialog);
        cbRemember->setObjectName(QString::fromUtf8("cbRemember"));

        gridLayout->addWidget(cbRemember, 1, 2, 1, 2);

        label_2 = new QLabel(DownloadDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 0, 1, 1);

        leSaveDir = new QLineEdit(DownloadDialog);
        leSaveDir->setObjectName(QString::fromUtf8("leSaveDir"));

        gridLayout->addWidget(leSaveDir, 2, 1, 1, 2);

        pbBrowse = new QPushButton(DownloadDialog);
        pbBrowse->setObjectName(QString::fromUtf8("pbBrowse"));

        gridLayout->addWidget(pbBrowse, 2, 3, 1, 1);

        label_4 = new QLabel(DownloadDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        leFName = new QLineEdit(DownloadDialog);
        leFName->setObjectName(QString::fromUtf8("leFName"));

        gridLayout->addWidget(leFName, 3, 1, 1, 3);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        lbImage = new QLabel(DownloadDialog);
        lbImage->setObjectName(QString::fromUtf8("lbImage"));
        lbImage->setMinimumSize(QSize(100, 100));
        lbImage->setMaximumSize(QSize(100, 100));
        lbImage->setScaledContents(true);
        lbImage->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbImage);

        lbUkuran = new QLabel(DownloadDialog);
        lbUkuran->setObjectName(QString::fromUtf8("lbUkuran"));
        lbUkuran->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(lbUkuran);


        gridLayout_2->addLayout(verticalLayout, 0, 4, 1, 1);

        cbDownloadNow = new QCheckBox(DownloadDialog);
        cbDownloadNow->setObjectName(QString::fromUtf8("cbDownloadNow"));

        gridLayout_2->addWidget(cbDownloadNow, 1, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(215, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        pbDownload = new QPushButton(DownloadDialog);
        pbDownload->setObjectName(QString::fromUtf8("pbDownload"));

        gridLayout_2->addWidget(pbDownload, 1, 2, 1, 1);

        pbCancle = new QPushButton(DownloadDialog);
        pbCancle->setObjectName(QString::fromUtf8("pbCancle"));

        gridLayout_2->addWidget(pbCancle, 1, 3, 1, 1);

        QWidget::setTabOrder(pbDownload, cbDownloadNow);
        QWidget::setTabOrder(cbDownloadNow, pbCancle);
        QWidget::setTabOrder(pbCancle, leURL);
        QWidget::setTabOrder(leURL, comboBox);
        QWidget::setTabOrder(comboBox, cbRemember);
        QWidget::setTabOrder(cbRemember, leSaveDir);
        QWidget::setTabOrder(leSaveDir, pbBrowse);

        retranslateUi(DownloadDialog);

        QMetaObject::connectSlotsByName(DownloadDialog);
    } // setupUi

    void retranslateUi(QDialog *DownloadDialog)
    {
        DownloadDialog->setWindowTitle(QApplication::translate("DownloadDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DownloadDialog", "URL          ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DownloadDialog", "Category", 0, QApplication::UnicodeUTF8));
        cbRemember->setText(QApplication::translate("DownloadDialog", "Remember Save path", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DownloadDialog", "Save Dir ", 0, QApplication::UnicodeUTF8));
        pbBrowse->setText(QApplication::translate("DownloadDialog", "&Browse", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DownloadDialog", "File Name", 0, QApplication::UnicodeUTF8));
        lbImage->setText(QString());
        lbUkuran->setText(QString());
        cbDownloadNow->setText(QApplication::translate("DownloadDialog", "Download &Now", 0, QApplication::UnicodeUTF8));
        pbDownload->setText(QApplication::translate("DownloadDialog", "&Download", 0, QApplication::UnicodeUTF8));
        pbCancle->setText(QApplication::translate("DownloadDialog", "C&ancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DownloadDialog: public Ui_DownloadDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DOWNLOADDIALOG_H
