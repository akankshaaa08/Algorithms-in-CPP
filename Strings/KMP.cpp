#include<iostream>
using namespace std;

//Naive approach to form LPS array | T.C => O(n^3)

/*int lps (string &s, int n)
{
    for(int len = n-1; len>0 ; len--)
    {
        bool flag = true;

        for(int i=0 ; i<len; i++)
            if(s[i] != s[n-len+i]);
                flag = false;

        if(flag==true)
            return len;
    }

    return 0;

}

int check(string &str, string &pat)
{
    int n = str.length();
    int arr[n];
    for(int i=0 ; i<n ; i++)
    {
        arr[i] = lps(str,i+1); 
    }
} */


//T.C ==< O(n)  
void fillLPS(string &str, int  lps[])
{
    int n = str.length();
    int len = 0, i=1;
    lps[0] = 0;

    while(i< n )
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i] = len;
            i++;
        }

        else
        {
            if(len==0)
            {
                lps[i] = 0;
                i++;
            }

            else
                len = lps[len-1];
        }
    }
}

void check(string &str, string &pat)
{
    int n = str.length();
    int m = pat.length();
    int lps[m];

    fillLPS(str,lps);

    int i=0, j=0;

    while(i<n)
    {
        if(str[i] == pat[j])
        { i++; j++; }

        if(j==m)
        {
            cout<<i-j<<" ";
            j = lps[j-1];               //finds the next character to match
        }

        else if(i<n && (pat[j] != str[i]) )
        {
            if(j==0)
                i++;
            else
                j = lps[j-1];
        }
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