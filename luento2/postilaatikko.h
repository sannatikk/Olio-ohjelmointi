#ifndef POSTILAATIKKO_H
#define POSTILAATIKKO_H

// muista listä!
#include <iostream>                 // tämän avulla voin lisätä std:n
using namespace std;

// Tämä on luokan kuvaus!! -> kertoo, mitä luokka sisältää

class postilaatikko
{
public:                             // tämä kertoo, että kaikki tähän kuuluvat ovat julkisia tietoja
    postilaatikko();                // automaattinen jäsenfunktio konstruktori, automaattinen alustusfunktio oliolle

    // seuraavat lisään itse
    // määrittele muuttujat ja alusta funktiot

    string nimi;
    string osoite;

    void lisaaPosti(int kpl);     // kuinka paljon postia lisään?
    void otaPosti(int kpl);       // kuinka paljon postia otan?
    void asetaNimi(string n);    // nimi postilaatikkoon

    // --> syntaksi tavallinen funktio
    // oikeaklikkaa funktion nimeä, refactor-->cpp, lisää automaattisesti cpp-tiedostoon

    string getOsoite() const;
    void setOsoite(const string &newOsoite);

private:                            // lisään nämä itse koska kaiken tiedon ei tarvitse olla julkista
    int maara;
};

#endif // POSTILAATIKKO_H
