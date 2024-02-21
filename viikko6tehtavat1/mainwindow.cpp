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

void MainWindow::on_btnPlusOne_clicked()
{
    numberCounter++;
    QString n = QString::number(numberCounter);
    ui->txtShowNumber->setText(n);
}


void MainWindow::on_btnReset_clicked()
{
    numberCounter = 0;
    QString n = QString::number(numberCounter);
    ui->txtShowNumber->setText(n);
}

