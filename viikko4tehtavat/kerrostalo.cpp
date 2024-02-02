#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo(int hinta)
{
    cout << "Määritellään koko kerrostalon kaikki asunnot" << endl;
    eka.maaritaAsunnot();
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();

    double kulutus = laskeKulutus(hinta);

    cout << "Koko kerrostalon kulutus: " << kulutus << endl;
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
