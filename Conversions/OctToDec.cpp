#include<iostream>
using namespace std;

int main()
{
    int base=1, res=0, n;
    cout<<"Enter a octal number: ";
    cin>>n;
    
    while(n!=0)
    {
        res += (n%10) * base;
        base *= 8;
        n /= 10;
    }

    cout<<"The equivalent decimal number is: "<<res;
}