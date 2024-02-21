#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    gameTimer = new QTimer();
    ui->barPlayer1->setRange(0,100);
    ui->barPlayer1->setValue(0);
    ui->barPlayer2->setRange(0,100);
    ui->barPlayer2->setValue(0);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete gameTimer;
}

void MainWindow::updateProgressBar()
{
    // qDebug() << "Olen updateProgressBarissa";

    int bar1status = player1Time*100/gameTime;
    int bar2status = player2Time*100/gameTime;

    // qDebug() << "bar1status on";
    // qDebug() << bar1status;
    // qDebug() << "bar2status on";
    // qDebug() << bar2status;

    ui->barPlayer1->setValue(bar1status);
    ui->barPlayer2->setValue(bar2status);
}

void MainWindow::updateDisplayText(QString info)
{
    ui->lblDisplayInstructions->setText(info);
}

void MainWindow::resetTime()
{
    player1Time = 0;
    player2Time = 0;

}

void MainWindow::timeout()
{
    updateProgressBar();

    if (currentPlayer == 1) {
        player1Time++;

        qDebug() << "Player time elapsed:";
        qDebug() << player1Time;

        if (player1Time == gameTime) {
            gameTimer->stop();
            updateDisplayText("G L O R I O U S   V I C T O R Y   F O R   B L A C K");
        }
    }

    else {
        player2Time++;
        qDebug() << "Player time elapsed:";
        qDebug() << player2Time;

        if (player2Time == gameTime) {
            gameTimer->stop();
            updateDisplayText("G L O R I O U S   V I C T O R Y   F O R   W H I T E");
        }
    }

}

void MainWindow::on_btn2minutes_clicked()
{
    gameTime = 120;
    updateDisplayText("R E A D Y   T O   P L A Y :   2   M I N U T E S");
}


void MainWindow::on_btn5minutes_clicked()
{
    gameTime = 300;
    updateDisplayText("R E A D Y   T O   P L A Y :   5   M I N U T E S");
}


void MainWindow::on_btnStartGame_clicked()
{
    resetTime();
    gameTimer->start();
    currentPlayer = 1;

    updateDisplayText("G A M E   I N   P R O G R E S S");

    qDebug() << "Current player:";
    qDebug() << currentPlayer;

    connect(gameTimer, SIGNAL(timeout()), this, SLOT(timeout()));
    gameTimer->start(1000);
}


void MainWindow::on_btnStopGame_clicked()
{
    resetTime();
    updateProgressBar();
    gameTimer->stop();
    updateDisplayText("S E L E C T   P L A Y   T I M E");
}


void MainWindow::on_btnEndPlayer1Turn_clicked()
{
    currentPlayer = 2;

    qDebug() << "Current player:";
    qDebug() << currentPlayer;
}


void MainWindow::on_btnEndPlayer2Turn_clicked()
{
    currentPlayer = 1;

    qDebug() << "Current player:";
    qDebug() << currentPlayer;
}

