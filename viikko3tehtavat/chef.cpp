#include "chef.h"
#include <iostream>
using namespace std;

Chef::Chef(string chefname)
{
    name = "Chef " + chefname;
    cout << name << " konstruktori" << endl;
}

Chef::~Chef()
{
    cout << name << " destruktori" << endl;
}

void Chef::makeSalad()
{
    cout << name << " makes salad!" << endl;
}

void Chef::makeSoup()
{
    cout << name << " makes soup!" << endl;
}
