#include <iostream>
#include "chef.h"
#include "italianchef.h"

using namespace std;

int main()
{
    Chef chef_G("Gordon Ramsay");
    ItalianChef chef_A("Anthony Bourdain", 100, 250);

    chef_G.makeSalad();
    chef_A.makeSalad();
    chef_G.makeSoup();
    chef_A.makeSoup();
    chef_A.makePasta();

    return 0;
}
