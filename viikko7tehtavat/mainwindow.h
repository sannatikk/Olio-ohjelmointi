#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>
#include <QProgressBar>

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
    short player1Time = 0;
    short player2Time = 0;
    short gameTime;
    short currentPlayer;
    QTimer *gameTimer;
    void updateProgressBar();
    void updateDisplayText(QString);
    void resetTime();

public slots:
    void timeout();

private slots:
    void on_btn2minutes_clicked();
    void on_btn5minutes_clicked();
    void on_btnStartGame_clicked();
    void on_btnStopGame_clicked();
    void on_btnEndPlayer1Turn_clicked();
    void on_btnEndPlayer2Turn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
