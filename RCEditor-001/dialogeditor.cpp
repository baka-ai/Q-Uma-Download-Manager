#include "dialogeditor.h"
#include <QtGui>
#include "textedit.h"
#include "wgetrchelp.h"


DialogEditor::DialogEditor(QWidget *parent) :
    QWidget(parent)
{
    fileRC = QDir::homePath().append("/.wgetrc");
    completingTextEdit = new TextEdit;
    completer = new QCompleter(this);
    completer->setModel(modelFromFile(":/resources/wordlist"));
    completer->setModelSorting(QCompleter::CaseInsensitivelySortedModel);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    completer->setWrapAround(false);
    completingTextEdit->setCompleter(completer);

    highlighter = new Highlighter(completingTextEdit->document());


//    pbBackup = new QPushButton(tr("Backup"));
    WgetRCHelp *whlp = new WgetRCHelp;
    QPushButton *pbHelp = new QPushButton("?");
    pbHelp->setFixedWidth(30);
    connect(pbHelp,SIGNAL(clicked()),whlp,SLOT(show()));

    pbClear     = new QPushButton(tr("Clear"));
    connect(pbClear,SIGNAL(clicked()),this,SLOT(clearText()));

    pbClose     = new QPushButton(tr("Close"));
    connect(pbClose,SIGNAL(clicked()),this,SLOT(closeDialog()));

    pbSave      = new QPushButton(tr("Save"));
    connect(pbSave,SIGNAL(clicked()),this,SLOT(saveRC()));


    QVBoxLayout *llt = new QVBoxLayout;
    QHBoxLayout *blt = new QHBoxLayout;

    blt->addWidget(pbHelp);
    blt->addWidget(pbClear);
    blt->addStretch(50);
    blt->addWidget(pbSave);
    blt->addWidget(pbClose);

    llt->addWidget(completingTextEdit);
    llt->addLayout(blt);
    setLayout(llt);
    resize(400,300);
}

QAbstractItemModel *DialogEditor::modelFromFile(const QString& fileName)
{
    QFile file(fileName);
    if (!file.open(QFile::ReadOnly))
        return new QStringListModel(completer);

#ifndef QT_NO_CURSOR
    QApplication::setOverrideCursor(QCursor(Qt::WaitCursor));
#endif
    QStringList words;

    while (!file.atEnd()) {
        QByteArray line = file.readLine();
        if (!line.isEmpty())
            words << line.trimmed();
    }

#ifndef QT_NO_CURSOR
    QApplication::restoreOverrideCursor();
#endif
    return new QStringListModel(words, completer);
}


void DialogEditor::clearText() {
    if(completingTextEdit->toPlainText().isEmpty())
        return;

    if(QMessageBox::question(this,
                             tr("Clear"),
                             tr("Are you sure to clear it?"),
                             QMessageBox::Ok |
                             QMessageBox::Cancel) == QMessageBox::Ok) {
        completingTextEdit->clear();
    } else {
        return;
    }
}

void DialogEditor::backUp() {
    QFile ff(fileRC);
    QString realRC;
    if(ff.open(QIODevice::ReadOnly | QIODevice::Text)) {
        realRC = ff.readAll();
    }
    ff.close();
    QString bakRC = fileRC;
    bakRC.append(".bak");
    QFile fs(bakRC);
    if(fs.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&fs);
        out << realRC;
    }
    fs.close();
}

void DialogEditor::saveRC() {
    backUp();
    QString headerku;
//    headerku = "########################################################" +
//               "# Created with Q-Uma Download Manager                  #" +
//               "########################################################"
//               "# last edit: " + QDateTime::currentDateTime().toString(Qt::ISODate) +
//               "########################################################";
    QString rcEdit = completingTextEdit->toPlainText();

    QFile fs(fileRC);
    if(fs.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&fs);
        out << rcEdit;
        fs.close();
    } else {
        QMessageBox::critical(this,tr("Warning!"),tr("Cannot save to: //HOME_PATH/.wgetrc"));
        return;
    }
}

void DialogEditor::closeDialog() {
    QFile ff(fileRC);
    if(ff.open(QIODevice::ReadOnly | QIODevice::Text)) {
        if(ff.readAll() == completingTextEdit->toPlainText()) {
            close();
            ff.close();
            return;
        }
    }
    switch(QMessageBox::question(this,
                             tr("Save"),
                             tr("Save config?"),
                             QMessageBox::Ok | QMessageBox::No |
                             QMessageBox::Cancel)) {
        case QMessageBox::No:
            close();
            break;
        case QMessageBox::Ok:
            saveRC();
            close();
            break;
        default:
            return;
            break;
    }
}
