// risuaita == esikääntäjälle käsky
// iostream on pääkirjasto
#include <iostream>

#include <ctime>

// otetaan käyttöön standardi namespace
using namespace std;

// luodaan funktio
int tulosta(string teksti)
{
    cout << teksti << endl;
    return 2;
}

// tämä toimii samalla tavalla kuin c:llä
float keskiarvo(void)
{
    float taulukko[5] = {1.5, 2, 3, 4.81, 5};
    float keskiarvo = 0;
    for (int i=0; i<5; i++) {
        keskiarvo = keskiarvo + taulukko[i]; }
    keskiarvo = keskiarvo/5.0;
    return keskiarvo;
}

int main()
{

    // samoja muuttujatyyppejä kuin c:ssä
    int kokonaisluku = 32;
    float liukuluku = 1.25;
    double iso_liukuluku = 1.23;
    char merkki = 'a';
    string merkkijono = "Sanna";

    // tulostus erilaista!
    // cout -> tulostusolio "console out" (laus. koutti)
    // endl -> end line

    cout << "Hello World!" << endl;
    cout << merkkijono << endl;
    cout << kokonaisluku << " " << merkki << endl;

    // olio cin lukee ja tallentaa käyttäjän syötteen
    int luku = 0;
    cout << "Anna luku:" << endl;
    cin >> luku;
    cout << "Annoit luvun " << luku << "." << endl;


    // satunnaislukugeneraattori
    // std-kirjastossa on funktio rand, sen jälkeen modulo ja max arvo
    // algoritmi aloittaa aina samalla luvulla --> anna uusi siemen

    cout << "Tulostetaan random lukuja:" << endl;
    srand(100); // tämä antaa seedille arvon, huom on siis sitten joka kerta tämä sata jos jotain muuta ei tehdä -- sama kuin Arduinon randomSeed()
    srand(time(NULL)); // includa kirjasto ctime; tämä antaa seedille arvoksi tämänhetkisen ajan -> lähempänä todellista randomia
    int randomLuku = rand() % 40; // "arvotaan" random luku
    cout << randomLuku << endl;
    randomLuku = rand() % 40;
    cout << randomLuku << endl;
    randomLuku = rand() % 40;
    cout << randomLuku << endl;

    // main-funktiossa palautusarvo nolla tarkoittaa, että suoritettiin niin kuin piti
    return 0;
}
