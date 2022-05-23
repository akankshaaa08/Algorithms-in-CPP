#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(4);
    v.push_back(6);
    v.push_back(8);
    v.push_back(10);
    v.push_back(12);

    cout<<"\nIs 5 present: "<<binary_search(v.begin(),v.end(),5)<<endl;

    // cout<<"lower bound: "<<binary_search(v.begin(),v.end(),6) - v.begin()<<endl;
     
    // cout<<"upper bound: "<<binary_search(v.begin(),v.end(),6) - v.begin() <<endl;

    cout<<"Initial Vector: ";
    for(int i: v)
        cout<<i<<" ";
 
    cout<<"\nReversing the Vector: ";
    reverse(v.begin(),v.end());
    for(int i: v)
        cout<<i<<" ";

    cout<<"\nRotating the vector about 2 elements: ";
    rotate(v.begin(), v.begin()+2 , v.end());
    for(int i: v)
        cout<<i<<" ";

    cout<<"\nSorting the array: ";
    sort(v.begin(), v.end());
    for(int i: v)
        cout<<i<<" ";    

}