#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    cout << "olen a:n konstruktorissa" << endl;
}

A::~A()
{
    cout << "olen a:n destruktorissa" << endl;
}

void A::public_A()
{
    cout << "olen public_a:ssa" << endl;

    // täältä voi kutsua myös yksityisiä funktioita & muuttujia
    private_muuttuja_A = 5;
    private_A();
}

void A::testVirtual_A()
{
    cout << "olen testVirtual_A:ssa" << endl;
}

void A::protected_A()
{
    cout << "olen protected_a:ssa" << endl;
}

void A::private_A()
{
    cout << "olen private_a:ssa" << endl;
}
