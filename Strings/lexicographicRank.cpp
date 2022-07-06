#include<iostream>
using namespace std;

int fact(int n)
{
    return (n <= 1) ? 1 : n * fact(n - 1); 
}

/*int Lrank(string &str)
{
    int n = str.length();
    int res = 0;

    int f = fact(n);

    for(int i=0 ; i<n; i++)
    {
        int count = 0;
        for(int j=i+1 ; j<n ; j++)
        {
            if( ( str[i] - 'a') > (str[j] - 'a') ) 
                count++;
        }

        f = f/(n-i);
        res += count * (f);
    }

    return (res+1);
}*/

//Efficient Approach
int Lrank(string &str)
{
    int n = str.length();
    int f = fact(n);
    int count[26] = {0};
    int res = 0;

    //marking the frequency of each character
    for(int i=0 ; i<n ; i++)
        count[str[i]]++;
    
    //marking the indexes with number of characters smaller than the current character
    for(int i=1; i<n ; i++)
        count[i] += count[i-1];
    
    //rank computation
    for(int i=0 ; i<n-1 ; i++)
    {
        f = f / (n-i);
        res += count[str[i]-1] * f;

        //ensures counting of right side characters only
        for(int j=str[i]; j<26 ; j++)
            count[j]--;
    }

}

int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    cout<<"Lexicographic Rank of the string is: "<<Lrank(str);
}