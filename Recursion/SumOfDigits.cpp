#include<iostream>
using namespace std;

int SumOfDigits(int num)
{
    if(num<=9)
        return num;
    return ( (num%10) + SumOfDigits(num/10) );
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"The sum of digits of "<<num<<" is: "<<SumOfDigits(num);
}