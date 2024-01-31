#include <iostream>
using namespace std;

int main(){
    
    int a = 5;
    int * ptr = &a;
    cout << "the value of is :" <<*ptr <<"  the adress is: "<<ptr<<endl;

    int *p = new int(40);
    cout << "the value of is :" <<*p <<"  the adress is: "<<p<<endl;

    int * arr = new int[3];
    arr[0] =10;
    // arr[1] =20;
    *(arr+1) =20;
    arr[2] =30;
    cout << "the value of is :" <<arr[0]<<"  the adress is: "<<&arr[0]<<endl;

    // delete *arr[0];

    return 0;
}