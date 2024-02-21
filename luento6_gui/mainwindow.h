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

private slots:
    void on_btnTestinappi_clicked();

    void on_btnTallenna_clicked();

    void on_btnAvaaSeuraava_clicked();

private:
    Ui::MainWindow *ui;         // tehdään pointteriolio (objekti) mainwindow-luokasta --> koosteolio
    int painallustenMaara = 0;  // luodaan muuttuja napinpainallusten kirjanpitoa varten
    QString etunimi;            // muuttuja etunimeä varten
    QString sukunimi;
};
#endif // MAINWINDOW_H
