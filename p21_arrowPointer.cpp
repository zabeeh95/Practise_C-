#include <iostream>
using namespace std;

class NumberClass
{
    int a, b;

public:
    void set(int num1, int num2)
    {
        a = num1;
        b = num2;
    }
    void get()
    {
        cout << "the values are : " << a << "   " << b << endl;
        cout << endl;
    }
};

int main()
{

    NumberClass nc;
    nc.set(3, 4);
    nc.get();


    NumberClass *np = new NumberClass;
    (*np).set(7, 8);
    (*np).get();
    // arrow pointer same as * (dereferencing the value)
    // & shows the address of varaible in mmeory
    np->set(8, 5);
    np->get();

    return 0;
}