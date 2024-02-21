#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    QString number1 = "";
    QString number2  = "";
    int state = 1;
    float result;
    short operand;

    void operandHandler(int);
    void numberClickHandler(QString);

private slots:
    void on_btn1_clicked();
    void on_btn2_clicked();
    void on_btn3_clicked();
    void on_btn4_clicked();
    void on_btn5_clicked();
    void on_btn6_clicked();
    void on_btn7_clicked();
    void on_btn8_clicked();
    void on_btn9_clicked();
    void on_btn0_clicked();
    void on_btnAdd_clicked();
    void on_btnSubtract_clicked();
    void on_btnMultiply_clicked();
    void on_btnDivide_clicked();
    void on_btnEnter_clicked();
    void on_btnClear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
