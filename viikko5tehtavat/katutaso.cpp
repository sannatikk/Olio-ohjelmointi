#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    as1 = new Asunto();
    as2 = new Asunto();

    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    delete as1;
    delete as2;
    // cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Määritetään katutason asunnot (2 kpl)" << endl;
    as1->maarita(3, 70);
    as2->maarita(3, 85);
}

double Katutaso::laskeKulutus(double hinta)
{
    int katutasonKulutus = 0;
    katutasonKulutus += as1->laskeKulutus(hinta);
    katutasonKulutus += as2->laskeKulutus(hinta);

    // cout << "Katutason kulutus yhteensä: " << katutasonKulutus << endl;

    return katutasonKulutus;

}
