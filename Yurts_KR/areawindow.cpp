#include "areawindow.h"
#include "ui_areawindow.h"

AreaWindow::AreaWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AreaWindow)
{
    ui->setupUi(this);
    fileIO = new FileIO();
}

AreaWindow::~AreaWindow()
{
    delete ui;
}
void AreaWindow::setData(QString str){
    ui->figureName->setText(str);
    figureName = str;
    if(str == "Triangle"){
        ui->firstParamLabel->setText("Основа");
        ui->secondParamLabel->setText("Висота");
    }else if(str == "Rectangle"){
        ui->firstParamLabel->setText("Сторона");
        ui->secondParamLabel->setText("Сторона");
    }
}

void AreaWindow::on_calcBtn_clicked()
{


    if(figureName == "Rectangle")
        result = ui->firSpinBox->value() * ui->secSpinBox->value();
    else if(figureName == "Triangle")
        result = 0.5 * ui->firSpinBox->value() * ui->secSpinBox->value();


    QString message = "Результат = " + QString::number(result) +  " .Зберегти результут у файл?";

    QMessageBox::StandardButton reply = QMessageBox::question(this, "Result", message,
                                    QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes)
        fileIO->saveResultToFile(this, result);
}

void AreaWindow::on_readFromFileBtn_clicked()
{
    auto fields = fileIO->readFieldsFromFile(this);
    ui->firSpinBox->setValue(fields.at(0));
    ui->secSpinBox->setValue(fields.at(1));
}
