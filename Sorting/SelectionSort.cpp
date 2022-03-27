/*
Time Complexity: O(n^2) for comparisons and O(n) for swaps
Space Complexity: O(1)

Inplace and Not Stable
*/

#include<iostream>
using namespace std;

void SelectionSort ( int ar[] , int n)
{
    for(int i=0 ; i<=n-2 ; i++)
    {
        //setting current array element as minimum
        int min = i;

        //finding minimum element in the array (comparisons)
        for(int j=i+1 ; j<=n-1 ; j++)
        {
            if(ar[j] < ar[min])
                min = j;
        }

        //swapping the new minimum element with the current minimum
         swap(ar[min],ar[i]);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" elements in the array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }
    cout<<"Array after applying selection sort is: ";
    SelectionSort(ar, n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<ar[i]<<" ";
    }
}