//T.C ==> O(n)

#include<iostream>
using namespace std;

int LSearch(int ar[], int num, int key)
{
    for(int i=0 ; i<num ; i++)
    {
        if(key == ar[i])
            return i;
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

    int result = LSearch(ar, n, key);

    (result == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
}
