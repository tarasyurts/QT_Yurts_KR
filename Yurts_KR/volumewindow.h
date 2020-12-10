#ifndef VOLUMEWINDOW_H
#define VOLUMEWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "fileio.h"
#include <QtMath>

namespace Ui {
class VolumeWindow;
}

class VolumeWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VolumeWindow(QWidget *parent = nullptr);
    ~VolumeWindow();

    void setData(QString str);
    QString figureName;
    double result;

private slots:
    void on_calsBtn_clicked();

    void on_readFromFileBtn_clicked();

private:
    Ui::VolumeWindow *ui;
    FileIO* fileIO;
};

#endif // VOLUMEWINDOW_H
