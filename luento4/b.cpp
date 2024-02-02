#include "b.h"
#include <iostream>
using namespace std;

B::B() : A(7) // eli kutsu a:n sitä kontsruktoria, jossa on parametri
{
    cout << "olen b:n konstruktorissa" << endl;
}

B::B(int b) : A(b) // lisättiin sama parametri a:n konstruktorin parametriksi
{
    cout << "B:n konstruktori, parametri b on " << b << endl;
}

B::~B()
{
    cout << "olen b:n destruktorissa" << endl;
}
