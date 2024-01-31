#include <iostream>
using namespace std;

int main(){
    
    int a = 3;
    int *b = &a;
    
    cout<<"the address of a --- stored in b-- which is a pointer of its address in memory"<<b<<endl;
    cout<<"the address of a --- stored in b-- which is a pointer of its address in memory"<<&a<<endl;

    // *************Dereferencing
    cout<<"to get value which is pointed we do :" <<*b<<endl;

    //**************pointer to pointer
    int **c  = &b;
    cout<<"the pointyer to pointer is "<<c<<endl;
    cout<<"the pointyer to pointer is "<<&b<<endl;

    //****************array pointers
     int arr[] = {1, 2, 3};
    cout << arr[1] << endl;

    int marks [] = {10,20,30,40};
    int *p = marks;
    cout<<"the value of marks [0] "<<*p<<endl;
    cout<<"the value of marks [1] "<<*(p+1)<<endl;
    cout<<"the value of marks [2] "<<*(p+2)<<endl;

    // Addreses in memory of array is
    cout<<"the value of marks [0] "<<&marks[0]<<endl;
    cout<<"the value of marks [0] "<<&marks[1]<<endl;

    return 0;
}