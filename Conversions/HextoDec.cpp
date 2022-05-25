#include<iostream>
using namespace std;

int main()
{
    string hex;
    int res=0, base =1;

    cout<<"Enter a hexadecimal number: ";
    cin>>hex;

    for(int i= hex.size()-1; i>=0 ; i--)
    {
        if(hex[i]>='0' && hex[i]<='9')
            res += (hex[i]-48) * base;
        else
            res += (hex[i]-55) * base;
        base = base * 16;
    }

    cout<<"The decimal equivalent is: "<<res;


}