#include<iostream>
using namespace std;

bool check(string &str1, string &str2)
{
    if( (str1.length()) != (str2.length()) )
        return false;
    
    return ( (str1+str1).find(str2) != string::npos );

}

int main()
{
    string str1, str2;
    cout<<"Enter two strings: ";
    cin>>str1>>str2;

    cout<<"Are two strings rotations of each other: "<<check(str1,str2);
}