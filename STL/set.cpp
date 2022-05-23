#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<int> s;

    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(5);
    s.insert(3);
    s.insert(4);
    s.insert(6);

    cout<<"The set is: ";
    for(int i: s)
    {
        cout<<i<<" ";
    }

    //s.erase(s.begin());

    set<int>::iterator it = s.begin();          //initializing iterator
    it++;
    it++;
    s.erase(it);
    cout<<"\nelement popped at 2nd index!"<<endl;

    cout<<"The modified set is: ";
    for(int i: s)
    {
        cout<<i<<" ";
    }

    //finding element is present or not
    cout<<"\nIs 5 present: "<<s.count(5);
    cout<<"\nIs 3 present: "<<s.count(3);

    //finding index of element
    set<int>::iterator itr = s.find(3);
    cout<<"\n3 is present at index: "<<*itr;

    //printing values using itr
    cout<<"\nSET IS: "; 
    for(auto i = itr; i!=s.end(); i++ )
        cout<<*i<<" ";


}