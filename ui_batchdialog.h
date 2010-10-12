/********************************************************************************
** Form generated from reading UI file 'batchdialog.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BATCHDIALOG_H
#define UI_BATCHDIALOG_H

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
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BatchDialog
{
public:
    QGroupBox *groupBox;
    QRadioButton *rbNumber;
    QRadioButton *rbLetter;
    QLabel *label_3;
    QSpinBox *sbFrom;
    QSpinBox *sbTo;
    QLabel *label_4;
    QLabel *labelWildcard;
    QSpinBox *sbWildcard;
    QComboBox *cbMulai;
    QComboBox *cbAkhir;
    QCheckBox *cbUpperCase;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QLabel *label_6;
    QLineEdit *leFirst;
    QLabel *label_7;
    QLineEdit *leSecond;
    QLabel *label_9;
    QLabel *label_8;
    QLineEdit *leLast;
    QWidget *layoutWidget_2;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *leUrl;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QLineEdit *leSaveDir;
    QToolButton *pbBrowseDir;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbOk;
    QPushButton *pbCancel;

    void setupUi(QDialog *BatchDialog)
    {
        if (BatchDialog->objectName().isEmpty())
            BatchDialog->setObjectName(QString::fromUtf8("BatchDialog"));
        BatchDialog->resize(449, 414);
        groupBox = new QGroupBox(BatchDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 100, 431, 101));
        rbNumber = new QRadioButton(groupBox);
        rbNumber->setObjectName(QString::fromUtf8("rbNumber"));
        rbNumber->setGeometry(QRect(10, 20, 101, 26));
        rbLetter = new QRadioButton(groupBox);
        rbLetter->setObjectName(QString::fromUtf8("rbLetter"));
        rbLetter->setGeometry(QRect(90, 20, 129, 26));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 60, 51, 20));
        sbFrom = new QSpinBox(groupBox);
        sbFrom->setObjectName(QString::fromUtf8("sbFrom"));
        sbFrom->setGeometry(QRect(60, 60, 63, 25));
        sbTo = new QSpinBox(groupBox);
        sbTo->setObjectName(QString::fromUtf8("sbTo"));
        sbTo->setGeometry(QRect(170, 60, 63, 25));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(140, 60, 41, 20));
        labelWildcard = new QLabel(groupBox);
        labelWildcard->setObjectName(QString::fromUtf8("labelWildcard"));
        labelWildcard->setGeometry(QRect(260, 60, 111, 20));
        sbWildcard = new QSpinBox(groupBox);
        sbWildcard->setObjectName(QString::fromUtf8("sbWildcard"));
        sbWildcard->setGeometry(QRect(340, 60, 63, 25));
        cbMulai = new QComboBox(groupBox);
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString());
        cbMulai->addItem(QString::fromUtf8("Z"));
        cbMulai->setObjectName(QString::fromUtf8("cbMulai"));
        cbMulai->setGeometry(QRect(60, 60, 61, 26));
        cbAkhir = new QComboBox(groupBox);
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString());
        cbAkhir->addItem(QString::fromUtf8("Z"));
        cbAkhir->setObjectName(QString::fromUtf8("cbAkhir"));
        cbAkhir->setGeometry(QRect(170, 60, 61, 26));
        cbUpperCase = new QCheckBox(groupBox);
        cbUpperCase->setObjectName(QString::fromUtf8("cbUpperCase"));
        cbUpperCase->setGeometry(QRect(190, 20, 141, 25));
        rbNumber->raise();
        rbLetter->raise();
        label_3->raise();
        label_4->raise();
        labelWildcard->raise();
        sbWildcard->raise();
        cbMulai->raise();
        cbAkhir->raise();
        cbUpperCase->raise();
        sbTo->raise();
        sbFrom->raise();
        groupBox_2 = new QGroupBox(BatchDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setEnabled(true);
        groupBox_2->setGeometry(QRect(10, 205, 431, 131));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 0, 0, 1, 1);

        leFirst = new QLineEdit(groupBox_2);
        leFirst->setObjectName(QString::fromUtf8("leFirst"));
        leFirst->setEnabled(false);
        leFirst->setReadOnly(true);

        gridLayout->addWidget(leFirst, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 1, 0, 1, 1);

        leSecond = new QLineEdit(groupBox_2);
        leSecond->setObjectName(QString::fromUtf8("leSecond"));
        leSecond->setEnabled(false);

        gridLayout->addWidget(leSecond, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 2, 0, 1, 2);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 0, 1, 1);

        leLast = new QLineEdit(groupBox_2);
        leLast->setObjectName(QString::fromUtf8("leLast"));
        leLast->setEnabled(false);

        gridLayout->addWidget(leLast, 3, 1, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        layoutWidget_2 = new QWidget(BatchDialog);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(10, 10, 431, 81));
        gridLayout_2 = new QGridLayout(layoutWidget_2);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 2);

        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        leUrl = new QLineEdit(layoutWidget_2);
        leUrl->setObjectName(QString::fromUtf8("leUrl"));

        gridLayout_2->addWidget(leUrl, 1, 1, 1, 1);

        layoutWidget = new QWidget(BatchDialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 340, 431, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout->addWidget(label_5);

        leSaveDir = new QLineEdit(layoutWidget);
        leSaveDir->setObjectName(QString::fromUtf8("leSaveDir"));

        horizontalLayout->addWidget(leSaveDir);

        pbBrowseDir = new QToolButton(layoutWidget);
        pbBrowseDir->setObjectName(QString::fromUtf8("pbBrowseDir"));

        horizontalLayout->addWidget(pbBrowseDir);

        widget = new QWidget(BatchDialog);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(10, 380, 431, 25));
        horizontalLayout_2 = new QHBoxLayout(widget);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pbOk = new QPushButton(widget);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));

        horizontalLayout_2->addWidget(pbOk);

        pbCancel = new QPushButton(widget);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        horizontalLayout_2->addWidget(pbCancel);

        QWidget::setTabOrder(leUrl, cbMulai);
        QWidget::setTabOrder(cbMulai, sbFrom);
        QWidget::setTabOrder(sbFrom, cbAkhir);
        QWidget::setTabOrder(cbAkhir, sbTo);
        QWidget::setTabOrder(sbTo, sbWildcard);
        QWidget::setTabOrder(sbWildcard, leFirst);
        QWidget::setTabOrder(leFirst, leSecond);
        QWidget::setTabOrder(leSecond, leLast);
        QWidget::setTabOrder(leLast, leSaveDir);
        QWidget::setTabOrder(leSaveDir, pbBrowseDir);
        QWidget::setTabOrder(pbBrowseDir, pbOk);
        QWidget::setTabOrder(pbOk, pbCancel);
        QWidget::setTabOrder(pbCancel, cbUpperCase);
        QWidget::setTabOrder(cbUpperCase, rbLetter);
        QWidget::setTabOrder(rbLetter, rbNumber);

        retranslateUi(BatchDialog);

        QMetaObject::connectSlotsByName(BatchDialog);
    } // setupUi

    void retranslateUi(QDialog *BatchDialog)
    {
        BatchDialog->setWindowTitle(QApplication::translate("BatchDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("BatchDialog", "Replace Asterik to:", 0, QApplication::UnicodeUTF8));
        rbNumber->setText(QApplication::translate("BatchDialog", "Number", 0, QApplication::UnicodeUTF8));
        rbLetter->setText(QApplication::translate("BatchDialog", "Letters", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("BatchDialog", "From", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("BatchDialog", "To", 0, QApplication::UnicodeUTF8));
        labelWildcard->setText(QApplication::translate("BatchDialog", "Wildcard size", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(0, QApplication::translate("BatchDialog", "A", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(1, QApplication::translate("BatchDialog", "B", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(2, QApplication::translate("BatchDialog", "C", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(3, QApplication::translate("BatchDialog", "D", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(4, QApplication::translate("BatchDialog", "E", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(5, QApplication::translate("BatchDialog", "F", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(6, QApplication::translate("BatchDialog", "G", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(7, QApplication::translate("BatchDialog", "H", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(8, QApplication::translate("BatchDialog", "I", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(9, QApplication::translate("BatchDialog", "J", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(10, QApplication::translate("BatchDialog", "K", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(11, QApplication::translate("BatchDialog", "L", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(12, QApplication::translate("BatchDialog", "M", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(13, QApplication::translate("BatchDialog", "N", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(14, QApplication::translate("BatchDialog", "O", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(15, QApplication::translate("BatchDialog", "P", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(16, QApplication::translate("BatchDialog", "Q", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(17, QApplication::translate("BatchDialog", "R", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(18, QApplication::translate("BatchDialog", "S", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(19, QApplication::translate("BatchDialog", "T", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(20, QApplication::translate("BatchDialog", "U", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(21, QApplication::translate("BatchDialog", "V", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(22, QApplication::translate("BatchDialog", "W", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(23, QApplication::translate("BatchDialog", "X", 0, QApplication::UnicodeUTF8));
        cbMulai->setItemText(24, QApplication::translate("BatchDialog", "Y", 0, QApplication::UnicodeUTF8));

        cbAkhir->setItemText(0, QApplication::translate("BatchDialog", "A", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(1, QApplication::translate("BatchDialog", "B", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(2, QApplication::translate("BatchDialog", "C", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(3, QApplication::translate("BatchDialog", "D", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(4, QApplication::translate("BatchDialog", "E", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(5, QApplication::translate("BatchDialog", "F", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(6, QApplication::translate("BatchDialog", "G", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(7, QApplication::translate("BatchDialog", "H", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(8, QApplication::translate("BatchDialog", "I", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(9, QApplication::translate("BatchDialog", "J", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(10, QApplication::translate("BatchDialog", "K", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(11, QApplication::translate("BatchDialog", "L", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(12, QApplication::translate("BatchDialog", "M", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(13, QApplication::translate("BatchDialog", "N", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(14, QApplication::translate("BatchDialog", "O", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(15, QApplication::translate("BatchDialog", "P", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(16, QApplication::translate("BatchDialog", "Q", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(17, QApplication::translate("BatchDialog", "R", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(18, QApplication::translate("BatchDialog", "S", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(19, QApplication::translate("BatchDialog", "T", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(20, QApplication::translate("BatchDialog", "U", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(21, QApplication::translate("BatchDialog", "V", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(22, QApplication::translate("BatchDialog", "W", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(23, QApplication::translate("BatchDialog", "X", 0, QApplication::UnicodeUTF8));
        cbAkhir->setItemText(24, QApplication::translate("BatchDialog", "Y", 0, QApplication::UnicodeUTF8));

        cbUpperCase->setText(QApplication::translate("BatchDialog", "Upper Case", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("BatchDialog", "Sample", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("BatchDialog", "First File", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("BatchDialog", "Second file", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("BatchDialog", "...", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("BatchDialog", "Last File", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BatchDialog", "Add a group of sequential file names like:\n"
"img-001.jpg, img-002.jpg,...,img-100.jpg to Q-Uma queue. \n"
"Use asterik wildcard for the name pattern.", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BatchDialog", "Url", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("BatchDialog", "Save Dir      ", 0, QApplication::UnicodeUTF8));
        pbBrowseDir->setText(QApplication::translate("BatchDialog", "...", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("BatchDialog", "Ok", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("BatchDialog", "Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BatchDialog: public Ui_BatchDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BATCHDIALOG_H
