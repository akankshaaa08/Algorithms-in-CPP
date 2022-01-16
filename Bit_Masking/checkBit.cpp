#include<iostream>
using namespace std;

bool checkBit_leftShift (int num, int k)
{
    if(num & (1<<(k-1)) !=0)     //  using left shift
        return true;
    else
        return false;
}

bool checkBit_rightShift (int num, int k)
{
    if( (num>>(k-1)) & 1 !=0)     //  using left shift
        return true;
    else
        return false;
}

int main()
{
    int num,k;
    cout<<"Enter your binary number: ";
    cin>>num;

    cout<<"Enter the position of bit to check: ";
    cin>>k;

    cout<<"The bit at position "<<k<<" is "<<((checkBit_rightShift(num,k)) ? "SET" : "NOT SET");

}