//APPROACH
/**
 * 
     1. Every 5th number in a factorial has prime factor 5
     2. Idea: count the pair (2,5) for counting the zero
     3. The number of 5s will always be less than number of 2s, hence count only 5
     4. Number of times 5 occur in a number N is N/5
     5. After reaching 25, 5 will occur 2 times in any prime factorization, hence, N/25

     T.C ==> O(log base 5 N)
 
*/
#include<iostream>
#include<cmath>
using namespace std;

int count_zeroes(int num)
{
    int count =0;
    for(int i=5 ; i<=num ; i=i*5)
    {
        count = count + (num/i);
        cout<<"duhd";
    }

    return count;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The number of zeroes in the factorial of the given number is: "<<count_zeroes(num);
}