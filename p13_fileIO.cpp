#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream out("example.txt");

    ifstream in("example.txt");

    // "example.txt".close();

    // ***********writing a file
    string str = "Welcome_To_CodeWithHarry!";
    ofstream out("example.txt");
    out << str;

    //********* reading a file
    string str;
    ifstream in("example.txt");
    in >> str;
    cout << str;
    return 0;
}
