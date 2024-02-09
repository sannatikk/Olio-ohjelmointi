#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    virtual ~Kerros();  // lisätään virtual-sana tähän koska käytetään virtuallisua funktioita

    virtual void maaritaAsunnot(void);
    virtual double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;

};

#endif // KERROS_H
