#ifndef A_H
#define A_H

class A
{

public:
    A();
    ~A();

    void public_A();
    int public_muuttuja_A;
    virtual void testVirtual_A();

protected:
    void protected_A();
    int private_muuttuja_A;

private:
    void private_A();

};

#endif // A_H
