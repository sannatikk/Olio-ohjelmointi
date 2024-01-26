// OLIOIDEN VÄLINEN PERIYTYMINEN & VIRTUAALIFUNKTIOT

// kertausta:
// luokan määrittely .h tiedostoon, luokan metodien toteutus .cpp tiedostoon
// olioita voidaan luoda main.cpp tiedostosta luokasta
// ulm-luokkakaavio kertoo luokan nimen, muuttujat ja metodit & niiden suojaukset
// olio-ohjelmoinnin edut: encapsulation, abstraction, inheritance, polymorphism

// PERIYTYMINEN
// luokka voi periä yhden tai useamman luokan ominaisuudet, toiminnallisuudet ja yhteydet
// - yksinkertaista/moninkertaista riippuen periytettyjen luokkien määräsrä
// - perivään luokkaan voidaan lisätä uusia ominaisuuksia ja toiminnallisuuksia
// - perivä luokka voi uudelleenmääritellä perittyjä toiminnallisuuksia
// - perimisen tuloksena muodostuu luokkahierarkia
// yliluokka (parent class) = luokka, josta voidaan periä vs. aliluokka (child class) = luokka, johon peritään
// pohjaluokka / base class voidaan käyttää keinotekoisena yliluokkana, jossa on kaikki yhteiset asiat ja jonka pohjalta luodaan muita luokkia
// - esim tiedetään että tulee paljon eri ajoneuvoluokkia -> voidaan tehdä base class jossa määritellään kaikki ajoneuvojen yhteiset ominaisuudet
// protected perintä tekee kaikista parent classin jäsenistä child classin protected jäseniä
// public perintä tekee kaikista parent classin public/protected jäsenistä child classin public/protected jäseniä
// private perintä tekee kaikista parent classin julkisista ja suojatuista jäsenistä child classin private jäseniä


// SUOJAUS = näkyvyys
// - public: jäsenet on julkisia ja kenen tahansa käytettävissä
// - protected: välimuoto: jäsenet ovat käytössä luokan sisäisesti ja perivässä luokassa mutta eivät käytössä mainissä
// - private: jäsenet ovat käytössä vain luokan sisäisesti, niitä ei peritä

// VIRTUAALISET JÄSENFUNKTIOT
// idea: child classissa on oltava tällainen funktio, mutta mahdollistaa toteutuksen omalla eri tavalla
// - jos omaa toteutusta ei ole, käytetään parent classin funktiota
// yliluokassa määrittelyssä funktion palautustyypin eteen sana virtual, qt heittää italicsiksi
// aliluokassa override keyword kertoo kääntäjälle että nyt luon uudestaan



#include <iostream>
#include "a.h"
#include "b.h"

using namespace std;

int main()
{

    // luo olio
    A a_olio;

    // kutsu: huom kun kirjoittaa olionnimi ja piste, qt näyttää kaikki kutsuttavissa olevat julkiset
    // jos yrität mainissa kutsua yksityistä/suojattua niin ei onnistu
    a_olio.public_A();

    // jos on luotu perinnyt b-olio, ohjelma "käy" yliluokassa ennen kuin käy aliluokassa
    // eli b perii a:n konstruktorin ja destruktorin myös koska ne ovat julkisia
    B b_olio;

    // tästä voi nyt kutsua kaikkia a:n julkisia luokkia
    // vaikka a:n julkisissa luokissa olisi kutsuttu a:n yksityistä muuttujaa, sekin käy
    // mutta niitä ei voi kutsua suoraan
    b_olio.public_A();
    b_olio.public_B();
    // EI TOIMI b_olio.protected_A();
    // EI TOIMI b_olio.private_A();
    // EI TOIMI b_olio.protected_B();
    // EI TOIMI b_olio.private_B();

    // virtuaaleja ovi kutsua rauhassa, virtuaalisuus ei estä
    // samat julkisuussäännöt pätee

    // tämä näyttää alkuperäisen
    a_olio.testVirtual_A();

    // tämä näyttää nyt uudelleenmääritellyn version
    b_olio.testVirtual_A();



    return 0;
}
