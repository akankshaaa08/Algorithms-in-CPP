//T.C ==> O(n^2)

#include<iostream>
using namespace std;

void BubbleSort(int ar[], int size)
{
    for(int i=0 ; i<size ; i++)
    {
        for(int j=0; j<size-i-1 ; j++)                  // (size-1) because comparison will not happen for last element // -i = no. of elements that get sorted
        {
            if(ar[j] > ar[j+1])                         //pushes the largest value to last
                swap(ar[j], ar[j+1]);
        }
    }
}

int main()
{
    int size;
    cout<<"Enter number of elements in the array: ";
    cin>>size;

    int ar[size];
    cout<<"Enter "<<size<<" elements in the array: ";
    for(int i=0 ; i<size ; i++)
    {
        cin>>ar[i];
    }

    cout<<"Before Sorting: ";
    for(int i=0 ; i<size ; i++)
    {
        cout<<ar[i]<<" ";
    }

    BubbleSort(ar,size);

    cout<<"After Sorting: ";                //arrays are passed by reference
    for(int i=0 ; i<size ; i++)
    {
        cout<<ar[i]<<" ";
    }


}