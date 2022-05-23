#include<iostream>
#include<map>
using namespace std;

int main()
{
    map<int,string> m;

    m[1]="X";
    m[2]="Y";
    m[5]="Z";
    m.insert({3,"W"});

    cout<<"Map is: "; 
    for(auto i: m)
        cout<<i.first<<" ";
    
    cout<<"\nIs there a value in index 2: "<<m.count(2);
    cout<<"\nIs there a value in index 10: "<<m.count(10);

    cout<<"\nerasing 2nd element!";
    m.erase(2);
    cout<<"\nMap after erasing a element: ";
    for(auto i: m)
        cout<<i.first<<" ";

    cout<<"\nprinting elements using iterator: ";
    auto it = m.find(3);
    for(auto i = it; i!=m.end(); i++)
        cout<<(*i).first<<" ";

    
}