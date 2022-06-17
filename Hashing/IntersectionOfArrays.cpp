#include<iostream>
#include<unordered_set>
using namespace std;

/* // Naive Approach  | T.C ==> O(m*(m+n))
void intersection(int a[], int b[], int m, int n)
{
    int res = 0;

    for(int i=0 ; i<m ; i++)
    {
        bool check = false;
        for(int j=0 ; j<i ; j++)
        {
            if(a[i]==a[j])
            {
                check = true;
                break;
            }
        }
        
        if(check==true)
            continue;

        for(int k=0 ; k<n ; k++)
            if(a[i]==b[k])
            {
                res++;
                break;
            }
    }

    cout<<"Total common elements: "<<res; 
} */

//Efficient Approach | T.C ==>O(m+n)  | S.C ==> O(m)
void intersection(int a[], int b[], int m, int n)
{
    int res = 0;
    unordered_set<int> s(a,a+m);    

    for(int i=0 ; i<n ; i++)
    {
        if( s.find(b[i]) != s.end() )
        {
            res++;
            s.erase(b[i]);
        }
    }

    cout<<"Total common elements: "<<res;
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

    intersection(a,b,n,m);
}