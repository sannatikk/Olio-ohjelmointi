#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "lomake2.h"
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
    void on_btnTallenna_clicked();      // tämä luotu ui:n napista
    void on_btnAvaaLomake2_clicked();   // tämä luotu ui:n napista
    void slotNaytaSukunimi();           // tämä on luotu itse

private:
    Ui::MainWindow *ui;     // tämä on luotu automaattisesti, on siis pääikkunan olio!
    QString etunimi;        // muuttuja jotta voidaan käyttää laajemmin
    lomake2 *olioLomake2;   // esitellään olio muualla käyttöä varten
};
#endif // MAINWINDOW_H
