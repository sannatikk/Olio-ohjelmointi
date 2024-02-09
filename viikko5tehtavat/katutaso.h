#ifndef KATUTASO_H
#define KATUTASO_H
#include "kerros.h"

class Katutaso: public Kerros
{
public:
    Katutaso();
    virtual ~Katutaso();

    void maaritaAsunnot(void) override;
    double laskeKulutus(double) override;

private:
    Asunto *as1;
    Asunto *as2;

};

#endif // KATUTASO_H
