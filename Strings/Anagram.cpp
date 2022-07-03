#include<iostream>
using namespace std;

bool check(string &s1, string &s2)
{
   if(s1.length() != s2.length())
        return false;

    int count[26] = {0};                                // count[256] in case other than small alphabets

    for(int i=0; i<s1.length(); i++)
    {
        count[s1[i] - 'a']++;
        count[s2[i] - 'a']--;
    }

    for(int i=0 ; i<25 ; i++)
        if(count[i] != 0)
            return false;

    return true;
}

int main()
{
    string s1, s2;
    cout<<"Enter your string 1: ";
    cin>>s1;

    cout<<"Enter the string 1: ";
    cin>>s2;

    bool flag = check(s1,s2);

    if(flag)
        cout<<"Strings are anagram";
    else    
        cout<<"Strings are not anagram";
    
}