//T.C ==> O(log n)

#include<iostream>
using namespace std;

int BSearch(int ar[], int low, int high,  int key)
{
    while(low <= high)
    {
        int mid = low + (high-low)/2;           // To avoid any overflow  // if duplicate values are present then the index of first occurence is returned beacuse, by default division gives floor values
        
        if(key==ar[mid])
            return mid;
        if (key<ar[mid])
            high = mid-1;
        else
            low = mid+1;      
    } 

    return -1;
}

int main()
{
    int n , key;
    
    cout<<"Enter the number of values in the array: ";
    cin>>n;
    
    cout<<"Enter "<<n<<" values in the array: ";
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    cout<<"Enter the number to be found: ";
    cin>>key;

    int result = BSearch(ar, 0 , n-1, key);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
}