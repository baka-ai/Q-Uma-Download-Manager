/********************************************************************************
** Form generated from reading UI file 'dialogwgetrc.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGWGETRC_H
#define UI_DIALOGWGETRC_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogWgetrc
{
public:
    QGridLayout *gridLayout;
    QListWidget *listWidget;
    QPushButton *pbDefaults;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbOk;
    QPushButton *pbApply;
    QPushButton *pbCancel;
    QStackedWidget *stacked;
    QWidget *page;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *gBackground;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QComboBox *gIP4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QComboBox *gIP6;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QComboBox *gTimeStamping;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_7;
    QComboBox *gNetRc;
    QHBoxLayout *horizontalLayout_14;
    QCheckBox *gLimit;
    QSpinBox *gLimitVal;
    QHBoxLayout *horizontalLayout_7;
    QCheckBox *gQuota;
    QSpinBox *gQuotaVal;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_16;
    QComboBox *gMirror;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_26;
    QComboBox *gIgnoreCase;
    QSpacerItem *verticalSpacer;
    QWidget *page_2;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QSpinBox *cRedir;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_10;
    QSpinBox *cTimeOut;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_11;
    QComboBox *cDNSCache;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_12;
    QSpinBox *cDNSto;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_19;
    QSpinBox *cWaitRel;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_20;
    QSpinBox *cWaitRet;
    QHBoxLayout *horizontalLayout_20;
    QLabel *label_18;
    QComboBox *cUseProxy;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_21;
    QComboBox *cRetCon;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_3;
    QGridLayout *gridLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_25;
    QComboBox *hILength;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_27;
    QComboBox *hCache;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_22;
    QTextEdit *hHeader;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_28;
    QTextEdit *hUserAgent;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_4;
    QGridLayout *gridLayout_3;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_30;
    QLabel *label_29;
    QComboBox *fRetSym;
    QHBoxLayout *horizontalLayout_31;
    QLabel *label_30;
    QComboBox *fPasiveFTP;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_5;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_13;
    QSpinBox *lDotByte;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_14;
    QSpinBox *lDotSpace;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_15;
    QSpinBox *lDotLine;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_6;
    QGridLayout *gridLayout_7;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_23;
    QLineEdit *uUser;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_24;
    QLineEdit *uPass;
    QCheckBox *uUseAll;
    QGroupBox *groupBox_7;
    QVBoxLayout *verticalLayout_9;
    QHBoxLayout *horizontalLayout_32;
    QLabel *label_31;
    QLineEdit *uHUser;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_32;
    QLineEdit *uHPass;
    QGroupBox *groupBox_8;
    QVBoxLayout *verticalLayout_8;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_33;
    QLineEdit *uFUser;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_34;
    QLineEdit *uFPass;
    QSpacerItem *verticalSpacer_6;

    void setupUi(QDialog *DialogWgetrc)
    {
        if (DialogWgetrc->objectName().isEmpty())
            DialogWgetrc->setObjectName(QString::fromUtf8("DialogWgetrc"));
        DialogWgetrc->resize(485, 463);
        gridLayout = new QGridLayout(DialogWgetrc);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        listWidget = new QListWidget(DialogWgetrc);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        new QListWidgetItem(listWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMaximumSize(QSize(150, 16777215));
        QFont font;
        font.setPointSize(11);
        listWidget->setFont(font);

        gridLayout->addWidget(listWidget, 0, 0, 1, 2);

        pbDefaults = new QPushButton(DialogWgetrc);
        pbDefaults->setObjectName(QString::fromUtf8("pbDefaults"));

        gridLayout->addWidget(pbDefaults, 1, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(152, 22, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 1, 1, 2);

        pbOk = new QPushButton(DialogWgetrc);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        gridLayout->addWidget(pbOk, 1, 3, 1, 1);

        pbApply = new QPushButton(DialogWgetrc);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));

        gridLayout->addWidget(pbApply, 1, 4, 1, 1);

        pbCancel = new QPushButton(DialogWgetrc);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        gridLayout->addWidget(pbCancel, 1, 5, 1, 1);

        stacked = new QStackedWidget(DialogWgetrc);
        stacked->setObjectName(QString::fromUtf8("stacked"));
        stacked->setMinimumSize(QSize(350, 0));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_5 = new QGridLayout(page);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_2 = new QGroupBox(page);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox_2);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        gBackground = new QComboBox(groupBox_2);
        gBackground->setObjectName(QString::fromUtf8("gBackground"));

        horizontalLayout->addWidget(gBackground);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_3->addWidget(label_4);

        gIP4 = new QComboBox(groupBox_2);
        gIP4->setObjectName(QString::fromUtf8("gIP4"));

        horizontalLayout_3->addWidget(gIP4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_4->addWidget(label_5);

        gIP6 = new QComboBox(groupBox_2);
        gIP6->setObjectName(QString::fromUtf8("gIP6"));

        horizontalLayout_4->addWidget(gIP6);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        gTimeStamping = new QComboBox(groupBox_2);
        gTimeStamping->setObjectName(QString::fromUtf8("gTimeStamping"));

        horizontalLayout_8->addWidget(gTimeStamping);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_6->addWidget(label_7);

        gNetRc = new QComboBox(groupBox_2);
        gNetRc->setObjectName(QString::fromUtf8("gNetRc"));

        horizontalLayout_6->addWidget(gNetRc);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        gLimit = new QCheckBox(groupBox_2);
        gLimit->setObjectName(QString::fromUtf8("gLimit"));

        horizontalLayout_14->addWidget(gLimit);

        gLimitVal = new QSpinBox(groupBox_2);
        gLimitVal->setObjectName(QString::fromUtf8("gLimitVal"));
        gLimitVal->setEnabled(false);

        horizontalLayout_14->addWidget(gLimitVal);


        verticalLayout_2->addLayout(horizontalLayout_14);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        gQuota = new QCheckBox(groupBox_2);
        gQuota->setObjectName(QString::fromUtf8("gQuota"));

        horizontalLayout_7->addWidget(gQuota);

        gQuotaVal = new QSpinBox(groupBox_2);
        gQuotaVal->setObjectName(QString::fromUtf8("gQuotaVal"));
        gQuotaVal->setEnabled(false);

        horizontalLayout_7->addWidget(gQuotaVal);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_18->addWidget(label_16);

        gMirror = new QComboBox(groupBox_2);
        gMirror->setObjectName(QString::fromUtf8("gMirror"));

        horizontalLayout_18->addWidget(gMirror);


        verticalLayout_2->addLayout(horizontalLayout_18);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setObjectName(QString::fromUtf8("horizontalLayout_28"));
        label_26 = new QLabel(groupBox_2);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_28->addWidget(label_26);

        gIgnoreCase = new QComboBox(groupBox_2);
        gIgnoreCase->setObjectName(QString::fromUtf8("gIgnoreCase"));

        horizontalLayout_28->addWidget(gIgnoreCase);


        verticalLayout_2->addLayout(horizontalLayout_28);

        verticalSpacer = new QSpacerItem(20, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);


        gridLayout_5->addWidget(groupBox_2, 0, 0, 1, 1);

        stacked->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        gridLayout_2 = new QGridLayout(page_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_5->addWidget(label_6);

        cRedir = new QSpinBox(groupBox);
        cRedir->setObjectName(QString::fromUtf8("cRedir"));
        cRedir->setMaximum(999);
        cRedir->setValue(20);

        horizontalLayout_5->addWidget(cRedir);


        verticalLayout->addLayout(horizontalLayout_5);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_11->addWidget(label_10);

        cTimeOut = new QSpinBox(groupBox);
        cTimeOut->setObjectName(QString::fromUtf8("cTimeOut"));

        horizontalLayout_11->addWidget(cTimeOut);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_12->addWidget(label_11);

        cDNSCache = new QComboBox(groupBox);
        cDNSCache->setObjectName(QString::fromUtf8("cDNSCache"));

        horizontalLayout_12->addWidget(cDNSCache);


        verticalLayout->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_13->addWidget(label_12);

        cDNSto = new QSpinBox(groupBox);
        cDNSto->setObjectName(QString::fromUtf8("cDNSto"));

        horizontalLayout_13->addWidget(cDNSto);


        verticalLayout->addLayout(horizontalLayout_13);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_21->addWidget(label_19);

        cWaitRel = new QSpinBox(groupBox);
        cWaitRel->setObjectName(QString::fromUtf8("cWaitRel"));

        horizontalLayout_21->addWidget(cWaitRel);


        verticalLayout->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_22->addWidget(label_20);

        cWaitRet = new QSpinBox(groupBox);
        cWaitRet->setObjectName(QString::fromUtf8("cWaitRet"));
        cWaitRet->setValue(10);

        horizontalLayout_22->addWidget(cWaitRet);


        verticalLayout->addLayout(horizontalLayout_22);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        label_18 = new QLabel(groupBox);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_20->addWidget(label_18);

        cUseProxy = new QComboBox(groupBox);
        cUseProxy->setObjectName(QString::fromUtf8("cUseProxy"));

        horizontalLayout_20->addWidget(cUseProxy);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_21 = new QLabel(groupBox);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_23->addWidget(label_21);

        cRetCon = new QComboBox(groupBox);
        cRetCon->setObjectName(QString::fromUtf8("cRetCon"));

        horizontalLayout_23->addWidget(cRetCon);


        verticalLayout->addLayout(horizontalLayout_23);

        verticalSpacer_2 = new QSpacerItem(20, 112, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        stacked->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        gridLayout_6 = new QGridLayout(page_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        groupBox_4 = new QGroupBox(page_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_5 = new QVBoxLayout(groupBox_4);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        label_25 = new QLabel(groupBox_4);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_27->addWidget(label_25);

        hILength = new QComboBox(groupBox_4);
        hILength->setObjectName(QString::fromUtf8("hILength"));

        horizontalLayout_27->addWidget(hILength);


        verticalLayout_5->addLayout(horizontalLayout_27);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        label_27 = new QLabel(groupBox_4);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_29->addWidget(label_27);

        hCache = new QComboBox(groupBox_4);
        hCache->setObjectName(QString::fromUtf8("hCache"));

        horizontalLayout_29->addWidget(hCache);


        verticalLayout_5->addLayout(horizontalLayout_29);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_22 = new QLabel(groupBox_4);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        verticalLayout_4->addWidget(label_22);

        hHeader = new QTextEdit(groupBox_4);
        hHeader->setObjectName(QString::fromUtf8("hHeader"));

        verticalLayout_4->addWidget(hHeader);


        verticalLayout_5->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_28 = new QLabel(groupBox_4);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        verticalLayout_3->addWidget(label_28);

        hUserAgent = new QTextEdit(groupBox_4);
        hUserAgent->setObjectName(QString::fromUtf8("hUserAgent"));

        verticalLayout_3->addWidget(hUserAgent);


        verticalLayout_5->addLayout(verticalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_3);


        gridLayout_6->addWidget(groupBox_4, 0, 0, 1, 1);

        stacked->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        gridLayout_3 = new QGridLayout(page_4);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        groupBox_5 = new QGroupBox(page_4);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_6 = new QVBoxLayout(groupBox_5);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        label_29 = new QLabel(groupBox_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_30->addWidget(label_29);

        fRetSym = new QComboBox(groupBox_5);
        fRetSym->setObjectName(QString::fromUtf8("fRetSym"));

        horizontalLayout_30->addWidget(fRetSym);


        verticalLayout_6->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        label_30 = new QLabel(groupBox_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_31->addWidget(label_30);

        fPasiveFTP = new QComboBox(groupBox_5);
        fPasiveFTP->setObjectName(QString::fromUtf8("fPasiveFTP"));

        horizontalLayout_31->addWidget(fPasiveFTP);


        verticalLayout_6->addLayout(horizontalLayout_31);

        verticalSpacer_4 = new QSpacerItem(20, 306, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);


        gridLayout_3->addWidget(groupBox_5, 0, 0, 1, 1);

        stacked->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        gridLayout_4 = new QGridLayout(page_5);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_3 = new QGroupBox(page_5);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_13 = new QLabel(groupBox_3);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_17->addWidget(label_13);

        lDotByte = new QSpinBox(groupBox_3);
        lDotByte->setObjectName(QString::fromUtf8("lDotByte"));
        lDotByte->setMinimum(1);
        lDotByte->setMaximum(999999999);
        lDotByte->setValue(1024);

        horizontalLayout_17->addWidget(lDotByte);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_16->addWidget(label_14);

        lDotSpace = new QSpinBox(groupBox_3);
        lDotSpace->setObjectName(QString::fromUtf8("lDotSpace"));
        lDotSpace->setMinimum(1);
        lDotSpace->setValue(10);

        horizontalLayout_16->addWidget(lDotSpace);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_15 = new QLabel(groupBox_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_15->addWidget(label_15);

        lDotLine = new QSpinBox(groupBox_3);
        lDotLine->setObjectName(QString::fromUtf8("lDotLine"));
        lDotLine->setMinimum(1);
        lDotLine->setValue(50);

        horizontalLayout_15->addWidget(lDotLine);


        verticalLayout_7->addLayout(horizontalLayout_15);

        verticalSpacer_5 = new QSpacerItem(20, 278, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_7->addItem(verticalSpacer_5);


        gridLayout_4->addWidget(groupBox_3, 0, 0, 1, 1);

        stacked->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QString::fromUtf8("page_6"));
        gridLayout_7 = new QGridLayout(page_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        groupBox_6 = new QGroupBox(page_6);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        verticalLayout_10 = new QVBoxLayout(groupBox_6);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        label_23 = new QLabel(groupBox_6);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_25->addWidget(label_23);

        uUser = new QLineEdit(groupBox_6);
        uUser->setObjectName(QString::fromUtf8("uUser"));

        horizontalLayout_25->addWidget(uUser);


        verticalLayout_10->addLayout(horizontalLayout_25);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_26->addWidget(label_24);

        uPass = new QLineEdit(groupBox_6);
        uPass->setObjectName(QString::fromUtf8("uPass"));

        horizontalLayout_26->addWidget(uPass);


        verticalLayout_10->addLayout(horizontalLayout_26);

        uUseAll = new QCheckBox(groupBox_6);
        uUseAll->setObjectName(QString::fromUtf8("uUseAll"));

        verticalLayout_10->addWidget(uUseAll);

        groupBox_7 = new QGroupBox(groupBox_6);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        verticalLayout_9 = new QVBoxLayout(groupBox_7);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_32->addWidget(label_31);

        uHUser = new QLineEdit(groupBox_7);
        uHUser->setObjectName(QString::fromUtf8("uHUser"));

        horizontalLayout_32->addWidget(uHUser);


        verticalLayout_9->addLayout(horizontalLayout_32);

        horizontalLayout_33 = new QHBoxLayout();
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        label_32 = new QLabel(groupBox_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_33->addWidget(label_32);

        uHPass = new QLineEdit(groupBox_7);
        uHPass->setObjectName(QString::fromUtf8("uHPass"));

        horizontalLayout_33->addWidget(uHPass);


        verticalLayout_9->addLayout(horizontalLayout_33);


        verticalLayout_10->addWidget(groupBox_7);

        groupBox_8 = new QGroupBox(groupBox_6);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        verticalLayout_8 = new QVBoxLayout(groupBox_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        label_33 = new QLabel(groupBox_8);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_34->addWidget(label_33);

        uFUser = new QLineEdit(groupBox_8);
        uFUser->setObjectName(QString::fromUtf8("uFUser"));

        horizontalLayout_34->addWidget(uFUser);


        verticalLayout_8->addLayout(horizontalLayout_34);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        label_34 = new QLabel(groupBox_8);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_35->addWidget(label_34);

        uFPass = new QLineEdit(groupBox_8);
        uFPass->setObjectName(QString::fromUtf8("uFPass"));

        horizontalLayout_35->addWidget(uFPass);


        verticalLayout_8->addLayout(horizontalLayout_35);


        verticalLayout_10->addWidget(groupBox_8);

        verticalSpacer_6 = new QSpacerItem(20, 105, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_6);


        gridLayout_7->addWidget(groupBox_6, 0, 0, 1, 1);

        stacked->addWidget(page_6);

        gridLayout->addWidget(stacked, 0, 2, 1, 4);


        retranslateUi(DialogWgetrc);
        QObject::connect(gLimit, SIGNAL(toggled(bool)), gLimitVal, SLOT(setEnabled(bool)));
        QObject::connect(uUseAll, SIGNAL(toggled(bool)), groupBox_7, SLOT(setDisabled(bool)));
        QObject::connect(uUseAll, SIGNAL(toggled(bool)), groupBox_8, SLOT(setDisabled(bool)));

        stacked->setCurrentIndex(1);
        gBackground->setCurrentIndex(1);
        gIP4->setCurrentIndex(1);
        gIP6->setCurrentIndex(1);
        gNetRc->setCurrentIndex(1);
        gMirror->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DialogWgetrc);
    } // setupUi

    void retranslateUi(QDialog *DialogWgetrc)
    {
        DialogWgetrc->setWindowTitle(QApplication::translate("DialogWgetrc", "Dialog", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DialogWgetrc", "General Option", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DialogWgetrc", "Connections", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DialogWgetrc", "Http", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem3 = listWidget->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("DialogWgetrc", "Ftp", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem4 = listWidget->item(4);
        ___qlistwidgetitem4->setText(QApplication::translate("DialogWgetrc", "Loging", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem5 = listWidget->item(5);
        ___qlistwidgetitem5->setText(QApplication::translate("DialogWgetrc", "User", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

        pbDefaults->setText(QApplication::translate("DialogWgetrc", "Defaults", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("DialogWgetrc", "Ok", 0, QApplication::UnicodeUTF8));
        pbApply->setText(QApplication::translate("DialogWgetrc", "Apply", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("DialogWgetrc", "Cancel", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DialogWgetrc", "General Options", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogWgetrc", "Start at Background Mode", 0, QApplication::UnicodeUTF8));
        gBackground->clear();
        gBackground->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("DialogWgetrc", "Force IPv4", 0, QApplication::UnicodeUTF8));
        gIP4->clear();
        gIP4->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("DialogWgetrc", "Force IPv6", 0, QApplication::UnicodeUTF8));
        gIP6->clear();
        gIP6->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("DialogWgetrc", "Time stamping", 0, QApplication::UnicodeUTF8));
        gTimeStamping->clear();
        gTimeStamping->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_7->setText(QApplication::translate("DialogWgetrc", "Use netrc", 0, QApplication::UnicodeUTF8));
        gNetRc->clear();
        gNetRc->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        gLimit->setText(QApplication::translate("DialogWgetrc", "Limit Download Speed", 0, QApplication::UnicodeUTF8));
        gLimitVal->setSuffix(QApplication::translate("DialogWgetrc", " KBps", 0, QApplication::UnicodeUTF8));
        gQuota->setText(QApplication::translate("DialogWgetrc", "Use Quota", 0, QApplication::UnicodeUTF8));
        gQuotaVal->setSuffix(QApplication::translate("DialogWgetrc", " K", 0, QApplication::UnicodeUTF8));
        gQuotaVal->setPrefix(QString());
        label_16->setText(QApplication::translate("DialogWgetrc", "Mirroring", 0, QApplication::UnicodeUTF8));
        gMirror->clear();
        gMirror->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_26->setText(QApplication::translate("DialogWgetrc", "Ignore case", 0, QApplication::UnicodeUTF8));
        gIgnoreCase->clear();
        gIgnoreCase->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        groupBox->setTitle(QApplication::translate("DialogWgetrc", "Connections", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogWgetrc", "Max Redirection", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("DialogWgetrc", "Connection Timeout", 0, QApplication::UnicodeUTF8));
        cTimeOut->setSuffix(QApplication::translate("DialogWgetrc", " Second", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("DialogWgetrc", "DNS caching", 0, QApplication::UnicodeUTF8));
        cDNSCache->clear();
        cDNSCache->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_12->setText(QApplication::translate("DialogWgetrc", "DNS Timeout", 0, QApplication::UnicodeUTF8));
        cDNSto->setSuffix(QApplication::translate("DialogWgetrc", " Second", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("DialogWgetrc", "Wait between retrival", 0, QApplication::UnicodeUTF8));
        cWaitRel->setSuffix(QApplication::translate("DialogWgetrc", " Second", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("DialogWgetrc", "Wait between retries", 0, QApplication::UnicodeUTF8));
        cWaitRet->setSuffix(QApplication::translate("DialogWgetrc", " Second", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("DialogWgetrc", "Use Proxy", 0, QApplication::UnicodeUTF8));
        cUseProxy->clear();
        cUseProxy->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_21->setText(QApplication::translate("DialogWgetrc", "Retry Connection refused", 0, QApplication::UnicodeUTF8));
        cRetCon->clear();
        cRetCon->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        groupBox_4->setTitle(QApplication::translate("DialogWgetrc", "HTTP Options", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DialogWgetrc", "Ignore length", 0, QApplication::UnicodeUTF8));
        hILength->clear();
        hILength->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_27->setText(QApplication::translate("DialogWgetrc", "Cache", 0, QApplication::UnicodeUTF8));
        hCache->clear();
        hCache->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_22->setText(QApplication::translate("DialogWgetrc", "Header (separate with new line)", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("DialogWgetrc", "User Agent", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("DialogWgetrc", "FTP Options", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("DialogWgetrc", "Retrieve symbolic links", 0, QApplication::UnicodeUTF8));
        fRetSym->clear();
        fRetSym->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        label_30->setText(QApplication::translate("DialogWgetrc", "Pasive FTP", 0, QApplication::UnicodeUTF8));
        fPasiveFTP->clear();
        fPasiveFTP->insertItems(0, QStringList()
         << QApplication::translate("DialogWgetrc", "On", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogWgetrc", "Off", 0, QApplication::UnicodeUTF8)
        );
        groupBox_3->setTitle(QApplication::translate("DialogWgetrc", "Loging", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DialogWgetrc", "Dot Bytes", 0, QApplication::UnicodeUTF8));
        lDotByte->setSuffix(QApplication::translate("DialogWgetrc", " Bytes", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DialogWgetrc", "Dot Spacing", 0, QApplication::UnicodeUTF8));
        lDotSpace->setSuffix(QApplication::translate("DialogWgetrc", " dots", 0, QApplication::UnicodeUTF8));
        lDotSpace->setPrefix(QString());
        label_15->setText(QApplication::translate("DialogWgetrc", "Number of Dot in Line", 0, QApplication::UnicodeUTF8));
        lDotLine->setSuffix(QApplication::translate("DialogWgetrc", " dots", 0, QApplication::UnicodeUTF8));
        lDotLine->setPrefix(QString());
        groupBox_6->setTitle(QApplication::translate("DialogWgetrc", "User", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("DialogWgetrc", "User        ", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DialogWgetrc", "Password", 0, QApplication::UnicodeUTF8));
        uUseAll->setText(QApplication::translate("DialogWgetrc", "Use this for HTTP and FTP", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("DialogWgetrc", "HTTP", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("DialogWgetrc", "HTTP User        ", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("DialogWgetrc", "HTTP Password", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("DialogWgetrc", "FTP", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("DialogWgetrc", "FTP User        ", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("DialogWgetrc", "FTP Password", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogWgetrc: public Ui_DialogWgetrc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGWGETRC_H
