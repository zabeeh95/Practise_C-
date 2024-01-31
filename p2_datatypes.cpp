#include <iostream>        
#include <iomanip>      //includes set w

using namespace std;

// #include "this.h"        // for custom header file

int num1 = 45;
int main()
{
    int num1,num2;

    cout<< "enter num1 and num 2 \n";           // << is insertion operator
    cout<< "enter num1 and num 2" <<endl;      // same as \n   = endl     
    cout<<"eneter num 1 \n";
    cin>> num1;                                 // >> extraction operator
    
    cout<<"eneter num 2\n";
    cin>> num2;

    cout<< "the sum is  " <<num1+num2 <<endl;
    cout << "the golobal num1 is " << ::num1 <<endl;
 
    // *********** sizes of data types    
    cout<<"--------------------------------------"<<endl;
    float d = 34.4f;
    long double e = 34.4l;
    cout << "the size of num 1 is :" <<sizeof(num1)<<endl;


    //*************reference variable    
    cout<<"--------------------------------------"<<endl;
    float x = 45;
    float & y = x;
    cout <<x <<endl;        // the answer is same  as  y is referencing x
    cout <<y <<endl;

    //***************type casting    
    cout<<"--------------------------------------"<<endl;
    int g= 45;
    cout<<"the value int is type cated : "<<(float) g<<endl;

    //****************constant    
    cout<<"--------------------------------------"<<endl;
    const int j= 5;         //now it is constant

    //***************manipulator    
    cout<<"--------------------------------------"<<endl;
    int m,n,p;
    m = 3; n = 12; p=456;
    cout<<"the results with setw align the values "<<setw(4)<<m<<endl;
    cout<<"the results with setw align the values "<<setw(4)<<n<<endl;
    cout<<"the results with setw align the values "<<setw(4)<<p<<endl;

    //******************* operator precedence    
    cout<<"--------------------------------------"<<endl;
    int d,e,f;
    cout<<d*5+4<<endl;      //operator with higher precednce occures first.
    // reference site is cppreference
    // in case opeartor are same then associativity occurs first

    return 0;
}

