#include<iostream>
using namespace std;

//T.C --> O(1)
//Basic Idea: In all the powers of 2, only 1 bit is SET. Example: 2=10, 4=100, 8=1000
//Using Brian's Kerningam Algorithm: If we subtract 1 from any number, its right most SET bit become zero and rest bit becomes 1
bool checkPower(int num)
{
    return ((num!=0) && ( (num & (num-1)) ==0));
}

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    cout<<"The given number is"<<(checkPower(num) ? " a " : " NOT a " )<< "power of 2";
}