#include<iostream>
using namespace std;

bool palindrome(string &str, int start, int end)
{
    if(start>=end)
        return true;
    return( (str[start]==str[end]) && (palindrome(str,start+1,end-1)));
}

int main()
{
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    cout<<"The given string is"<<(palindrome(str,0,str.length()-1) ? "a Palindrome" : "Not a Palindrome");
}