#include <iostream>

using namespace std;

void vaihda(short va, short vb) // c++ luo stackiin kopiot parametrimuuttujista eikä varsinaista muuttujaa
{
    cout << "Nyt olemme ei-toimivassa vaihtofunktiossa!" << endl;
    cout << "Parametreina annettu a ja b, parametreina otettu va ja vb" << endl;
    cout << "va:n osoite muistissa: " << &va << endl;
    cout << "vb:n osoite muistissa: " << &vb << endl;

    short temp = va;
    va = vb;
    vb = temp;
}

// Versio: käytä osoittimia
void osoitinVaihda(short *va, short *vb)    // parametrina on otettu pointteri, jonka arvo on siis sama kuin annetut &a ja &b osoitteiden
{
    cout << "Nyt olemme toimivassa vaihtofunktiossa!" << endl;
    cout << "Parametreina annettu &a ja &b, parametreinä otettu *va, *vb" << endl;
    cout << endl;
    cout << "Osoittimen va osoite muistissa: " << &va << endl;
    cout << "Osoittimen va arvo: " << va << " eli a:n osoite!" << endl;
    cout << "Osoittimen vb osoite muistissa: " << &vb << endl;
    cout << "Osoittimen vb arvo: " << vb << " eli b:n osoite!" << endl;

    short temp = *va;
    *va = *vb;
    *vb = temp;
}

int main()
{
    short a = 27;
    short b = 44;

    cout << "a:n osoite muistissa: " << &a << endl;
    cout << "b:n osoite muistissa: " << &b << endl;
    cout << endl;

    cout << "Ennen vaihtoa a = " << a << " ja b = " << b << endl;
    cout << endl;

    // pass by value ei toimi c/c++:ssä:
    vaihda(a,b);

    cout << "Epäonnistuneen pass by value -vaihdon jalkeen a = " << a << " ja b = " << b << endl;
    cout << endl;

    // osoittimia käyttäessä muuttujien osoitteet parametriksi
    osoitinVaihda(&a,&b);

    cout << "Onnistuneen pass by reference -vaihdon jalkeen a = " << a << " ja b = " << b << endl;
    cout << endl;

    return 0;
}
