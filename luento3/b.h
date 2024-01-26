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
    ~B();
    void public_B();

    // nyt kerron että haluan määritellä uudestaan testVirtual_A-funktion
    virtual void testVirtual_A() override;

protected:
    void protected_B();

private:
    void private_B();
};

#endif // B_H
