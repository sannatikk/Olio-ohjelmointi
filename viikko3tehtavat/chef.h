#ifndef CHEF_H
#define CHEF_H
#include <iostream>
using namespace std;

class Chef
{

public:
    Chef(const string);
    ~Chef();
    void makeSalad(void);
    void makeSoup(void);

protected:
    string name;

private:

};

#endif // CHEF_H
