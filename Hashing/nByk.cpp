#include<iostream>
#include<unordered_map>
using namespace std;


//Efficient Approach | T.C ==> O(n)
void occurences(int arr[], int n, int k)
{
    unordered_map <int,int> m;

    for(int i=0 ; i<n ; i++)
        m[arr[i]] += 1 ;                 //storing element's frequency as values
    
    for(auto it: m)
        if(it.second>n/k)
            cout<<it.first<<" ";

}


//Naive Approach | T.C ==> O(n log n)
/* void occurences(int arr[], int n, int k)
{
    sort(arr,arr+n);                                //takes O(n log(n)) time
    
    for(int i=1 ; i<n ; i++)
    {
        int count = 1;
        while(i<n && arr[i]==arr[i-1])                  //takes O(n) time
            count++;
        if(count>n/k)
            cout<<arr[i]<<" ";
    }

} */

int main()
{
    int n,k;
    cout<<"Enter size of array and k: ";
    cin>>n>>k;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    occurences(arr,n,k);
}
