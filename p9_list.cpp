#include <iostream>
using namespace std;
#include <list>


void display(list<int> &custom_list){
    list<int> :: iterator iter;

    for (iter=custom_list.begin(); iter!=custom_list.end(); iter++)
    {
        cout<<*iter<<endl;
    }
    
}


int main(){

    list<int> list1;
    list<int> list2(7);

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(9);
    list1.push_back(12);

    display(list1);

    list1.pop_back();
    list1.pop_front();
    list1.remove(9);
    display(list1);

    // sorting list
    list1.sort();
    display(list1);
    
    //reversing the list
    list1.reverse();

    list<int>  vect2(3);
    list<int> :: iterator itr;
    itr = list2.begin();
    cout<<*itr<<endl;


    list1.merge(list2);
    display(list1);
    return 0;
}