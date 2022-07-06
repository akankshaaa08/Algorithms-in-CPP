#include<iostream>
using namespace std;

// bool check(string &str, string &pat)
// {
//     for(int i=0; i<(str.length()-pat.length()) ; i++)
//     {
//         int count = 0;
//         for(int j=0 ; j<pat.length(); j++)
//         {
//             for(int k=0 ; k<pat.length(); k++)
//             {
//                 if(str[i+j] == pat[k])
//                     count++;
//             }
//         }

//         if( count == (pat.length()-1))
//             return true;
//     }

//     return false;
// }

//Efficient Approach

bool areSame(int ct[], int cp[])
{
    for(int i=0 ; i<26 ; i++)
        if(ct[i] != cp[i])
            return false;
    return true;
}

bool check(string &str, string &pat)
{
    int ct[26], cp[26];
    fill(ct,ct+26,0);
    fill(cp,cp+26,0);

    //computation for 1st window
    for(int i=0 ; i<pat.length() ; i++)
    {
        ct[str[i] - 'a']++;             //increasing the value by 1 having index str[i]
        cp[pat[i] - 'a']++;
    }

    for(int i=pat.length(); i<str.length(); i++)
    {
        //checking if ct and cp are same
        if(areSame(ct,cp))
            return true;
        
        ct[str[i] - 'a']++;
        ct[str[i] - pat.length()]--;
    }

    return false;

}


int main()
{
    string str, pat;
    cout<<"Enter your string and pattern: ";
    cin>>str>>pat;

    cout<<"Patten found in the given string: "<<check(str,pat);

}