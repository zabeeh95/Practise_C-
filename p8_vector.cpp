#include <iostream>
using namespace std;
#include <vector>

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
};

int main()
{
    vector<int> vec1;
    vector<char> vec2;

    int elemnet, size = 5;

    for (int i = 0; i < size; i++)
    {
        cout << "enter element  :";
        cin >> elemnet;
        vec1.push_back(elemnet);        //add element to end 
    }
    vec1.pop_back();        //removes last element

// ***********insert requires iterator to point position
    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter,56);

    display(vec1);

    return 0;
}