#include<iostream>
#include<unordered_map>
using namespace std;

//Naive Approach | T.C == O(n^2), A.s ==> O(n)
/*int binarySum(int ar[], int n)
{
    int len=0;
    
    for(int i=0 ; i<n ; i++)
    {
        int count_0=0, count_1=0;                        //new subarray from another index will start

        for(int j=i ; j<n ; j++)
        {
            if(ar[j] == 1)
                count_1 ++;
                
            else 
                count_0 ++;
        
            if(count_1==count_0)
                len = max(len, count_0 + count_1);
        }

    }
    
    return len;
} */

//Efficient Approach | T.C ==> O(n), A.S ==> O(n)
int binarySum(int ar[], int n)
{
    for(int i=0 ; i<n ; i++)
        if(ar[i] == 0)
            ar[i] = -1;

    unordered_map<int,int> h;
    int prefix=0, len=0;

    for(int i=0 ; i<n ; i++)
    {
        prefix += ar[i];

        if(prefix == 0)
            len = i+1;
        
        if(h.find(prefix) != h.end())
            len = max(len, i - h[prefix]);
        
        else
            h.insert({prefix,i});
    }

    return len;
}

int main()
{
    int n,sum;
    cout<<"Enter size of array: ";
    cin>>n;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"Longest span: "<<binarySum(arr,n);
}