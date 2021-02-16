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
    connect(ui->lineEdit, &QLineEdit::textChanged, this, &MainWindow::changed_text_from_line_edit);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changed_text_from_line_edit(QString str){

}

void MainWindow::on_Math_clicked()
{
    form->show();
}

void MainWindow::on_Logic_clicked()
{
    ui->lineEdit->textChanged(ui->lineEdit->text());
}

void MainWindow::receiveDataFromForm(QString str){
    ui->lineEdit->setText(str);
}

