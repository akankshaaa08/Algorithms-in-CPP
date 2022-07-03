#include<iostream>
using namespace std;

bool check(string & str)
{
    int len = str.length();

    for(int i=0 ; i<len ; i++)
        if(str[i] != str[len-1-i])
            return false;
        
    return true;

    //Alternate method
    /*
        string rev = str;
        reverse(rev.begin(), rev.end());
        return(rev == str);
    */
}

int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;

    bool flag = check(str);

    if(flag)
        cout<<"A palindrome";
    else    
        cout<<"Not a palindrome";
    
}