#ifndef AREAWINDOW_H
#define AREAWINDOW_H

#include <QDialog>
#include <QMessageBox>
#include "fileio.h"

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
    double result;

private slots:
    void on_calcBtn_clicked();

    void on_readFromFileBtn_clicked();

private:
    Ui::AreaWindow *ui;
    FileIO* fileIO;
};

#endif // AREAWINDOW_H
