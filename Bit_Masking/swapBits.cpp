#include<iostream>
using namespace std;

int swap(int num)
{
    int even_bits , odd_bits;

    //extracting even bits
    even_bits = num & 0xAAAAAAAA;
    even_bits = even_bits >> 1;
    
    //extracting odd bits
    odd_bits = num & 0x55555555;
    odd_bits = odd_bits << 1;

    return (even_bits + odd_bits);
}


int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The nwe number after swapping all the even and odd bits is: "<<swap(num);
}