#include<iostream>
using namespace std;

void twoOddOccur(int num , int arr[])
{
    int XOR, res1=0 , res2=0;
    for(int i=0 ; i<num ; i++)
    {
        XOR = XOR ^ arr[i];             //gives XOR of 2 odd occuring number
    }

    /* 1. XOR gives 1 when the two values are different
       2. Example: 
            --> 5=101, 6=110 
            --> 110 ^ 101 = 01'1'
            --> two groups will be formed having rightmost SET bit as 0 and 1
            --> XOR of indvidual groups will give the two odd occuring numbers*/


    //finding the position of right most SET bit
    int set = XOR & ~(XOR-1);


    for(int j=0 ; j<num ; j++)
    {
        if( (arr[j] & set) != 0)
            res1 = res1 ^ arr[j];                       //this groups includes all the numbers with a SET bit in the same position as "set" variable
        else
            res2 = res2 ^ arr[j];
    }

    cout<<res1<<" "<<res2;
}

int main()
{
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    cout<<"Enter "<<num<<" values in the array: ";
    for(int i=0 ; i<num ; i++)
    {
        cin>>arr[i];
    }

    cout<<"The two odd occuring numbers in the given array are: ";
    twoOddOccur(num,arr);
}