#include<iostream>
using namespace std;

//T.C ==> O(root n)
int primefact(int num)
{
    if(num<=1)              //edge case 1
        cout<<"Dont Exist";
    
    while(num%2==0)             //edge case 2
    {
        cout<<"2"<<" ";
        num=num/2;
    }

    while(num%3==0)                    //edge case 3
    {
        cout<<"3"<<" ";
        num=num/3;
    }

    for(int i=5 ; i*i<=num ; i=i+6)                   //there always exist a pair(x,y) in two halves of a numbers "n", such that n%x==0 and n%y==0
    {
        while(num%i==0)
        {
            cout<<i<<" ";
            num=num/i;
        }

        while(num%(i+2)==0)
        {
            cout<<i+2<<" ";
            num=num/(i+2);
        }
    }

    if(num > 3)               //edge case 4 // for remaining prime numbers when for loop condition is not statisfied  // 2 and 3 are explicitly handled
		cout<<num<<" ";

    return 0;
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The prime factors of "<<num<<" is: ";
    primefact(num);
}