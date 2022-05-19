//T.C ==> O(n^2)

#include<iostream>
using namespace std;

void InsertionSort(int ar[], int n)
{
    for(int i=1 ; i<n ; i++)
    {
        int key = ar[i];
        int j = i-1;

        while(j>=0 && (ar[j] > key) )
        {
            ar[j+1] = ar[j];                    //if current value > key , shift current value to 1 position ahead
            j = j-1;
        }

        ar[j+1] = key;
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
    InsertionSort(ar, n);
    for(int i=0 ; i<n ; i++)
    {
        cout<<ar[i]<<" ";
    }
}
