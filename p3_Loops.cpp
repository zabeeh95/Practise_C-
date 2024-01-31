#include <iostream>

using namespace std;

// this all can be replaced with USER SNIPPET and anming prefix

int main()
{

    //**********************if else statement
    int age;
    cout << "Enter a number: ";
    cin >> age;
    if (age >= 50)
    {
        cout << "Input number is greater than 50!" << endl;
    }
    else if (age == 50)
    {
        cout << "Input number is equal to 50!" << endl;
    }
    else
    {
        cout << "Input number is less than 50!" << endl;
    }

    //***********************switch else
    cout << "--------------------------------------" << endl;
    switch (age)
    {
    case 18:
        cout << "good go to party" << endl;
        break;

    case 60:
        cout << "u r old" << endl;
        break;

    default:
        cout << "no special case" << endl;
        break;
    }

    // *********************for loop
    cout << "--------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << "value of i in for loop : " << i << endl;
        i++;
    }

    // *********************while loop
    cout << "--------------------------------------" << endl;
    int k = 1;
    while (k < 5)
    {
        cout << "value of i in while loop: " << k << endl;
        ++k;
    }

    // *********************do while loop
    cout << "--------------------------------------" << endl;
    int s = 1;
    do
    {
        cout << "value of s in do while loop is : " << s << endl;
        s++;
    } while (s < 5);

    //******************break statment
    cout << "--------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            break; // it will break loop at 2
        cout << "value of break loop is : " << i << endl;
    }

    //******************continue  statment
    cout << "--------------------------------------" << endl;
    for (int i = 0; i < 5; i++)
    {
        if (i == 2)
            continue; // it will skip the value 2
        cout << "value of break loop is : " << i << endl;
    }

    return 0;
}
