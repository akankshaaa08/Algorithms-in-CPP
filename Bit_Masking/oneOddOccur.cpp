#include<iostream>
using namespace std;

//T.C --> O(n), A.S --> O(1)
int occur(int num, int ar[])
{
    int res=0;
    for(int i=0 ; i<num ; i++)
    {
        res = res ^ ar[i];                 // even times occuring number will cancel out each other
    }

    return res;
}


int main()
{
    int num;
    cout<<"Enter the size of the array: ";
    cin>>num;
    int ar[num];
    cout<<"Enter "<<num<<" values in the array: ";
    for(int i=0 ; i<num ; i++)
    {
        cin>>ar[i];
    }

    cout<<"The odd occuring number in the given array is: "<<occur(num,ar);

}