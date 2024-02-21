// tämä tiedosto käynnistää itse sovelluksen

#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;       // luokan olio
    w.show();           // kutsutaan showta
    return a.exec();    // käynnistetään sanomajono
}
