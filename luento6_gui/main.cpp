#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;   // luodaan mainwindow-luokan olio w
    w.show();       // kutsutaan metodia show, show saa aikaan sen että ikkuna avautuu
    return a.exec();
}
