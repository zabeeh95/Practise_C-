#include <iostream>
using namespace std;
 
template <class T1, class T2>
 
class myClass
{
public:
    T1 data1;
    T2 data2;
    myClass(T1 a, T2 b)
    {
        data1 = a;
        data2 = b;
    }
    void display()
    {
        cout << this->data1 << " " << this->data2;
    }
};

template <class T1 = int, class T2 = float, class T3 = char>
class myClass2
{
public:
    T1 data1;
    T2 data2;
    T3 data3;
 
    myClass2(T1 a, T2 b, T3 c)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void display()
    {
        cout << "The value of a is " << data1 << endl;
        cout << "The value of b is " << data2 << endl;
        cout << "The value of c is " << data3 << endl;
    }
};

template <class T>
class vector
{
    T *arr;
    int size;
};
 
template <class T1, class T2>
float findAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

int main()
{

    myClass<char, int> obj('C', 1);
    obj.display();


    myClass2<> obj1(1, 4.3, 'C');
    obj1.display();


    vector<int> v1();
    vector<float> v2();


    float avg = findAverage(5.1, 2);
    cout << avg << endl;
    
}
