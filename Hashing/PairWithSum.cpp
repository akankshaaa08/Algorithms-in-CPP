#include<iostream>
#include<unordered_set>
using namespace std;

//Total number of pairs: n(n-1)/2
//every element can be paired n-1 elements. Division by 2 for duplicate elements

//Naive Method | T.C ==> O(n^2)  | A.S ==> O(1)
/* bool findSum (int arr[], int n, int sum)
{
    for(int i=0 ; i<n ; i++)
    {
        for(int j=i+1 ; j<n ; j++)
            if( arr[i]+arr[j] == sum)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
                return true;
            }
    }

    return false;
} */

//Efficient Approach | T.C ==> O(n)  | S.C ==> O(n)
bool findSum (int arr[], int n, int sum)
{
    unordered_set<int> h;

    for(int i=0 ; i<n ; i++)
    {
        if( h.find(sum-arr[i]) != h.end())
            return true;
        else
            h.insert(arr[i]);
    }
    return false;
}

int main()
{
    int n , sum;
    cout<<"Enter size of array and value of sum: ";
    cin>>n>>sum;

    int arr[n];
    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<findSum(arr,n,sum);
}
