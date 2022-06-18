#include<iostream>
#include<unordered_map>
using namespace std;


//Naive Approach | T.C ==> O(n^2) | A.S ==> O(1)
/* int spanSum(int a[], int b[], int n)
{
    int len;

    for(int i=0 ; i<n ; i++)
    {
        int sum_a = 0;
        int sum_b = 0;

        for(int j=i ; j<n ; j++)
        {
            sum_a += a[j];
            sum_b += b[j];

            if(sum_a == sum_b)
                len = max(len, j-i+1);
        }
    }

    return len;

} */

//Efficient Approach | T.C ==> O(n) | A.S ==> O(n)
int spanSum(int a[], int b[], int n )
{
    int temp[n];
    for(int i=0 ; i<n ; i++)
    {
        temp[i] = a[i] - b[i];
    }

    int len = 0, prefix_sum = 0;
    unordered_map<int,int> h;

    for(int i=0 ; i<n ; i++)
    {
       prefix_sum += temp[i];

       if(prefix_sum == 0)
            len = i+1;

        if( h.find(prefix_sum) != h.end())
            len = max(len, i - h[prefix_sum]);

        else
            h.insert({prefix_sum,i});
    }

    return len;

}

int main()
{
    int n;
    cout<<"Enter the common length of two arrays: ";
    cin>>n;

    int a[n], b[n];

    cout<<"Enter elements in 1st array: ";
    for(int i=0; i<n ; i++)
        cin>>a[i];
    
    cout<<"Enter elements in 2nd array: ";
    for(int j=0 ; j<n ; j++)
        cin>>b[j];

    cout<<"The longest common span with same sum is: "<<spanSum(a,b,n);
}

