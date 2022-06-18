#include<iostream>
#include<unordered_set>
using namespace std;

int longestSeq(int arr[], int n)
{
    int len = 0 ;
    unordered_set<int> h (arr,arr+n);

    for(auto x: h)
    {
        if( h.find(x-1) == h.end() )           //1st in the subarray
        {
            int curr = 1;

            while(h.find(x+curr) != h.end())
                curr ++;

            len = max(len,curr);
        }
    }

    return len;
}

int main()
{
    int n;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Longest Consecutive Subsequence is: "<<longestSeq(arr,n);
}
