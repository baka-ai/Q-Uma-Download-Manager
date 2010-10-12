#ifndef DIALOGEDITOR_H
#define DIALOGEDITOR_H

#include <QWidget>
#include "highlighter.h"

QT_BEGIN_NAMESPACE
class QAbstractItemModel;
class QComboBox;
class QCompleter;
class QLabel;
class QLineEdit;
class QProgressBar;
class QPushButton;
QT_END_NAMESPACE
class TextEdit;



class DialogEditor : public QWidget
{
Q_OBJECT
public:
    DialogEditor(QWidget *parent = 0);

private:
    QAbstractItemModel *modelFromFile(const QString& fileName);

    QCompleter *completer;
    TextEdit *completingTextEdit;
    Highlighter *highlighter;
    QPushButton *pbSave;
    QPushButton *pbClose;
    QPushButton *pbBackup;
    QPushButton *pbClear;
    QString fileRC;

private slots:
    void clearText();
    void backUp();
    void saveRC();
    void closeDialog();

};

#endif // DIALOGEDITOR_H
