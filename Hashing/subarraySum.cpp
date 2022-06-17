#include<iostream>
#include<unordered_set>
using namespace std;

//T.C ==> O(n^2)
/*bool subArray_Sum(int arr[], int n, int sum)
{
    int prefix_sum = 0;

    for(int i=0 ; i<n ; i++)
    {
        prefix_sum += arr[i];

        for(int j=i+1 ; j<n ; j++)
        {
            prefix_sum += arr[j];
            if(prefix_sum == sum)
                return true;
        }

        prefix_sum = 0;
    }
    return false;
}*/

//Efficient Solution | T.C ==> O(n) | S.C ==> O(n)
bool subArray_Sum(int arr[], int n, int sum)
{
    unordered_set<int> h;
    int prefix_sum = 0;
    for(int i=0 ; i<n ; i++)
    {
        prefix_sum += arr[i];

        if(prefix_sum == sum)
            return true;  
        if( h.find(prefix_sum-sum) != h.end() )                 //if sum=0, h.find(prefix_sum)
            return true;
        else
            h.insert(prefix_sum);
    }
    return false;
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

    cout<<subArray_Sum(arr,n,sum);
}