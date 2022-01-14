#include<iostream>
using namespace std;

//-----NAIVE APPROACH----
//T.C ==> O(n)
int prime_naive(int num)
{

    int count = 0;

    if(num==0 || num==1)        // edge case 1
    {
        count++;
    }        
    
    for(int i=2 ; i<num ; i++)
    {
        if(num%i==0)
        {
            count++;
            break;
        }    
    }

    return count;
}


//--------OPTIMIZED APPROACH-----
//T.C = O(root(n))
bool prime_optimized(int num)
{
    int count = 0;

    if(num==0 || num==1)                // edge case 1
        return false;

    if(num==2 || num==3)                    //edge case 2
        return true;

    if(num%2==0 || num%3==0)                    //edge case 3
        return false;

    for(int i=5; i*i<=num ; i=i+6)                    //there always exist a pair(x,y) in two halves of a numbers "n", such that n%x==0 and n%y==0
    {
        if(num%i==0 || num%(i+2)==0)
            return false;
    }
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    if(prime_optimized(num)==true)
       cout<<num<<" is a prime number";
    else
        cout<<num<<" is not a prime number";

}