#ifndef AREAWINDOW_H
#define AREAWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "geomfigures.h"

namespace Ui {
class AreaWindow;
}

class AreaWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AreaWindow(QWidget *parent = nullptr);
    ~AreaWindow();

    void setData(QString str);
    QString figureName;

private slots:
    void on_calcBtn_clicked();

private:
    Ui::AreaWindow *ui;
};

#endif // AREAWINDOW_H
