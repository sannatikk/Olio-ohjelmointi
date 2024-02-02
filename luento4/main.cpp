/*
 * Olioiden välisten yhteistyön eri muotoja:
 *
 * ASSOCIATION = esim oliolle A annetaan funktion parametrina kopio oliosta B. Eli olio A käyttää oliota B, mutta B elää omaa elämäänsä
 * Esim open mittari-ohjelmassa ldc- ja lämpötilasensori-oliot ovat jäsenenä mittari-oliota --> koosteolio
 * Oliolla A siis voidaan ohjata itsenäistä oliota B
 *
 * AGGREGATION = esim oliolle A annetaan funktion parametrina viittaus=referenssi olioon B,
 * jolloin A:lla on mahdollisuus muuttaa B:tä, mutta edelleen B on luotu itsenäisesti eikä A liity mitenkään tuohon luontiin
 *
 * COMPOSITION = A luo olion B, eli kun A tuhoutuu, tuhoutuu myös B
 *
 */


#include "a.h"
#include "b.h"
#include <iostream>

using namespace std;

int main()
{
    // viittausmuuttujien toimintaperiaate:

    int vastaus = 42;
    int &v_vastaus = vastaus;   // tämä on viittaus "lempinimi" vastaukselle, huom &-merkki

    cout << vastaus << endl;    // tulostaa 42
    cout << v_vastaus << endl;  // tulostaa 42

    v_vastaus = 91;             // koska tämä on viittaus, muuttuu alkuperäinen arvo myös
    cout << vastaus << endl;    // tulostaa 91

    /* myös oliot voivat olla viittauksia, esimerkki headertiedostossa:
    esim olio on luotu main.cpp:ssä ja sit niihen viitataan toisessa h-filussa

    viittaus voi olla myös parametri esim konstruktorissa, KATSO VIITTAUSMITTARI-ESIMERKKIKOODI
    muista sitä tehdessä, että if applicable niin parent class -> child class järjestyksessä parametrit
    */

    A a_olio;                // ei paramatriä, default konstruktori
    A a_para_olio(42);       // jos tässä ei olisi parametria, kutsuisi default konstruktoria

    B b_olio;                // koska lisättiin b:n perintään a:n parametrillinen konstruktori, se käyttää nyt sitä
    B b_para_olio(19);       // nyt koska annettiin eksplisiittisesti parametri, käyttää b:n parametrillista

    return 0;
}
