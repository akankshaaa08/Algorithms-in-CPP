#include<iostream>
#include<unordered_map>
using namespace std;


//Efficient Approach | T.C ==> O(nk)
void occur(int arr[], int n, int k)
{
    unordered_map <int,int> m;

    for(int i=0 ; i<n ; i++)
    {
        if(m.find(arr[i]) != m.end())                   //if m already contains that element
            m[arr[i]] ++;

        else if(m.size() < (k-1))                                  //if m does not contain element and space is not full
            m[arr[i]] = 1;

        else
        {
            for(auto it: m)
            {
                it.second --;
                if(it.second == 0)
                    m.erase(it.first);
            }
        }
    }

    for(auto x:m)
    {
        int count=0;
        for(int i=0;i<n;i++)
        {
            if(x.first==arr[i])
                count++;
        }
        
        if(count>n/k)
            cout<<x.first<<" ";
    }
}


int main()
{
    int n,k;
    cout<<"Enter size of array and window: ";
    cin>>n>>k;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    occur(arr,n,k);
}
