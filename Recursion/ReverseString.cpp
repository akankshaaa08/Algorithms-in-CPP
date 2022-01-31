#include<iostream>
using namespace std;

void reverseString(string &s, int i)            //call by reference changes the original value of string
{
    int len = s.length();
    
    if(i == len / 2)
        return;
    
    swap(s[i], s[len - i - 1]);
    reverseString(s , i+1);  
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<s;
    cout<<"\nThe reverse of "<<s<<" is: ";
    reverseString(s,0);
    cout<<s;
}   