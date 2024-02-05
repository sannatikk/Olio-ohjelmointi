#include "katutaso.h"
#include "kerros.h"
#include <iostream>
using namespace std;

Katutaso::Katutaso()
{
    cout << "Katutaso luotu" << endl;
}

Katutaso::~Katutaso()
{
    // cout << "Katutaso tuhottu" << endl;
}

void Katutaso::maaritaAsunnot()
{
    cout << "Määritetään katutason asunnot (2 kpl)" << endl;
    as1.maarita(3, 70);
    as2.maarita(3, 85);

    cout << "Määritetään katutason kerrokselta perittyjä asuntoja:" << endl;
    Kerros::maaritaAsunnot();
}

double Katutaso::laskeKulutus(double hinta)
{
    int katutasonKulutus = 0;
    katutasonKulutus += as1.laskeKulutus(hinta);
    katutasonKulutus += as2.laskeKulutus(hinta);

    // cout << "Katutason kulutus yhteensä: " << katutasonKulutus << endl;

    int kerroksenKulutus = 0;
    kerroksenKulutus = Kerros::laskeKulutus(hinta);

    int kulutusYhteensa = katutasonKulutus + kerroksenKulutus;

    // cout << "Katutason ja perityn kerroksen kulutus yhteensä: " << kulutusYhteensa << endl;

    return kulutusYhteensa;

}
