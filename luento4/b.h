#ifndef B_H
#define B_H

// muista includata parent class header
#include "a.h"

// tämä on A:n JULKINEN aliluokka

// jos haluaisin lisätä usean parent classin, laittaisin:
// class B: public A, public Toinen_Parent_Class

class B: public A
{
public:
    B();
    B(int b);
    ~B();
};

#endif // B_H
