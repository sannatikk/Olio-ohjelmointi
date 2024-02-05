#include "kerrostalo.h"
#include <iostream>
using namespace std;

int main()
{

    Kerrostalo kt;
    int hinta = 1;
    int kulutus = kt.laskeKulutus(hinta);
    cout << "Koko kerrostalon kulutus hinnalla " << hinta << ": " << kulutus << endl;

    return 0;
}
