#include<iostream>
using namespace std;

void subset(string s, string curr, int i)
{
    if(i==s.length())
    {
        cout<<curr<<" ";
        return;
    }

    subset(s , curr , i+1);
    subset(s, curr + s[i] , i+1);
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;

    

    cout<<"The subsets of "<<s<<" are: \n";
    subset(s, "", 0);
}