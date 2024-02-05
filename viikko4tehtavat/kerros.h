#ifndef KERROS_H
#define KERROS_H
#include "asunto.h"

class Kerros
{
public:
    Kerros();
    ~Kerros();

    virtual void maaritaAsunnot(void);
    double laskeKulutus(double);

private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;

};

#endif // KERROS_H
