#include<iostream>
using namespace std;

//Euclid'd Algorithm using repetitive subtraction
//T.C ==> O(max(a,b)), A.S ==> O(1)
int GCD_sub (int a, int b)
{
    while(a!=b)
    {
        if(a>b)
            a = a-b;
        else  
            b = b-a;
    }

    return b;                   //can return a also, because in the end of loop a=b
}


//Euclid'd Algorithm using modular division
//T.C ==> O(log(a+b)), A.S ==> O(log(a+b))
int GCD_div (int a, int b)
{
    if(b==0)
        return a;
    else
        return GCD_div(b,a%b);
}


//Naive Approach
//T.C ==> O(min(a,b))
int GCD_naive(int a, int b)
{
    int res = min(a,b);                 //GCD of two number cannot be greater than min(a,b)
    while(res>0)
    {
        if(a%res ==0 && b%res ==0)
        {
            break;
        }
        res --;
    }

    return res;
}


int main()
{
    int a,b;
    cout<<"Enter two numbers: ";
    cin>>a>>b;

    cout<<"The GCD of "<<a<<" and "<<b<<" is: "<<GCD_div(a,b);
}