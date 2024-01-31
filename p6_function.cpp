#include <iostream>
using namespace std;
 

void swap(int a, int b);    //function prototyping... declaring bfr main

//Inline functions... short functions dont swap variable rather directly take svariable
inline int add(int a, int b){
    static int c =0;

    return a+b;
}

int add(int a, int b = 5){      //default function argument b=5. you can ovveride by passing argument
    static int c =0;        //inializes only one
    c= c+1;                 //next time function runs value will be 1 and next time 2 then 3
    return a+b;
}

//  *************pointers swap integers 
void swapPointers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
 
int main()
{
    int x = 5, y = 6;
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swap(x, y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
    swapPointers(&x, &y);
    cout << "The value of x is " << x << " and the value of y is " << y << endl;
}

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}


// recusrion
int factorial(int n){
    if (n<=1)
        return 1;
    else    
        return n * factorial(n-1);
}

// *************function overloading
float sum(int a, int b);
float sum(int a, int b, int c);