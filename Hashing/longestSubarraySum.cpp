#include<iostream>
#include<unordered_map>
using namespace std;


//Naive Approach: T.C ==> O(n^2), A.S ==> O(1)
/* int longestSub(int arr[], int n, int sum)
{
    int prefix_sum=0, res=0;

    for(int i=0 ; i<n ; i++)
    {
        prefix_sum += arr[i];

        for(int j=i+1; j<n ; j++)
        {
            prefix_sum += arr[j];

            if(prefix_sum == sum)
                res = max(res, j-i+1); 
        }

        prefix_sum = 0;
    }
    return res;
}*/

//Efficient Approach: T.C ==> O(n), S.C ==> O(n)
int longestSub(int arr[], int n, int sum)
{
    unordered_map<int,int> m;
    int prefix_sum = 0, res=0;

    for(int i=0 ; i<n ; i++)
    {
        prefix_sum += arr[i];

        if(prefix_sum == sum)                                   //corner case where subarray starts from index 0
            res = i+1 ;
        
        if( m.find(prefix_sum-sum) != m.end())                          //if the sum is seen before
            res = max(res, i - m[prefix_sum-sum]);

        else                                                                //if sum is seen for the first time
            m.insert({prefix_sum,i});
    }
    return res;
}

int main()
{
    int n,sum;
    cout<<"Enter size of array and sum: ";
    cin>>n>>sum;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Longest Subarray with given sum: "<<longestSub(arr,n,sum);
}