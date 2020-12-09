#ifndef VOLUMEWINDOW_H
#define VOLUMEWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include <QtMath>
#include "geomfigures.h"

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

private slots:
    void on_calsBtn_clicked();

private:
    Ui::VolumeWindow *ui;
};

#endif // VOLUMEWINDOW_H
