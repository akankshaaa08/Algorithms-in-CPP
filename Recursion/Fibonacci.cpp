#include<iostream>
using namespace std;

int fibonacci(int num)
{
    if(num<=1)
        return num;
    return (fibonacci(num-1) + fibonacci(num-2));
}

int main()
{
    int num;
    cout<<"Enter the position: ";
    cin>>num;
    cout<<"The number in position "<<num<<" of fibonacci series is: "<<fibonacci(num);
}