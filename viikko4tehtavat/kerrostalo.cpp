#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    cout << "Määritellään koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka.laskeKulutus(hinta);
    double k2Kulutus = toka.laskeKulutus(hinta);
    double k3Kulutus = kolmas.laskeKulutus(hinta);

    int kokoTalonKulutus = katutasonKulutus + k2Kulutus + k3Kulutus;
    return kokoTalonKulutus;
}
