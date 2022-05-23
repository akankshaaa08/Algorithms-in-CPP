#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout<<"First element: "<<q.front()<<endl;
    q.pop();
    cout<<"1 element popped!"<<endl;
    cout<<"First element: "<<q.front()<<endl;

    cout<<"size of queue: "<<q.size();
}