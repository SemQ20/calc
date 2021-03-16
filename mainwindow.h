#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <math_functions.h>
#include <QString>
#include <string>
#include <cmath>
#include <type_traits>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
// constants

constexpr const double milli        = 1.0/1000;
constexpr const double micro        = 1.0/1000000;
constexpr const double nano         = 1.0/1000000000;
constexpr const double pico         = 1.0/1000000000000;
constexpr const int    mil          = 1000000;
constexpr const int    thousand     = 1000;
constexpr const int    handred      = 100;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool check_line_edit_param(QCharRef);
private slots:
    void on_Math_clicked();
    void on_Logic_clicked();
    void receiveDataFromForm(QString str);
    void changed_text_from_line_edit(const QString&);
    void on_Mhz_freq_btn_clicked();
    void on_clear_btn_clicked();
    void on_backspace_clicked();
    void on_btn_number_1_clicked();
    void on_btn_number_2_clicked();
    void on_btn_number_3_clicked();
    void on_btn_number_4_clicked();
    void on_btn_number_5_clicked();
    void on_btn_number_6_clicked();
    void on_btn_number_7_clicked();
    void on_btn_number_8_clicked();
    void on_btn_number_9_clicked();
    void on_btn_number_0_clicked();
    void on_point_btn_clicked();
    void on_pos_neg_btn_clicked();
    void ns_measure();
signals:

private:
    Ui::MainWindow *ui;
    math_functions *form;
};
#endif // MAINWINDOW_H
