#include <iostream>
using namespace std;

//--------NAIVE APPROACH--------
//T.C ==> O(n)
int LCM_naive(int a, int b)
{
    int i;
    for(i=max(a,b); i<=(a*b); i++)
    {
        if(i%a==0 && i%b==0)
            break;
    }

    return i;
}

//OPTIMIZED APPROACH
//T.C ==> O(max(a,b)), A.S ==> O(max(a,b))
int GCD (int a , int b)
{
    if(b==0)
        return a;
    else    
        return (b,a%b);
}

int LCM_formula (int a, int b)
{
    return (a*b/GCD(a,b));
}

int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"The LCM of "<<a<<" and "<<b<<" is: "<<LCM_formula(a,b);
}