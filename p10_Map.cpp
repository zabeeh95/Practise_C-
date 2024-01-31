#include <iostream>
#include <map>
using namespace std;

int main()
{

    map<string, int> m = {{"Harry", 2}, {"Rohan", 4}};
    m["zimra"]=22;
    m.insert({{"Coder", 3}, {"Rahul", 5}});

    map<string, int>::iterator iter;
    for (iter = m.begin(); iter != m.end(); iter++)
        cout << (*iter).first << "      " << (*iter).second << endl;
    
    cout<<m.size()<<endl;

    return 0;
}