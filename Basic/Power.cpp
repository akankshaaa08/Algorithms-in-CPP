#include<iostream>
using namespace std;

//-----------NAIVE APPROACH----------
//T.C ==> O(n), n=power
int exp_naive(int base, int power)
{
    int result = 1;
    while(power!=0)
    {
        result = result * base;
        power--;
    }

    return result;
}

//----------RECURSIVE APPROACH----------
//T.C ==> O(log n), A.d ==> O(logn) + overhead return functions
//Basic Idea: 
/*
    power(x,n) = power(x,n/2) * power(x,n/2)  --------------  if n is even
    power(x,n) = power(x,n-1)                 ---------------  if n is odd
*/

int exp_recursive(int base, int power)
{
    if(power==0)            //base case
        return 1;

    int temp = exp_recursive(base, power/2);
    
    temp = temp*temp;

    if(power%2==0)
        return temp;
    else
        return temp*base;
}


//-----------ITERATIVE APPROACH----------
//T.C ==> O(logn), A.S ==> O(1)
//Basic Idea:
/*
    Every number can be written as the sum of powers of 2. Example: 3^10 = 3^8 x 3^2
    It takes O(logn) time to traverse through all the bits of number (from LSB to MSB)
*/
int exp_iterative(int base, int power)
{
    int res=1;
    while (power>0)
    {
        if(power%2 != 0)
            res = res * base;
        base = base * base;
        power = power/2;
    }

    return res;
}


int main()
{
    int base, power;
    cout<<"Enter the number and its power: ";
    cin>>base>>power;
    cout<<base<<" to the power "<<power<<" is: "<<exp_iterative(base,power);
}