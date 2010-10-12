/********************************************************************************
** Form generated from reading UI file 'dialogsitegrabber.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGSITEGRABBER_H
#define UI_DIALOGSITEGRABBER_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QScrollArea>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogSiteGrabber
{
public:
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbBack;
    QPushButton *pbNext;
    QPushButton *pbRun;
    QPushButton *pbCancel;
    QStackedWidget *stackedWidget;
    QWidget *pageProject;
    QGridLayout *gridLayout_13;
    QLabel *label;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QFrame *line;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lePName;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lePDir;
    QToolButton *pbPDir;
    QGridLayout *gridLayout_12;
    QLabel *label_7;
    QComboBox *cbPType;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lePURL;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageOfflineBrowsing;
    QGridLayout *gridLayout_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QCheckBox *cbMirror;
    QFrame *frame;
    QLabel *label_6;
    QSpinBox *sbLevelDepthOBP;
    QCheckBox *cbConvertLinkOBP;
    QCheckBox *cbCreateBackupOBP;
    QCheckBox *cbFollowFTPOBP;
    QCheckBox *cbFollowRelativeOBP;
    QCheckBox *cbNoParentOBP;
    QWidget *pageFTP;
    QGridLayout *gridLayout_8;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_8;
    QLineEdit *leFTPURL;
    QCheckBox *cbRetrieveSimLinkFTP;
    QLabel *label_14;
    QSpinBox *sbLevelDepthFTP;
    QGroupBox *gbUseAcc;
    QGridLayout *gridLayout_7;
    QLabel *label_9;
    QLineEdit *leUser;
    QLabel *label_10;
    QLineEdit *lePass;
    QWidget *pageCustom;
    QGridLayout *gridLayout_5;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_6;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_9;
    QLabel *label_11;
    QComboBox *cbAcceptList;
    QLabel *label_12;
    QComboBox *cbRejectList;
    QCheckBox *cbSearchLocalOnly;
    QLabel *label_13;
    QSpinBox *sbLevelDepthCP;
    QCheckBox *cbConvertLinkCP;
    QCheckBox *cbCreateBackupCP;
    QCheckBox *cbFollowFTPCP;
    QCheckBox *cbNoParentCP;

    void setupUi(QDialog *DialogSiteGrabber)
    {
        if (DialogSiteGrabber->objectName().isEmpty())
            DialogSiteGrabber->setObjectName(QString::fromUtf8("DialogSiteGrabber"));
        DialogSiteGrabber->resize(572, 293);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DialogSiteGrabber->sizePolicy().hasHeightForWidth());
        DialogSiteGrabber->setSizePolicy(sizePolicy);
        DialogSiteGrabber->setMinimumSize(QSize(0, 0));
        DialogSiteGrabber->setMaximumSize(QSize(595, 316));
        gridLayout = new QGridLayout(DialogSiteGrabber);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbBack = new QPushButton(DialogSiteGrabber);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(DialogSiteGrabber);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);

        pbRun = new QPushButton(DialogSiteGrabber);
        pbRun->setObjectName(QString::fromUtf8("pbRun"));

        horizontalLayout->addWidget(pbRun);

        pbCancel = new QPushButton(DialogSiteGrabber);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        horizontalLayout->addWidget(pbCancel);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        stackedWidget = new QStackedWidget(DialogSiteGrabber);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        pageProject = new QWidget();
        pageProject->setObjectName(QString::fromUtf8("pageProject"));
        gridLayout_13 = new QGridLayout(pageProject);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label = new QLabel(pageProject);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/big/Internet Options.png")));
        label->setScaledContents(true);

        gridLayout_13->addWidget(label, 0, 0, 3, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_2 = new QLabel(pageProject);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout->addWidget(label_2);

        line = new QFrame(pageProject);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);


        gridLayout_13->addLayout(verticalLayout, 0, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(pageProject);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lePName = new QLineEdit(pageProject);
        lePName->setObjectName(QString::fromUtf8("lePName"));

        horizontalLayout_3->addWidget(lePName);


        gridLayout_13->addLayout(horizontalLayout_3, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(pageProject);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lePDir = new QLineEdit(pageProject);
        lePDir->setObjectName(QString::fromUtf8("lePDir"));

        horizontalLayout_4->addWidget(lePDir);

        pbPDir = new QToolButton(pageProject);
        pbPDir->setObjectName(QString::fromUtf8("pbPDir"));

        horizontalLayout_4->addWidget(pbPDir);


        gridLayout_13->addLayout(horizontalLayout_4, 2, 1, 1, 1);

        gridLayout_12 = new QGridLayout();
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        label_7 = new QLabel(pageProject);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_12->addWidget(label_7, 0, 0, 1, 1);

        cbPType = new QComboBox(pageProject);
        cbPType->setObjectName(QString::fromUtf8("cbPType"));

        gridLayout_12->addWidget(cbPType, 0, 1, 1, 1);


        gridLayout_13->addLayout(gridLayout_12, 3, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(pageProject);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lePURL = new QLineEdit(pageProject);
        lePURL->setObjectName(QString::fromUtf8("lePURL"));

        horizontalLayout_5->addWidget(lePURL);


        gridLayout_13->addLayout(horizontalLayout_5, 4, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 37, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_13->addItem(verticalSpacer_2, 5, 0, 1, 1);

        stackedWidget->addWidget(pageProject);
        pageOfflineBrowsing = new QWidget();
        pageOfflineBrowsing->setObjectName(QString::fromUtf8("pageOfflineBrowsing"));
        gridLayout_2 = new QGridLayout(pageOfflineBrowsing);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        groupBox = new QGroupBox(pageOfflineBrowsing);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        cbMirror = new QCheckBox(groupBox);
        cbMirror->setObjectName(QString::fromUtf8("cbMirror"));

        gridLayout_3->addWidget(cbMirror, 0, 0, 1, 1);

        frame = new QFrame(groupBox);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 101, 20));
        sbLevelDepthOBP = new QSpinBox(frame);
        sbLevelDepthOBP->setObjectName(QString::fromUtf8("sbLevelDepthOBP"));
        sbLevelDepthOBP->setGeometry(QRect(140, 10, 63, 25));
        cbConvertLinkOBP = new QCheckBox(frame);
        cbConvertLinkOBP->setObjectName(QString::fromUtf8("cbConvertLinkOBP"));
        cbConvertLinkOBP->setGeometry(QRect(10, 40, 181, 25));
        cbCreateBackupOBP = new QCheckBox(frame);
        cbCreateBackupOBP->setObjectName(QString::fromUtf8("cbCreateBackupOBP"));
        cbCreateBackupOBP->setGeometry(QRect(210, 40, 161, 25));
        cbFollowFTPOBP = new QCheckBox(frame);
        cbFollowFTPOBP->setObjectName(QString::fromUtf8("cbFollowFTPOBP"));
        cbFollowFTPOBP->setGeometry(QRect(10, 70, 121, 25));
        cbFollowRelativeOBP = new QCheckBox(frame);
        cbFollowRelativeOBP->setObjectName(QString::fromUtf8("cbFollowRelativeOBP"));
        cbFollowRelativeOBP->setGeometry(QRect(10, 100, 241, 25));
        cbNoParentOBP = new QCheckBox(frame);
        cbNoParentOBP->setObjectName(QString::fromUtf8("cbNoParentOBP"));
        cbNoParentOBP->setGeometry(QRect(10, 130, 105, 25));

        gridLayout_3->addWidget(frame, 1, 0, 1, 1);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 1);

        stackedWidget->addWidget(pageOfflineBrowsing);
        pageFTP = new QWidget();
        pageFTP->setObjectName(QString::fromUtf8("pageFTP"));
        gridLayout_8 = new QGridLayout(pageFTP);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        groupBox_2 = new QGroupBox(pageFTP);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_2->addWidget(label_8);

        leFTPURL = new QLineEdit(groupBox_2);
        leFTPURL->setObjectName(QString::fromUtf8("leFTPURL"));

        horizontalLayout_2->addWidget(leFTPURL);


        gridLayout_4->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        cbRetrieveSimLinkFTP = new QCheckBox(groupBox_2);
        cbRetrieveSimLinkFTP->setObjectName(QString::fromUtf8("cbRetrieveSimLinkFTP"));

        gridLayout_4->addWidget(cbRetrieveSimLinkFTP, 1, 0, 1, 2);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_4->addWidget(label_14, 2, 0, 1, 1);

        sbLevelDepthFTP = new QSpinBox(groupBox_2);
        sbLevelDepthFTP->setObjectName(QString::fromUtf8("sbLevelDepthFTP"));

        gridLayout_4->addWidget(sbLevelDepthFTP, 2, 1, 1, 1);

        gbUseAcc = new QGroupBox(groupBox_2);
        gbUseAcc->setObjectName(QString::fromUtf8("gbUseAcc"));
        gbUseAcc->setCheckable(true);
        gbUseAcc->setChecked(false);
        gridLayout_7 = new QGridLayout(gbUseAcc);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_9 = new QLabel(gbUseAcc);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_7->addWidget(label_9, 0, 0, 1, 1);

        leUser = new QLineEdit(gbUseAcc);
        leUser->setObjectName(QString::fromUtf8("leUser"));

        gridLayout_7->addWidget(leUser, 0, 1, 1, 1);

        label_10 = new QLabel(gbUseAcc);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_7->addWidget(label_10, 1, 0, 1, 1);

        lePass = new QLineEdit(gbUseAcc);
        lePass->setObjectName(QString::fromUtf8("lePass"));

        gridLayout_7->addWidget(lePass, 1, 1, 1, 1);


        gridLayout_4->addWidget(gbUseAcc, 3, 0, 1, 2);


        gridLayout_8->addWidget(groupBox_2, 0, 0, 1, 1);

        stackedWidget->addWidget(pageFTP);
        pageCustom = new QWidget();
        pageCustom->setObjectName(QString::fromUtf8("pageCustom"));
        gridLayout_5 = new QGridLayout(pageCustom);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        groupBox_3 = new QGroupBox(pageCustom);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_6 = new QGridLayout(groupBox_3);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        scrollArea = new QScrollArea(groupBox_3);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 500, 220));
        gridLayout_9 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_11 = new QLabel(scrollAreaWidgetContents);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_9->addWidget(label_11, 0, 0, 1, 2);

        cbAcceptList = new QComboBox(scrollAreaWidgetContents);
        cbAcceptList->addItem(QString());
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icon/big/utamacompressed.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon, QString::fromUtf8("rar,tar,zip,tgz"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icon/big/Pollen_Flower.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon1, QString::fromUtf8("jpg,jpeg,png,gif,tiff,svga,bmp"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icon/big/utamadocument.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon2, QString::fromUtf8("pdf,ps"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/image/icon/big/categoryfiles.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon3, QString::fromUtf8("doc,xls,odt,ods,odp,odf,ppt,rtf"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/image/icon/big/scriptman.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon4, QString::fromUtf8("c,cpp,java,py,cxx,h,hpp,sh,css,php,pl"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/image/icon/big/utamamusic.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon5, QString());
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/image/icon/big/utamavideo.png"), QSize(), QIcon::Normal, QIcon::Off);
        cbAcceptList->addItem(icon6, QString());
        cbAcceptList->setObjectName(QString::fromUtf8("cbAcceptList"));
        cbAcceptList->setEditable(true);

        gridLayout_9->addWidget(cbAcceptList, 1, 0, 1, 3);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_9->addWidget(label_12, 2, 0, 1, 2);

        cbRejectList = new QComboBox(scrollAreaWidgetContents);
        cbRejectList->setObjectName(QString::fromUtf8("cbRejectList"));
        cbRejectList->setEditable(true);

        gridLayout_9->addWidget(cbRejectList, 3, 0, 1, 3);

        cbSearchLocalOnly = new QCheckBox(scrollAreaWidgetContents);
        cbSearchLocalOnly->setObjectName(QString::fromUtf8("cbSearchLocalOnly"));

        gridLayout_9->addWidget(cbSearchLocalOnly, 4, 0, 1, 1);

        label_13 = new QLabel(scrollAreaWidgetContents);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_9->addWidget(label_13, 5, 0, 1, 1);

        sbLevelDepthCP = new QSpinBox(scrollAreaWidgetContents);
        sbLevelDepthCP->setObjectName(QString::fromUtf8("sbLevelDepthCP"));

        gridLayout_9->addWidget(sbLevelDepthCP, 5, 1, 1, 1);

        cbConvertLinkCP = new QCheckBox(scrollAreaWidgetContents);
        cbConvertLinkCP->setObjectName(QString::fromUtf8("cbConvertLinkCP"));

        gridLayout_9->addWidget(cbConvertLinkCP, 6, 0, 1, 1);

        cbCreateBackupCP = new QCheckBox(scrollAreaWidgetContents);
        cbCreateBackupCP->setObjectName(QString::fromUtf8("cbCreateBackupCP"));

        gridLayout_9->addWidget(cbCreateBackupCP, 6, 2, 1, 1);

        cbFollowFTPCP = new QCheckBox(scrollAreaWidgetContents);
        cbFollowFTPCP->setObjectName(QString::fromUtf8("cbFollowFTPCP"));

        gridLayout_9->addWidget(cbFollowFTPCP, 7, 0, 1, 1);

        cbNoParentCP = new QCheckBox(scrollAreaWidgetContents);
        cbNoParentCP->setObjectName(QString::fromUtf8("cbNoParentCP"));

        gridLayout_9->addWidget(cbNoParentCP, 8, 0, 1, 1);

        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_6->addWidget(scrollArea, 0, 0, 1, 1);


        gridLayout_5->addWidget(groupBox_3, 0, 0, 1, 1);

        stackedWidget->addWidget(pageCustom);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_3->setBuddy(lePName);
        label_4->setBuddy(lePDir);
        label_7->setBuddy(cbPType);
        label_5->setBuddy(lePURL);
        label_6->setBuddy(sbLevelDepthOBP);
        label_8->setBuddy(leFTPURL);
        label_9->setBuddy(leUser);
        label_10->setBuddy(lePass);
        label_11->setBuddy(cbAcceptList);
        label_12->setBuddy(cbRejectList);
        label_13->setBuddy(sbLevelDepthCP);
#endif // QT_NO_SHORTCUT

        retranslateUi(DialogSiteGrabber);
        QObject::connect(cbMirror, SIGNAL(toggled(bool)), frame, SLOT(setDisabled(bool)));
        QObject::connect(cbConvertLinkOBP, SIGNAL(toggled(bool)), cbCreateBackupOBP, SLOT(setVisible(bool)));
        QObject::connect(cbConvertLinkOBP, SIGNAL(toggled(bool)), cbCreateBackupOBP, SLOT(setChecked(bool)));
        QObject::connect(cbConvertLinkCP, SIGNAL(toggled(bool)), cbCreateBackupCP, SLOT(setVisible(bool)));
        QObject::connect(cbConvertLinkCP, SIGNAL(toggled(bool)), cbCreateBackupCP, SLOT(setChecked(bool)));

        stackedWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(DialogSiteGrabber);
    } // setupUi

    void retranslateUi(QDialog *DialogSiteGrabber)
    {
        DialogSiteGrabber->setWindowTitle(QApplication::translate("DialogSiteGrabber", "Dialog", 0, QApplication::UnicodeUTF8));
        pbBack->setText(QApplication::translate("DialogSiteGrabber", "< Back", 0, QApplication::UnicodeUTF8));
        pbNext->setText(QApplication::translate("DialogSiteGrabber", "Next >", 0, QApplication::UnicodeUTF8));
        pbRun->setText(QApplication::translate("DialogSiteGrabber", "Run", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("DialogSiteGrabber", "Cancel", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        label_2->setText(QApplication::translate("DialogSiteGrabber", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:20pt; font-weight:600;\">Grabber Project</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogSiteGrabber", "Project Name", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("DialogSiteGrabber", "Project Dir     ", 0, QApplication::UnicodeUTF8));
        pbPDir->setText(QApplication::translate("DialogSiteGrabber", "...", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("DialogSiteGrabber", "Project Type", 0, QApplication::UnicodeUTF8));
        cbPType->clear();
        cbPType->insertItems(0, QStringList()
         << QApplication::translate("DialogSiteGrabber", "HTTP (Offline Browsing)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSiteGrabber", "FTP", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogSiteGrabber", "Custom", 0, QApplication::UnicodeUTF8)
        );
        label_5->setText(QApplication::translate("DialogSiteGrabber", "URL     ", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogSiteGrabber", "Customize for Offline Browsing Project", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbMirror->setToolTip(QApplication::translate("DialogSiteGrabber", "Use recursion rule as Mirroring rule.\n"
"- Turn on Recursion\n"
"- Turn on Time Stamping\n"
"- Sets infinite recursion depth\n"
"- Keeps FTP directory listings", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbMirror->setText(QApplication::translate("DialogSiteGrabber", "Use Mirroring Rule", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogSiteGrabber", "Level depth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbLevelDepthOBP->setToolTip(QApplication::translate("DialogSiteGrabber", "Set maximum recursion depth. (Use 0 to set Infinite depth)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbConvertLinkOBP->setToolTip(QApplication::translate("DialogSiteGrabber", "After the download is complete, convert the links in the\n"
"document to make them suitable for local viewing.  This\n"
"affects not only the visible hyperlinks, but any part of\n"
"the document that links to external content, such as\n"
"embedded images, links to style sheets, hyperlinks to\n"
"non-HTML content, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cbConvertLinkOBP->setWhatsThis(QApplication::translate("DialogSiteGrabber", "After the download is complete, convert the links in the document to make them suitable for local viewing.  This affects not only the visible hyperlinks, but any part of the document that links to external content, such as embedded images, links to style sheets, hyperlinks to non-HTML content, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbConvertLinkOBP->setText(QApplication::translate("DialogSiteGrabber", "Convert Link", 0, QApplication::UnicodeUTF8));
        cbCreateBackupOBP->setText(QApplication::translate("DialogSiteGrabber", "Create Backup", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbFollowFTPOBP->setToolTip(QApplication::translate("DialogSiteGrabber", "Follow FTP links from HTML documents.  Without this option, ignore all the FTP links.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbFollowFTPOBP->setText(QApplication::translate("DialogSiteGrabber", "Follow FTP", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbFollowRelativeOBP->setToolTip(QApplication::translate("DialogSiteGrabber", "Follow relative links only.  Useful for retrieving a specific\n"
"home page without any distractions, not even those\n"
"from the same hosts.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbFollowRelativeOBP->setText(QApplication::translate("DialogSiteGrabber", "Follow Relative Links Only", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cbNoParentOBP->setToolTip(QApplication::translate("DialogSiteGrabber", "Do not ever ascend to the parent directory when\n"
"retrieving recursively.  This is a useful option, since it\n"
"guarantees that only the files below a certain hierarchy\n"
"will be downloaded.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbNoParentOBP->setText(QApplication::translate("DialogSiteGrabber", "No Parent", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DialogSiteGrabber", "Customize FTP project", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("DialogSiteGrabber", "FTP Url", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leFTPURL->setToolTip(QApplication::translate("DialogSiteGrabber", "Use special characters (wildcards), like *, ?, [ and ] to\n"
"retrieve more than one file from the same directory at\n"
"once.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbRetrieveSimLinkFTP->setToolTip(QApplication::translate("DialogSiteGrabber", "When retrieving FTP directories recursively and a \n"
"symbolic link is encountered, the linked-to file is not \n"
"downloaded.\n"
"Use this to enable retrieving for symbolic links.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbRetrieveSimLinkFTP->setText(QApplication::translate("DialogSiteGrabber", "Retrieve Symbolic Links", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("DialogSiteGrabber", "Level depth", 0, QApplication::UnicodeUTF8));
        gbUseAcc->setTitle(QApplication::translate("DialogSiteGrabber", "Use Account", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("DialogSiteGrabber", "Username", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leUser->setToolTip(QApplication::translate("DialogSiteGrabber", "FTP Username", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_10->setText(QApplication::translate("DialogSiteGrabber", "Password", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        lePass->setToolTip(QApplication::translate("DialogSiteGrabber", "FTP Password", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_3->setTitle(QApplication::translate("DialogSiteGrabber", "Custom Project", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("DialogSiteGrabber", "Download The following files: (File types)", 0, QApplication::UnicodeUTF8));
        cbAcceptList->setItemText(0, QApplication::translate("DialogSiteGrabber", "Don't use list", 0, QApplication::UnicodeUTF8));
        cbAcceptList->setItemText(6, QApplication::translate("DialogSiteGrabber", "mp3,ogg,wav", 0, QApplication::UnicodeUTF8));
        cbAcceptList->setItemText(7, QApplication::translate("DialogSiteGrabber", "mpg,mp4,avi,ogm,mkv,rm,rmvb,flv", 0, QApplication::UnicodeUTF8));

        label_12->setText(QApplication::translate("DialogSiteGrabber", "Don't download the following files:", 0, QApplication::UnicodeUTF8));
        cbSearchLocalOnly->setText(QApplication::translate("DialogSiteGrabber", "Search file in this site Only", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("DialogSiteGrabber", "Level depth", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbLevelDepthCP->setToolTip(QApplication::translate("DialogSiteGrabber", "Set maximum recursion depth. (Use 0 to set Infinite depth)", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cbConvertLinkCP->setToolTip(QApplication::translate("DialogSiteGrabber", "After the download is complete, convert the links in the\n"
"document to make them suitable for local viewing.  This\n"
"affects not only the visible hyperlinks, but any part of\n"
"the document that links to external content, such as\n"
"embedded images, links to style sheets, hyperlinks to\n"
"non-HTML content, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        cbConvertLinkCP->setWhatsThis(QApplication::translate("DialogSiteGrabber", "After the download is complete, convert the links in the document to make them suitable for local viewing.  This affects not only the visible hyperlinks, but any part of the document that links to external content, such as embedded images, links to style sheets, hyperlinks to non-HTML content, etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        cbConvertLinkCP->setText(QApplication::translate("DialogSiteGrabber", "Convert Link", 0, QApplication::UnicodeUTF8));
        cbCreateBackupCP->setText(QApplication::translate("DialogSiteGrabber", "Create Backup", 0, QApplication::UnicodeUTF8));
        cbFollowFTPCP->setText(QApplication::translate("DialogSiteGrabber", "Follow FTP", 0, QApplication::UnicodeUTF8));
        cbNoParentCP->setText(QApplication::translate("DialogSiteGrabber", "No Parent", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogSiteGrabber: public Ui_DialogSiteGrabber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGSITEGRABBER_H
