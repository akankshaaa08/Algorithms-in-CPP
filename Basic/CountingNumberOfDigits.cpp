#include<iostream>
#include<cmath>
using namespace std;

//-------------ITERATIVE APPROACH-------
//T.C => O(N)
int count_iteratively (int n)
{
    int count =0;
    while(n!=0)
    {
        count++;
        n = n / 10;
    }

    return count;
}


//-------------RECURSIVE APPROACH-------
//T.C => O(N)
int count_recursively (long long n)
{
    if (n/10 == 0)
        return 1;
    return 1 + count_recursively(n/10);
}


//-------------LOGARITHMIC APPROACH-------
//T.C => O(1)
int count_logarithmicaly (long long n)
{
    return (log10(n)+1);
}


//---------------DRIVER CODE----------
int main()
{
    long long n;
    cout<<"Enter the Number: ";
    cin>>n;
    cout<<"The number of digits in the given number are: "<<count_recursively(n);

}
