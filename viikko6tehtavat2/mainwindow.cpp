#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::operandHandler(int n)
{
    state = 2;
    operand = n;
}

void MainWindow::numberClickHandler(QString n)
{
    if (state==1) {

        number1 += n;
        ui->txtNumber1->setText(number1);
    }

    else if (state==2) {

        number2 += n;
        ui->txtNumber2->setText(number2);
    }

}

void MainWindow::on_btn1_clicked()
{
    numberClickHandler("1");
}


void MainWindow::on_btn2_clicked()
{
    numberClickHandler("2");
}


void MainWindow::on_btn3_clicked()
{
    numberClickHandler("3");
}


void MainWindow::on_btn4_clicked()
{
    numberClickHandler("4");
}


void MainWindow::on_btn5_clicked()
{
    numberClickHandler("5");
}


void MainWindow::on_btn6_clicked()
{
    numberClickHandler("6");
}


void MainWindow::on_btn7_clicked()
{
    numberClickHandler("7");
}


void MainWindow::on_btn8_clicked()
{
    numberClickHandler("8");
}


void MainWindow::on_btn9_clicked()
{
    numberClickHandler("9");
}


void MainWindow::on_btn0_clicked()
{
    numberClickHandler("0");
}


void MainWindow::on_btnAdd_clicked()
{
    operandHandler(0);
}


void MainWindow::on_btnSubtract_clicked()
{
    operandHandler(1);
}


void MainWindow::on_btnMultiply_clicked()
{
    operandHandler(2);
}


void MainWindow::on_btnDivide_clicked()
{
    operandHandler(3);
}


void MainWindow::on_btnEnter_clicked()
{
    state = 1;
    float num1 = number1.toFloat();
    float num2 = number2.toFloat();

    if (operand==0) {
        result = num1+num2;
    }
    else if (operand==1) {
        result = num1-num2;
    }
    else if (operand==2) {
        result = num1*num2;
    }
    else if (operand==3) {
        result = num1/num2;
    }

    QString res;

    if (result-(int)result == 0) {
        res = QString::number(result, 'f', 0);

    }
    else {
        res = QString::number(result, 'f', 2);
    }

    ui->txtResult->setText(res);
}


void MainWindow::on_btnClear_clicked()
{
    number1 = "";
    number2 = "";
    state = 1;
    ui->txtResult->setText("");
    ui->txtNumber1->setText("");
    ui->txtNumber2->setText("");
}

