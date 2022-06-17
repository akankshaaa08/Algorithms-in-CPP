#include<iostream>
#include<unordered_set>
using namespace std;

//T.C ==> O(m+n)  | S.C ==> O(m+n)
void unionArray (int a[], int b[], int m, int n)
{
    unordered_set<int> s(a,a+m);
    s.insert(b,b+n);
    cout<<"Number of elements in the union of array is: "<<s.size();
}

int main()
{
     int m,n;
    cout<<"Enter size of two arrays: ";
    cin>>m>>n;
    int a[m], b[n];

    cout<<"Enter elements in Array 1: ";
    for(int i=0 ; i<m ; i++)
        cin>>a[i];

    cout<<"Enter elements in Array 2: ";
    for(int i=0; i<n ; i++)
        cin>>b[i];

    unionArray(a,b,n,m);
}