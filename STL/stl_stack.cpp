#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //initializing
    stack<string> s;

    //inserting
    s.push("o");
    s.push("l");
    s.push("l");
    s.push("e");
    s.push("h");            //last in

    //poping
    s.pop();
    s.pop();

    //retrieving top element
    cout<<"top: "<<s.top(); 

    //finding size
    cout<<"\nsize: "<<s.size();

    //empty or not
    cout<<"\nempty or not: "<<s.empty()<<endl;

    //iterating through stack
    cout<<"The stack is: ";
    while (!s.empty())  
    {
        cout << ' ' << s.top();
        s.pop();
    }
}