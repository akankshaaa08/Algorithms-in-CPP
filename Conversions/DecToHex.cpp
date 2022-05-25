#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;

    cout<<"The Hexadecimal equivalent is: ";

    char hex[100];
    int i=0;

    while(n>0)
    {
        if( (n%16) < 10)
            hex[i] = (n%16) + 48;
        else
            hex[i] = ( (n%16) + 55);
        i++;
        n = n/16;
    }

    for(int k=i-1 ; k>=0 ; k--)
    {
        cout<<hex[k];
    }


}