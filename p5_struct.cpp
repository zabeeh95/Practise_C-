#include <iostream>
using namespace std;


// *********** structure
typedef struct employee
{
    int eId;
    char favChar;
    int salary;
}ep;


// ******* union does a sharing memory btw data types
union money
{
    int rice;       //4
    char car;          //1
    float salary;       //4
};



int main(){

    enum Meal{breakfast,lunch,dinner};
    Meal m3 = lunch;
    cout<<m3;


    union money m1;
    m1.rice = 22;
    m1.car = 'c';       //ASCII of c is 99
    cout<<"the value of m1 will be c bcz it overwrites the vaue as it is shared "<<m1.rice<<endl;
    cout<<"the value of m1 will be c bcz it overwrites the vaue as it is shared "<<m1.car<<endl;

    ep harry;  //typedef makes short for usage
    harry.eId = 2;     //typedef makes short for usage

    struct employee Harry;
    // Harry.eId = 1;
    Harry.favChar = 'c';
    Harry.salary = 120000000;
    cout << "eID of Harry is " << Harry.eId << endl;
    cout << "favChar of Harry is " << Harry.favChar << endl;
    cout << "salary of Harry is " << Harry.salary << endl;
    return 0;

    return 0;
}