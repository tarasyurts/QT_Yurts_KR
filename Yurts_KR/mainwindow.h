#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

private slots:
    void on_submitBtn_clicked();
    void on_actionExit_triggered();
    void on_actionTriangle_triggered();
    void on_actionPrism_triggered();
    void on_actionCone_triggered();
    void on_actionRectangle_triggered();
};
#endif // MAINWINDOW_H
