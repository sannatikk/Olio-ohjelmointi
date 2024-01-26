#include "b.h"
#include <iostream>
using namespace std;

B::B()
{
    cout << "olen b:n konstruktorissa" << endl;
}

B::~B()
{
    cout << "olen b:n destruktorissa" << endl;
}

void B::public_B()
{
    cout << "olen public_B:ssä" << endl;

    // täältä voi kutsua perittyjä suojattuja
    protected_A();

    // mutta ei yksityisiä!

    // jos usealla parent classilla on samanniminen funktio, kutsun sitä näin:
    // CLASSNAME1::functionname();
    // CLASSNAME2::functionname();
}

void B::testVirtual_A()
{
    cout << "olen B:n uudelleenmääritellyssä testvirtual_A:ssa" << endl;

    // voin kutsua täältä myös alkuperäistä
    A::testVirtual_A();
}

void B::protected_B()
{
    cout << "olen protected_B:ssä" << endl;
}

void B::private_B()
{
    cout << "olen private_B:ssä" << endl;
}
