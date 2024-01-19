#include "postilaatikko.h"

// tämä on luokan toteutus!

postilaatikko::postilaatikko()
{
    cout << "Luodaan postilaatikko..." << endl;
    maara = 0;
    cout << "Laatikossa on " << maara << "kpl postia!";
}

string postilaatikko::getOsoite() const
{
    return osoite;
}

void postilaatikko::setOsoite(const string &newOsoite)
{
    osoite = newOsoite;
}

void postilaatikko::lisaaPosti(int kpl)       // täytyy määritellä luokan jäsenfunktioksi
{
    cout << "Lisätään " << kpl << " kpl postia..." << endl;
    maara = kpl;
    cout << "Laatikossa on " << maara << " kpl postia!" << endl;
}

void postilaatikko::otaPosti(int kpl)
{
    cout << "Ollaan otaPostissa..." << endl;
    cout << "Otetaan " << kpl << " kpl postia..." << endl;
    maara = maara - kpl;
    cout << "Laatikossa on " << maara << " kpl postia!" << endl;
}

void postilaatikko::asetaNimi(string n)
{
    cout << "Ollaan asetaNimessä..." << endl;
}
