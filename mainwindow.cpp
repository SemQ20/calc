#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    form = new math_functions();
    connect(form, &math_functions::main_window_show, this, &MainWindow::show);
    connect(form, &math_functions::sendData, this, &MainWindow::receiveDataFromForm);
    ui->widget->hide();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Math_clicked()
{
    form->show();
}
void MainWindow::on_Logic_clicked()
{
    ui->widget->show();
}

void MainWindow::receiveDataFromForm(QString str){
    ui->lineEdit->setText(str);
}
