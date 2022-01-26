#include<iostream>
using namespace std;

void per(string s, int i)
{
    if(i==s.length()-1)
    {
        cout<<s<<" ";
        return;
    }

    for(int j=i ; j<s.length() ; j++)
    {
        swap(s[i],s[j]);
        per(s,i+1);
        swap(s[j],s[i]);
    }
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The permutations are: ";
    per(s,0);
}