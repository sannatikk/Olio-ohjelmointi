#ifndef KERROSTALO_H
#define KERROSTALO_H
#include "katutaso.h"

class Kerrostalo
{
public:
    Kerrostalo(int);
    ~Kerrostalo();

    Katutaso eka;
    Kerros toka;
    Kerros kolmas;

    double laskeKulutus(double);
};

#endif // KERROSTALO_H
