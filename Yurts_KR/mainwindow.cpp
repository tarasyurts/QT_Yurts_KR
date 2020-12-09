#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "areawindow.h"
#include "volumewindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_submitBtn_clicked()
{
    AreaWindow newAreaW;
    if(ui->triangleAreaRB->isChecked()){
        newAreaW.setData("Triangle");
        newAreaW.setModal(true);
        newAreaW.exec();
        return;
    }
    else if(ui->rectAreaRB->isChecked()){
        newAreaW.setData("Rectangle");
        newAreaW.setModal(true);
        newAreaW.exec();
        return;
    }

    VolumeWindow newVolumeW;
    if(ui->prismVolumeRB->isChecked()){
        newVolumeW.setData("Prism");
        newVolumeW.setModal(true);
        newVolumeW.exec();
        return;
    }
    else if(ui->coneVolumeRB->isChecked()){
        newVolumeW.setData("Cone");
        newVolumeW.setModal(true);
        newVolumeW.exec();
        return;
    }



}
