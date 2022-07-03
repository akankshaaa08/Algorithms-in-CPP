#include<iostream>
using namespace std;

bool check(string &str, string &sub)
{
   int m = str.length();
   int n = sub.length();

   int j=0;
   for(int i=0 ; i<m && j<n ; i++)
        if(str[i] == sub[j])
            j++;

    return(j==n);
}

int main()
{
    string str, sub;
    cout<<"Enter your string: ";
    cin>>str;

    cout<<"Enter the subSequence: ";
    cin>>sub;

    bool flag = check(str,sub);

    if(flag)
        cout<<"Subsequence Present";
    else    
        cout<<"Subsequence Not Present";
    
}