#include<iostream>
using namespace std;
#define d 256
const int q=101;


void check(string &str, string &pat)
{
    int n = str.length();
    int ptr =  pat.length();

    //Computing (d^(ptr-1))%q
    int h = 1;
    for(int i=1 ; i<=(ptr-1) ; i++)
        h = (h*d)%q;                           //computing weighted value for first window element


    //calculating hash value of 1st window and pattern
    int s = 0 , p = 0;
    for(int i=0 ; i<ptr; i++)
    {
        p = (p*d + pat[i])%q;
        s = (s*d + str[i])%q;
    }

    //checking the characters if both has values matches
    for(int i=0 ; i<=(n-ptr); i++)
    {
        if(p==s)
        {
            bool flag = true;
            for(int j=0 ; j<ptr ; j++)
                if(str[i+j] != pat[j])
                {
                    flag = false;
                    break;
                }

            if(flag == true)
                cout<<i<<" ";
        }
        
        
        //computing hash value of next window
        if(i < (n-ptr))
            p = (( d*( p - str[i]*h )) + str[i+ptr]) % q;  
        
        if(p<0)
            p = p+q;
    }
}


int main()
{
    string str, pat;
    cout<<"Enter the string and pattern to be searched: ";
    cin>>str>>pat;

    cout<<"Pattern found at index: ";
    check(str,pat);
}