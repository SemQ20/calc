#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math_functions.h>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Math_clicked();
    void on_Logic_clicked();
    void receiveDataFromForm(QString str);

private:
    Ui::MainWindow *ui;
    math_functions *form;
};
#endif // MAINWINDOW_H
