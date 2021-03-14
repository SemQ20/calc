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

void MainWindow::changed_text_from_line_edit(const QString& str){
    std::remove_const<const QString>::type tmp(str);
    QString result;
    for(int i = 0; i <= tmp.size()-1; i++){
        if(check_line_edit_param(tmp[i])){
        }else{
            result += tmp[i];
        }
    }
    ui->lineEdit->setText(result);
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

bool MainWindow::check_line_edit_param(QCharRef str){
    if((str >= 'a' && str <= 'z') || (str >= 'A' && str <= '/')){
        return true;
    }
    return false;
}

void MainWindow::on_Mhz_freq_btn_clicked()
{
   float freq = 1/ ui->lineEdit->text().toFloat();
   ui->lineEdit->setText(QString::fromStdString(std::to_string(freq)));
}

void MainWindow::on_clear_btn_clicked()
{
    ui->lineEdit->setText("0");
}

void MainWindow::on_backspace_clicked()
{
    std::string tmp {ui->lineEdit->text().toStdString()};
    tmp.pop_back();
    ui->lineEdit->setText(QString::fromStdString(tmp));
}

void MainWindow::on_btn_number_1_clicked()
{
    if(ui->lineEdit->text() == "0"){
        ui->lineEdit->setText("1");
    }else{
        ui->lineEdit->setText(ui->lineEdit->text() + "1");
    }
}

void MainWindow::on_btn_number_2_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "2");
}

void MainWindow::on_btn_number_3_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "3");
}

void MainWindow::on_btn_number_4_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "4");
}

void MainWindow::on_btn_number_5_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "5");
}

void MainWindow::on_btn_number_6_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "6");
}

void MainWindow::on_btn_number_7_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "7");
}

void MainWindow::on_btn_number_8_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "8");
}

void MainWindow::on_btn_number_9_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "9");
}

void MainWindow::on_btn_number_0_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + "0");
}

void MainWindow::on_point_btn_clicked()
{
    ui->lineEdit->setText(ui->lineEdit->text() + ".");
}

void MainWindow::on_pos_neg_btn_clicked()
{
    QString minus = "-";
    int tmp = ui->lineEdit->text().toInt();
    if(tmp < 0){
        tmp = std::abs(tmp);
        ui->lineEdit->setText(QString::fromStdString(std::to_string(tmp)));
    }else{
        ui->lineEdit->setText(minus + ui->lineEdit->text());
    }
}


