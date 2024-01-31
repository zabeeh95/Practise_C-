#include <iostream>
using namespace std;

class Employee
{

private:
    int a, b;

public:
    int c, d;
    void set_data(int a, int b);
    void get_data()
    {
        cout << "the variable are :" << a << endl;
        cout << "the variable are :" << b << endl;
        cout << "the variable are :" << c << endl;
        cout << "the variable are :" << d << endl;
    }
};

void Employee::set_data(int a1, int b1)
{
    a = a1;
    b = b;
}

int main()
{

    Employee emp;
    emp.c = 23;
    emp.d = 34;
    emp.set_data(2, 3);
    emp.get_data();
    return 0;
}