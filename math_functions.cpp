#include "math_functions.h"
#include "ui_math_functions.h"

math_functions::math_functions(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::math_functions)
{
    ui->setupUi(this);
}

math_functions::~math_functions()
{
    delete ui;
}


void math_functions::on_pushButton_clicked(){
    this->close();
    emit main_window_show();
}

void math_functions::on_pushButton_2_clicked(){
    emit sendData("test");
    this->close();
}
