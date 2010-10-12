#ifndef DIALOGSITEGRABBER_H
#define DIALOGSITEGRABBER_H

#include <QDialog>

namespace Ui {
    class DialogSiteGrabber;
}

class DialogSiteGrabber : public QDialog {
    Q_OBJECT
public:
    DialogSiteGrabber(QWidget *parent = 0);
    ~DialogSiteGrabber();

public slots:
    void next();
    void back();
    void run();
    void cancel();
    void addFilter();
    void browse();
    void pageChanged(int page);
    void typeChanged(int type);
    void lePNameChanged(QString s);
    void lePDirChanged(QString s);
    void lePURLChanged(QString s);
    void leFTPURLChanged(QString s);

signals:
    void runProject(QString name, QString dir, QString url, QStringList opt);

protected:
    void changeEvent(QEvent *e);

private:
    Ui::DialogSiteGrabber *ui;
    void loadConfig();
    bool ftp;

    QString projectName;    // project name
    QString projectDir;     // Project save dir
    QString projectURL;     // Project URL
    int projectType;        // type project
    bool mirror;            // use mirror Rule          -m | --mirror
    int level;              // recursive level depth    -l | --level=NUMBER
    bool convLinks;         // convert Link             -k | --convert-links
    bool crtBackup;         // Create backup Converted  -K | --backup-converted
    bool fFTP;              // follow FTP               --follow-ftp
    bool fRelOnly;          // follow relative          -L | --relative
    bool noParent;          // No Parent                -np | --no-parent
    bool retSymLnk;         // FTP|Retrieve Sym link    --retr-symlinks
    bool useAcc;            // Use FTP account
    QString uname;          //                          --ftp-user=USER
    QString upass;          //                          --ftp-password=PASS
    QString accList;        // Accept List              -A | --accept=LIST
    QString rjjList;        // Reject List              -R | --reject=LIST
};

#endif // DIALOGSITEGRABBER_H
