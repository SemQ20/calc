#ifndef MATH_FUNCTIONS_H
#define MATH_FUNCTIONS_H

#include <QWidget>

namespace Ui {
class math_functions;
}

class math_functions : public QWidget
{
    Q_OBJECT

public:
    explicit math_functions(QWidget *parent = nullptr);
    ~math_functions();
signals:
    void main_window_show();
private slots:
    void on_pushButton_clicked();
private:
    Ui::math_functions *ui;
};

#endif // MATH_FUNCTIONS_H
