#include<iostream>
using namespace std;

//Printing unsorted divisors
//T.C ==> O(root n)
int GetDivisors(int num)
{
    for(int i=1 ; i*i<=num ; i++)
    {
        if(num%i==0)
        {
            cout<<i<<" ";
            if(i != (num/i))                // in case of sqaure numbers, divisor is printed only 1 time
                cout<<(num/i)<<" ";
        }
    }
}


//Printing sorted divisors
//T.C ==> O(root n)
int GetDivisors_Sorted(int num)
{
    int i;
    
    for(i=1 ; i*i<num ; i++)        // for 1st half 
    {
        if(num%i==0)
            cout<<i<<" ";
    }

    for( ; i>=1 ; i--)                      // for 2nd half 
    {
        if(num%i==0)
            cout<<(num/i)<<" ";
    }

}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The divisors of "<<num<<" is: ";
    GetDivisors(num);
}