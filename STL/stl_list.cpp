//uses deque for implementation

#include<iostream>
#include<list>
using namespace std;

int main()
{
    //initialization
    list<int> l;

    //inserting elements
    l.push_back(20);
    l.push_front(10);

    cout<<"The list is: ";
    for(int i: l)
    { cout<<i<<" "; }

    //erasing elements
    l.erase(l.begin());
    cout<<"The modified list is: ";
    for(int i: l)
    { cout<<i<<" "; }

    //copying to new list
    list<int> l1(l);


}