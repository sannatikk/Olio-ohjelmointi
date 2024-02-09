#include "kerrostalo.h"
#include <iostream>
using namespace std;

Kerrostalo::Kerrostalo()
{
    eka = new Katutaso();
    toka = new Kerros();
    kolmas = new Kerros();

    cout << "Määritellään koko kerrostalon kaikki asunnot" << endl;
    eka->maaritaAsunnot();
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo() {

    delete eka;
    delete toka;
    delete kolmas;

    cout << "Kerrostalo tuhottu" << endl;
}

double Kerrostalo::laskeKulutus(double hinta)
{
    double katutasonKulutus = eka->laskeKulutus(hinta);
    double k2Kulutus = toka->laskeKulutus(hinta);
    double k3Kulutus = kolmas->laskeKulutus(hinta);

    int kokoTalonKulutus = katutasonKulutus + k2Kulutus + k3Kulutus;
    return kokoTalonKulutus;
}
