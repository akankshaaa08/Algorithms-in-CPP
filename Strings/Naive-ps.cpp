#include<iostream>
#include<string>
using namespace std;

void check(string str, string pat)
{
    int len = str.length();
    int p = pat.length();
    int count = 0;

    for(int i=0 ; i<=(len-p) ; i++)
    {
        int j;

        for(j=0; j<p ; j++)             //traversing each window
        {
            if(pat[j] != str[i+j])
                break;
        }

        if(j==p)
        {
            cout<<i<<" ";
            count++;
        }

        /*
        When all characters are distinct in the pattern -

        if(j==0)
            i++;
        else
            i = i+j;
        */
    }

    if(count==0)
        cout<<"-1";
}

int main()
{
    string str, pat;
    cout<<"Enter the string and pattern to be searched: ";
    cin>>str>>pat;

    cout<<"Pattern found at index: ";
    check(str,pat);
}