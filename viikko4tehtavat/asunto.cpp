#include "asunto.h"
#include <iostream>
using namespace std;

Asunto::Asunto()
{
    cout << "Asunto luotu" << endl;
}

Asunto::~Asunto()
{
    // cout << "Asunto tuhottu" << endl;
}

void Asunto::maarita(int asukkaat, int koko)
{
    asukasMaara = asukkaat;
    neliot = koko;

    cout << "Asunto määritetty: " << asukasMaara << " asukasta, " << neliot << " neliötä" << endl;
}

double Asunto::laskeKulutus(double hintaPerNelio)
{
    int hinta = hintaPerNelio;
    int kulutus = hinta * asukasMaara * neliot;
    // cout << "Asunnon kulutus laskettu, hinta: " << kulutus << endl;
    return kulutus;
}
