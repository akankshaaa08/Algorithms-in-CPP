//T.C ==> O(2^n) for leaf nodes + O(2^n - 1) for internal nodes = O(2^n)

#include<iostream>
using namespace std;

int countSubset(int arr[], int n, int sum)
{
    if(n==0)
        return( (sum==0) ? 1 : 0 );
    else
        return countSubset(arr,n-1,sum) + countSubset(arr,n-1,sum-arr[n-1]);
}

int main()
{
    int n, sum;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];
    
    cout<<"Enter "<<n<<" values in the array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the sum: ";
    cin>>sum;

    cout<<"The number of subsets whose sum is equal to "<<sum<<" is: "<<countSubset(arr,n,sum);
}