/********************************************************************************
** Form generated from reading UI file 'dialogpreference.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPREFERENCE_H
#define UI_DIALOGPREFERENCE_H

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
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStackedWidget>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogPreference
{
public:
    QGridLayout *gridLayout;
    QPushButton *pbApply;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbClose;
    QStackedWidget *stackedWidget;
    QWidget *pageGeneral;
    QGridLayout *gridLayout_9;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QGridLayout *gridLayout_2;
    QLabel *label_14;
    QFrame *line_3;
    QLabel *label_15;
    QLabel *label_25;
    QComboBox *cbLang;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QFrame *frame;
    QToolButton *pbTempDir;
    QLabel *label_26;
    QSpinBox *sbWaitRetNum;
    QLabel *label_19;
    QLabel *label_20;
    QSpinBox *sbRetNum;
    QLineEdit *leTempDir;
    QCheckBox *cbRetryConRefuse;
    QSpinBox *sbMaxLimit;
    QCheckBox *cbMaxLimit;
    QSpacerItem *verticalSpacer_2;
    QWidget *pageCategory;
    QGridLayout *gridLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QVBoxLayout *verticalLayout;
    QLabel *label_11;
    QFrame *line_2;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label;
    QComboBox *cbCategory;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_2;
    QLineEdit *leFilesType;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *leCategorySaveDir;
    QPushButton *pbBrowseCatSaveDir;
    QCheckBox *cbCatRememberLasPath;
    QSpacerItem *verticalSpacer;
    QWidget *page;
    QGridLayout *gridLayout_11;
    QGridLayout *gridLayout_10;
    QLabel *label_22;
    QLabel *label_23;
    QFrame *line_5;
    QLabel *label_24;
    QTextBrowser *tbOptionsPreview;
    QLabel *label_27;
    QLineEdit *leOtherOptions;
    QListWidget *listWidget;

    void setupUi(QDialog *DialogPreference)
    {
        if (DialogPreference->objectName().isEmpty())
            DialogPreference->setObjectName(QString::fromUtf8("DialogPreference"));
        DialogPreference->resize(507, 422);
        DialogPreference->setMinimumSize(QSize(507, 422));
        DialogPreference->setMaximumSize(QSize(16777215, 16777215));
        DialogPreference->setBaseSize(QSize(490, 431));
        gridLayout = new QGridLayout(DialogPreference);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbApply = new QPushButton(DialogPreference);
        pbApply->setObjectName(QString::fromUtf8("pbApply"));

        gridLayout->addWidget(pbApply, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(168, 27, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pbClose = new QPushButton(DialogPreference);
        pbClose->setObjectName(QString::fromUtf8("pbClose"));

        gridLayout->addWidget(pbClose, 1, 3, 1, 1);

        stackedWidget = new QStackedWidget(DialogPreference);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setMinimumSize(QSize(351, 371));
        stackedWidget->setFrameShape(QFrame::Box);
        stackedWidget->setFrameShadow(QFrame::Raised);
        stackedWidget->setLineWidth(1);
        pageGeneral = new QWidget();
        pageGeneral->setObjectName(QString::fromUtf8("pageGeneral"));
        gridLayout_9 = new QGridLayout(pageGeneral);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_13 = new QLabel(pageGeneral);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMaximumSize(QSize(61, 61));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/big/cfGeneral.png")));
        label_13->setScaledContents(true);

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_14 = new QLabel(pageGeneral);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        line_3 = new QFrame(pageGeneral);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        gridLayout_2->addWidget(line_3, 1, 0, 1, 1);

        label_15 = new QLabel(pageGeneral);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 2, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_2, 0, 1, 1, 1);


        gridLayout_9->addLayout(gridLayout_3, 0, 0, 1, 2);

        label_25 = new QLabel(pageGeneral);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_9->addWidget(label_25, 1, 0, 1, 1);

        cbLang = new QComboBox(pageGeneral);
        cbLang->setObjectName(QString::fromUtf8("cbLang"));

        gridLayout_9->addWidget(cbLang, 1, 1, 1, 1);

        groupBox_2 = new QGroupBox(pageGeneral);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(331, 251));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        frame = new QFrame(groupBox_2);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Plain);
        frame->setLineWidth(0);
        pbTempDir = new QToolButton(frame);
        pbTempDir->setObjectName(QString::fromUtf8("pbTempDir"));
        pbTempDir->setGeometry(QRect(280, 70, 35, 29));
        label_26 = new QLabel(frame);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(0, 70, 79, 20));
        sbWaitRetNum = new QSpinBox(frame);
        sbWaitRetNum->setObjectName(QString::fromUtf8("sbWaitRetNum"));
        sbWaitRetNum->setGeometry(QRect(150, 40, 121, 25));
        label_19 = new QLabel(frame);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(0, 10, 141, 20));
        label_20 = new QLabel(frame);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(0, 40, 111, 20));
        sbRetNum = new QSpinBox(frame);
        sbRetNum->setObjectName(QString::fromUtf8("sbRetNum"));
        sbRetNum->setGeometry(QRect(150, 10, 121, 25));
        leTempDir = new QLineEdit(frame);
        leTempDir->setObjectName(QString::fromUtf8("leTempDir"));
        leTempDir->setGeometry(QRect(150, 70, 121, 26));
        cbRetryConRefuse = new QCheckBox(frame);
        cbRetryConRefuse->setObjectName(QString::fromUtf8("cbRetryConRefuse"));
        cbRetryConRefuse->setGeometry(QRect(0, 130, 311, 25));
        sbMaxLimit = new QSpinBox(frame);
        sbMaxLimit->setObjectName(QString::fromUtf8("sbMaxLimit"));
        sbMaxLimit->setEnabled(false);
        sbMaxLimit->setGeometry(QRect(150, 100, 121, 25));
        sbMaxLimit->setSuffix(QString::fromUtf8(" KBps"));
        sbMaxLimit->setMaximum(999999999);
        sbMaxLimit->setValue(256);
        cbMaxLimit = new QCheckBox(frame);
        cbMaxLimit->setObjectName(QString::fromUtf8("cbMaxLimit"));
        cbMaxLimit->setGeometry(QRect(0, 100, 131, 25));

        gridLayout_4->addWidget(frame, 0, 0, 1, 1);


        gridLayout_9->addWidget(groupBox_2, 2, 0, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_9->addItem(verticalSpacer_2, 3, 0, 1, 1);

        stackedWidget->addWidget(pageGeneral);
        pageCategory = new QWidget();
        pageCategory->setObjectName(QString::fromUtf8("pageCategory"));
        gridLayout_5 = new QGridLayout(pageCategory);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_10 = new QLabel(pageCategory);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMaximumSize(QSize(71, 71));
        label_10->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/big/cfCategory.png")));
        label_10->setScaledContents(true);

        horizontalLayout_2->addWidget(label_10);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_11 = new QLabel(pageCategory);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        QFont font;
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label_11->setFont(font);

        verticalLayout->addWidget(label_11);

        line_2 = new QFrame(pageCategory);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_2);

        label_12 = new QLabel(pageCategory);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        verticalLayout->addWidget(label_12);


        horizontalLayout_2->addLayout(verticalLayout);


        gridLayout_5->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label = new QLabel(pageCategory);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_4->addWidget(label);

        cbCategory = new QComboBox(pageCategory);
        cbCategory->setObjectName(QString::fromUtf8("cbCategory"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(cbCategory->sizePolicy().hasHeightForWidth());
        cbCategory->setSizePolicy(sizePolicy);
        cbCategory->setMinimumSize(QSize(150, 0));

        horizontalLayout_4->addWidget(cbCategory);

        horizontalSpacer_3 = new QSpacerItem(13, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_4, 1, 0, 1, 1);

        label_2 = new QLabel(pageCategory);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_5->addWidget(label_2, 2, 0, 1, 1);

        leFilesType = new QLineEdit(pageCategory);
        leFilesType->setObjectName(QString::fromUtf8("leFilesType"));

        gridLayout_5->addWidget(leFilesType, 3, 0, 1, 1);

        label_3 = new QLabel(pageCategory);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_5->addWidget(label_3, 4, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leCategorySaveDir = new QLineEdit(pageCategory);
        leCategorySaveDir->setObjectName(QString::fromUtf8("leCategorySaveDir"));
        leCategorySaveDir->setReadOnly(true);

        horizontalLayout->addWidget(leCategorySaveDir);

        pbBrowseCatSaveDir = new QPushButton(pageCategory);
        pbBrowseCatSaveDir->setObjectName(QString::fromUtf8("pbBrowseCatSaveDir"));

        horizontalLayout->addWidget(pbBrowseCatSaveDir);


        gridLayout_5->addLayout(horizontalLayout, 5, 0, 1, 1);

        cbCatRememberLasPath = new QCheckBox(pageCategory);
        cbCatRememberLasPath->setObjectName(QString::fromUtf8("cbCatRememberLasPath"));

        gridLayout_5->addWidget(cbCatRememberLasPath, 6, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 67, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer, 7, 0, 1, 1);

        stackedWidget->addWidget(pageCategory);
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        gridLayout_11 = new QGridLayout(page);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_22 = new QLabel(page);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setMinimumSize(QSize(75, 75));
        label_22->setMaximumSize(QSize(75, 75));
        label_22->setPixmap(QPixmap(QString::fromUtf8(":/image/icon/big/scriptman.png")));
        label_22->setScaledContents(true);

        gridLayout_10->addWidget(label_22, 0, 0, 3, 1);

        label_23 = new QLabel(page);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_10->addWidget(label_23, 0, 1, 1, 1);

        line_5 = new QFrame(page);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);

        gridLayout_10->addWidget(line_5, 1, 1, 1, 1);

        label_24 = new QLabel(page);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_10->addWidget(label_24, 2, 1, 1, 1);


        gridLayout_11->addLayout(gridLayout_10, 0, 0, 1, 1);

        tbOptionsPreview = new QTextBrowser(page);
        tbOptionsPreview->setObjectName(QString::fromUtf8("tbOptionsPreview"));
        tbOptionsPreview->setAutoFillBackground(false);
        tbOptionsPreview->setDocumentTitle(QString::fromUtf8(""));
        tbOptionsPreview->setOpenLinks(false);

        gridLayout_11->addWidget(tbOptionsPreview, 1, 0, 1, 1);

        label_27 = new QLabel(page);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_11->addWidget(label_27, 2, 0, 1, 1);

        leOtherOptions = new QLineEdit(page);
        leOtherOptions->setObjectName(QString::fromUtf8("leOtherOptions"));

        gridLayout_11->addWidget(leOtherOptions, 3, 0, 1, 1);

        stackedWidget->addWidget(page);

        gridLayout->addWidget(stackedWidget, 0, 1, 1, 3);

        listWidget = new QListWidget(DialogPreference);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/image/icon/big/cfGeneral.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem = new QListWidgetItem(listWidget);
        __qlistwidgetitem->setIcon(icon);
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/image/icon/big/cfCategory.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem1 = new QListWidgetItem(listWidget);
        __qlistwidgetitem1->setIcon(icon1);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/image/icon/big/scriptman.png"), QSize(), QIcon::Normal, QIcon::Off);
        QListWidgetItem *__qlistwidgetitem2 = new QListWidgetItem(listWidget);
        __qlistwidgetitem2->setIcon(icon2);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setMinimumSize(QSize(120, 0));
        listWidget->setMaximumSize(QSize(120, 16777215));

        gridLayout->addWidget(listWidget, 0, 0, 2, 1);


        retranslateUi(DialogPreference);
        QObject::connect(cbMaxLimit, SIGNAL(clicked(bool)), sbMaxLimit, SLOT(setEnabled(bool)));

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogPreference);
    } // setupUi

    void retranslateUi(QDialog *DialogPreference)
    {
        DialogPreference->setWindowTitle(QApplication::translate("DialogPreference", "Dialog", 0, QApplication::UnicodeUTF8));
        pbApply->setText(QApplication::translate("DialogPreference", "Apply", 0, QApplication::UnicodeUTF8));
        pbClose->setText(QApplication::translate("DialogPreference", "Close", 0, QApplication::UnicodeUTF8));
        label_13->setText(QString());
        label_14->setText(QApplication::translate("DialogPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">General</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("DialogPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#919191;\">General Configuration</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("DialogPreference", "Language", 0, QApplication::UnicodeUTF8));
        cbLang->clear();
        cbLang->insertItems(0, QStringList()
         << QApplication::translate("DialogPreference", "English (Default)", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogPreference", "Bahasa Indonesia", 0, QApplication::UnicodeUTF8)
        );
        groupBox_2->setTitle(QApplication::translate("DialogPreference", "General Download Option", 0, QApplication::UnicodeUTF8));
        pbTempDir->setText(QApplication::translate("DialogPreference", "...", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("DialogPreference", "Temp Dir", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbWaitRetNum->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        sbWaitRetNum->setSuffix(QApplication::translate("DialogPreference", " seconds", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("DialogPreference", "Retries Number", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("DialogPreference", "Wait retry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        sbRetNum->setToolTip(QApplication::translate("DialogPreference", "0 to set infinite", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cbRetryConRefuse->setText(QApplication::translate("DialogPreference", "Retry Connection Refuse", 0, QApplication::UnicodeUTF8));
        cbMaxLimit->setText(QApplication::translate("DialogPreference", "Speed limit", 0, QApplication::UnicodeUTF8));
        label_10->setText(QString());
        label_11->setText(QApplication::translate("DialogPreference", "Download Category", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("DialogPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<table border=\"0\" style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'Sans Serif'; font-size:14pt; color:#919191;\">Configure Download Category</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogPreference", "Category", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogPreference", "Files Type:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leFilesType->setToolTip(QApplication::translate("DialogPreference", "Dowload File types. Separate with comma.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_3->setText(QApplication::translate("DialogPreference", "Default Download Directory:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        leCategorySaveDir->setToolTip(QApplication::translate("DialogPreference", "Download Directory.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pbBrowseCatSaveDir->setText(QApplication::translate("DialogPreference", "Browse", 0, QApplication::UnicodeUTF8));
        cbCatRememberLasPath->setText(QApplication::translate("DialogPreference", "Remember last Save Path", 0, QApplication::UnicodeUTF8));
        label_22->setText(QString());
        label_23->setText(QApplication::translate("DialogPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt; font-weight:600;\">Options Preview</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("DialogPreference", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:14pt; font-weight:400; font-style:normal;\">\n"
"<table style=\"-qt-table-type: root; margin-top:4px; margin-bottom:4px; margin-left:4px; margin-right:4px;\">\n"
"<tr>\n"
"<td style=\"border: none;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#919191;\">Preview current download </span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#919191;\">options</span></p></td></tr></table></body></html>", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("DialogPreference", "Add other options", 0, QApplication::UnicodeUTF8));

        const bool __sortingEnabled = listWidget->isSortingEnabled();
        listWidget->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = listWidget->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("DialogPreference", "General", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem1 = listWidget->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("DialogPreference", "Category", 0, QApplication::UnicodeUTF8));
        QListWidgetItem *___qlistwidgetitem2 = listWidget->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("DialogPreference", "Options", 0, QApplication::UnicodeUTF8));
        listWidget->setSortingEnabled(__sortingEnabled);

    } // retranslateUi

};

namespace Ui {
    class DialogPreference: public Ui_DialogPreference {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPREFERENCE_H
