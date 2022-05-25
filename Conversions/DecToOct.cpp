#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cout<<"Enter a decimal number: ";
    cin>>n;
    cout<<"The equivalent octal number is: ";

    while(n!=0)
    {
        v.push_back(n%8);
        n /= 8;
    }

    reverse(v.begin(), v.end());
    for(int i: v)
        cout<<i;
}