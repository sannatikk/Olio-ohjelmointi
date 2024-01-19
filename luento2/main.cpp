#include <iostream>
#include "postilaatikko.h"      // muista linkata tiedosto

using namespace std;

// LUOKKA: yleinen kuvaus, sisältää nimen, jäsenmuuttujat, jäsenfunktiot
// --> luokka kertoo, miten olio toteutetaan ohjelmointikielellä
// "olio on luokan ajonaikainen ilmenymä ohjelmassa"
// ----> luo uusi cpp class tiedosto, tästä tulee cpp ja h-filut
// h:ssa määritellään, cpp:ssä toteutetaan

// KAPSELOINTI: luokka on toimiva paketti, joka sisältää kaiken, mitä olio tarvitsee toimiakseen
// uudelleenkäytettävyys -> esim monta postilaatikkoa

// TIEDON KÄTKENTÄ: luokan jäsenille voidaan asettaa eri näkyvyysasetuksia = suojaustasoja
// --> voidaan kontrolloida, miten luokkaa saa käyttää ja suojata luokan sisäinen toiminta

// PERIYTYMINEN: luokka voi periä 1+ luokan ominaisuudet
// --> esim älypostilaatikko voi periä alkuperäisen postilaatikon ominaisuudet (osoite, nimi, määrä, ym) mutta siihen voidaan myös lisätä uusia ominaisuuksia
// muodostuu luokkahierarkia
// --> etu: nopeuttaa koodin kirjoitusta

// MONIMUOTOISUUS = polymorfismi: mahdollistaa saman toiminnallisuuden toteutuksen eri tavoilla
// ylikuormitus: jäsenfunktiolla voi olla useita toteutuksia
// uudelleenmääritys: luokissa voi olla samannimisiä perittyjä jäsenfunktioita, jotka tekevät saman toiminnallisuuden eri tavalla sisäisesti


int main()
{

    // kun oliot on määritelty, ne voidaan ottaa käyttöön = luoda mainissa

    postilaatikko pl1;           // oliotyyppi luotu, huom tämä on case sensitive! pl = muuttujanimi, tällä kutsutaan olion funktioita
    postilaatikko pl2;           // luotu toinen postilatikko, eli postilaatikko-luokkaan lisätty muuttuja pl2

    pl1.lisaaPosti(5);           // lisaaPostia kutsuttu, lisätään viisi asiaa
    pl1.otaPosti(1);             // otaPosti kutsuttu, ottaa pois yhden

    int maaraLisaa;
    int maaraOta;

    do                           // huom tämä nollaantuu joka loopin välissä olioiden toiminnan takia!
    {
        cout << "Anna lisättävän postin määrä: " << endl;
        cin >> maaraLisaa;
        cout << "Anna otettavan postin määrä: " << endl;
        cin >> maaraOta;

        pl1.lisaaPosti(maaraLisaa);
        pl1.otaPosti(maaraOta);
    } while (maaraLisaa != 0 && maaraOta != 0);




    return 0;
}
