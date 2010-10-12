/********************************************************************************
** Form generated from reading UI file 'dialogimport.ui'
**
** Created: Tue 12. Oct 18:48:12 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGIMPORT_H
#define UI_DIALOGIMPORT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStackedWidget>
#include <QtGui/QToolButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogImport
{
public:
    QVBoxLayout *verticalLayout;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *comboBox;
    QWidget *page_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leSaveTo;
    QToolButton *tbBrowse;
    QHBoxLayout *horizontalLayout;
    QPushButton *pbCancel;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbBack;
    QPushButton *pbNext;

    void setupUi(QDialog *DialogImport)
    {
        if (DialogImport->objectName().isEmpty())
            DialogImport->setObjectName(QString::fromUtf8("DialogImport"));
        DialogImport->resize(400, 87);
        verticalLayout = new QVBoxLayout(DialogImport);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        stackedWidget = new QStackedWidget(DialogImport);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        horizontalLayout_3 = new QHBoxLayout(page);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        comboBox = new QComboBox(page);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        horizontalLayout_3->addWidget(comboBox);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        horizontalLayout_2 = new QHBoxLayout(page_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        leSaveTo = new QLineEdit(page_2);
        leSaveTo->setObjectName(QString::fromUtf8("leSaveTo"));

        horizontalLayout_2->addWidget(leSaveTo);

        tbBrowse = new QToolButton(page_2);
        tbBrowse->setObjectName(QString::fromUtf8("tbBrowse"));

        horizontalLayout_2->addWidget(tbBrowse);

        stackedWidget->addWidget(page_2);

        verticalLayout->addWidget(stackedWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pbCancel = new QPushButton(DialogImport);
        pbCancel->setObjectName(QString::fromUtf8("pbCancel"));

        horizontalLayout->addWidget(pbCancel);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pbBack = new QPushButton(DialogImport);
        pbBack->setObjectName(QString::fromUtf8("pbBack"));

        horizontalLayout->addWidget(pbBack);

        pbNext = new QPushButton(DialogImport);
        pbNext->setObjectName(QString::fromUtf8("pbNext"));

        horizontalLayout->addWidget(pbNext);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DialogImport);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DialogImport);
    } // setupUi

    void retranslateUi(QDialog *DialogImport)
    {
        DialogImport->setWindowTitle(QApplication::translate("DialogImport", "Dialog", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogImport", "Import as", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("DialogImport", "Text File", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogImport", "HTML File", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogImport", "Batch Project", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("DialogImport", "Save all Files to", 0, QApplication::UnicodeUTF8));
        tbBrowse->setText(QApplication::translate("DialogImport", "...", 0, QApplication::UnicodeUTF8));
        pbCancel->setText(QApplication::translate("DialogImport", "&Cancel", 0, QApplication::UnicodeUTF8));
        pbBack->setText(QApplication::translate("DialogImport", "&Back", 0, QApplication::UnicodeUTF8));
        pbNext->setText(QApplication::translate("DialogImport", "&Next", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogImport: public Ui_DialogImport {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGIMPORT_H
