#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n, res=0, i=0;
    cout<<"Enter a binary number: ";
    cin>>n;

    while(n>0)
    {
        if((n%10)==1)
            res += pow(2,i) * (n%10);
        i++; 
        n=n/10;
    }

    cout<<"The decimal equivalent is: "<<res;

}