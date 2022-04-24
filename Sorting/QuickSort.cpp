//T.C => O(n log(n) )
//S.C => O(log n)

#include<iostream>
using namespace std;

int Partition(int ar[] , int s , int e)
{
    int pivot = ar[e];
    int pIndex = s ;
 
    for(int i=s ; i<e; i++)
    {
        if(ar[i]<pivot)
        {
            swap(ar[i],ar[pIndex]);
            pIndex++;
        }
    }

    swap(ar[e], ar[pIndex]);
    return pIndex;                                                                                                      
}

void QuickSort(int ar[], int s , int e)
{
    if(s<e)
    {
        int p=Partition(ar,s,e);
        QuickSort(ar , s , (p-1) );
        QuickSort(ar, (p+1), e);
    }
}

int main()
{
    int size;
    cout<<"Enter number of elements in the array: ";
    cin>>size;

    int ar[size];
    cout<<"\nEnter "<<size<<" elements in the array: ";
    for(int i=0 ; i<size ; i++)
    {
        cin>>ar[i];
    }

    cout<<"\nBefore Sorting: ";
    for(int i=0 ; i<size ; i++)
    {
        cout<<ar[i]<<" ";
    }

    QuickSort(ar,0,size-1);

    cout<<"\nAfter Sorting: ";                //arrays are passed by reference
    for(int i=0 ; i<size ; i++)
    {
        cout<<ar[i]<<" ";
    }


}
