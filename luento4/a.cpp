#include "a.h"
#include <iostream>
using namespace std;

A::A()
{
    cout << "olen a:n konstruktorissa" << endl;
}

A::A(int a) // uusi konstruktori parametrillä
{
    cout << "A konstruktori, parametri on " << a << endl;
}

A::~A()
{
    cout << "olen a:n destruktorissa" << endl;
}
