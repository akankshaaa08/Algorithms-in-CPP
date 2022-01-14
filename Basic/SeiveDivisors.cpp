#include<iostream>
using namespace std;

//Seive Algorithm
/*
1. Create a boolean vector of size(n+1) with all values as True
2. Travel to a number(till root n), and mark its multiples as False
3. remaining numbers will be the prime numbers
*/
//T.C ==> O(n log(logn))

void seive (int num)
{
    bool isPrime [num+1];                   //initializing boolean array
    fill(isPrime, isPrime+num+1, true);                     // Filling the array elements as true

    for(int i=2; i<=num ; i++)                      //Here, i will not become greater than root n becuase og 2nd for loop
    {
        if(isPrime[i])
        {
            cout<<i<<" ";

            //Traversing through multiples and marking them as False 
            //i*i in inner loop is because all the smaller then i*i will be divisible by other smaller divisors   //for example: for 5: (10 15 20) 25	

            for(int j = i*i; j<=num ; j=j+i)                        
                isPrime[j]=false;
        }
    }
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Prime numbers smaller than "<<num<<" are: ";
    seive(num);
}