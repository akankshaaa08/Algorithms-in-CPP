#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    
    vector<int> v;
    cout<<"The equivalent binary number is: ";

    while(n>0)
    {
        v.push_back(n%2);
        n = n/2;
    }

    /**
     * Alternate: store output in array and traverse backwards for displaying values
    */
   
    reverse(v.begin(),v.end());
    for(int i: v)
     cout<<i;
}