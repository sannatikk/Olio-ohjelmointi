#include "italianchef.h"
#include <iostream>
using namespace std;

ItalianChef::ItalianChef(string chefName, int w, int f):Chef(chefName)
{
    water = w;
    flour = f;
}

ItalianChef::~ItalianChef()
{}

string ItalianChef::getName()
{
    return Chef::name;
}

void ItalianChef::makePasta()
{

    cout << Chef::name << " makes pasta with special recipe!" << endl;
    cout << Chef::name << " uses " << water << " ml water and " << flour << " g flour!" << endl;
}
