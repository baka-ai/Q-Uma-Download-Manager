/********************************************************************************
** Form generated from reading UI file 'dialognew.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGNEW_H
#define UI_DIALOGNEW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>

QT_BEGIN_NAMESPACE

class Ui_DialogNew
{
public:
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *leAddress;
    QPushButton *pbOk;
    QGroupBox *gbUse;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *leUsername;
    QLabel *label_3;
    QLineEdit *lePass;
    QPushButton *pbCancel;
    QSpacerItem *verticalSpacer;

    void setupUi(QDialog *DialogNew)
    {
        if (DialogNew->objectName().isEmpty())
            DialogNew->setObjectName(QString::fromUtf8("DialogNew"));
        DialogNew->resize(640, 127);
        gridLayout = new QGridLayout(DialogNew);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(DialogNew);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        leAddress = new QLineEdit(DialogNew);
        leAddress->setObjectName(QString::fromUtf8("leAddress"));

        gridLayout->addWidget(leAddress, 0, 1, 1, 1);

        pbOk = new QPushButton(DialogNew);
        pbOk->setObjectName(QString::fromUtf8("pbOk"));
        pbOk->setMinimumSize(QSize(100, 0));

        gridLayout->addWidget(pbOk, 0, 2, 1, 1);

        gbUse = new QGroupBox(DialogNew);
        gbUse->setObjectName(QString::fromUtf8("gbUse"));
        gbUse->setCheckable(true);
        gbUse->setChecked(false);
        horizontalLayout = new QHBoxLayout(gbUse);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(gbUse);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        leUsername = new QLineEdit(gbUse);
        leUsername->setObjectName(QString::fromUtf8("leUsername"));

        horizontalLayout->addWidget(leUsername);

        label_3 = new QLabel(gbUse);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        lePass = new QLineEdit(gbUse);
        lePass->setObjectName(QString::fromUtf8("lePass"));

        horizontalLayout->addWidget(lePass);


        gridLayout->addWidget(gbUse, 1, 0, 2, 2);

        pbCancel = new QPushButton(DialogNew);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        gridLayout->addWidget(pbCancel, 1, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 26, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 2, 1, 1);


        retranslateUi(DialogNew);

        QMetaObject::connectSlotsByName(DialogNew);
    } // setupUi

    void retranslateUi(QDialog *DialogNew)
    {
        DialogNew->setWindowTitle(QApplication::translate("DialogNew", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogNew", "Address", 0, QApplication::UnicodeUTF8));
        pbOk->setText(QApplication::translate("DialogNew", "&Ok", 0, QApplication::UnicodeUTF8));
        gbUse->setTitle(QApplication::translate("DialogNew", "Use Authentication", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("DialogNew", "Username", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("DialogNew", "Password", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("DialogNew", "&Cancel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogNew: public Ui_DialogNew {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGNEW_H
