#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include "chef.h"

class ItalianChef: public Chef
{

public:
    ItalianChef(const string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta();

protected:
    string name;

private:
    int water;
    int flour;

};

#endif // ITALIANCHEF_H
