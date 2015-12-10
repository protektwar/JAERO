#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include <QVector>
#include "../audiomskmodulator.h"
#include "../downloadmanager.h"

namespace Ui {
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget *parent = 0);
    ~SettingsDialog();
    void populatesettings();

    QString Preamble;
    QString Preamble1;
    QString Preamble2;
    QString Postamble;
    AudioMskModulator::Settings audiomskmodulatorsettings;

    QAudioDeviceInfo audioinputdevice;
    QVector<int> donotdisplaysus;
    bool dropnontextmsgs;
    QString msgdisplayformat;
    bool loggingenable;
    QString loggingdirectory;
    bool widebandwidthenable;

    QString planesfolder;
    QString planelookup;

private:
    Ui::SettingsDialog *ui;    
    void poulatepublicvars();

protected:
    void accept();

private slots:

    void on_lineEditlogdir_editingFinished();
    void on_lineEditplanesfolder_editingFinished();
    void on_pushButtonDownloadDB_clicked();
};

#endif // SETTINGSDIALOG_H
