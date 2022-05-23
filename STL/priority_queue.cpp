#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    maxi.push(1);
    maxi.push(2);
    maxi.push(5);
    maxi.push(3);
    maxi.push(7);

    mini.push(1);
    mini.push(2);
    mini.push(5);
    mini.push(3);
    mini.push(7);

    cout<<"Max Heap: ";
    int n = maxi.size();
    for(int i=0; i<n; i++)
    {
        cout<<maxi.top()<<" ";
        maxi.pop();            //retrieves only maximum element
    }

    cout<<"\nMin Heap: ";
    int m = mini.size();
    for(int i=0; i<n; i++)
    {
        cout<<mini.top()<<" ";
        mini.pop();             //retrieves only minimum element
    }

    cout<<"\nempty or not: "<<mini.empty();
}
