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

    if(ui->triangleAreaRB->isChecked()){
        on_actionTriangle_triggered();
        return;
    }
    else if(ui->rectAreaRB->isChecked()){
        on_actionRectangle_triggered();
        return;
    }
    if(ui->prismVolumeRB->isChecked()){
        on_actionPrism_triggered();
        return;
    }
    else if(ui->coneVolumeRB->isChecked()){
        on_actionCone_triggered();
        return;
    }

}

void MainWindow::on_actionExit_triggered()
{
    QApplication::quit();
}

void MainWindow::on_actionTriangle_triggered()
{
    AreaWindow newAreaW;
    newAreaW.setData("Triangle");
    newAreaW.setModal(true);
    newAreaW.exec();
}

void MainWindow::on_actionPrism_triggered()
{
    VolumeWindow newVolumeW;
    newVolumeW.setData("Prism");
    newVolumeW.setModal(true);
    newVolumeW.exec();
}


void MainWindow::on_actionCone_triggered()
{
    VolumeWindow newVolumeW;
    newVolumeW.setData("Cone");
    newVolumeW.setModal(true);
    newVolumeW.exec();
}

void MainWindow::on_actionRectangle_triggered()
{
    AreaWindow newAreaW;
    newAreaW.setData("Rectangle");
    newAreaW.setModal(true);
    newAreaW.exec();
}
