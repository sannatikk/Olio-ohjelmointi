#include "kerros.h"
#include <iostream>
using namespace std;

Kerros::Kerros()
{
    cout << "Kerros luotu" << endl;
    as1 = new Asunto();
    as2 = new Asunto();
    as3 = new Asunto();
    as4 = new Asunto();
}

Kerros::~Kerros()
{
    // cout << "Kerros tuhottu" << endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;
}

void Kerros::maaritaAsunnot()
{
    cout << "Määritetään kerroksen asunnot (4 kpl)" << endl;

    as1->maarita(1, 50);
    as2->maarita(2, 75);
    as3->maarita(3, 80);
    as4->maarita(4, 100);
}

double Kerros::laskeKulutus(double hinta)
{
    int kulutus = 0;
    kulutus += as1->laskeKulutus(hinta);
    kulutus += as2->laskeKulutus(hinta);
    kulutus += as3->laskeKulutus(hinta);
    kulutus += as4->laskeKulutus(hinta);

    // cout << "Kerroksen kulutus, kun hinta on " << hinta << ": " << kulutus << endl;

    return kulutus;
}
