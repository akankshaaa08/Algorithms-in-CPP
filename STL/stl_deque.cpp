 #include<iostream>
 #include<deque>
 using namespace std;

 int main()
 {
    deque<int> d;

    //inserting element at back
    d.push_back(4);
    d.push_back(3);

    //inserting element at front
    d.push_front(2);
    d.push_front(1);

    cout<<"The deque is: ";
    for(int i:d)
    { cout<<i<<" "; }

    //poping the first element
    cout<<"\ndeque after poping front element: ";
    d.pop_front();
    for(int i:d)
    { cout<<i<<" "; }


    //poping the last element
    cout<<"\ndeque after poping back element: ";
    d.pop_back();
    for(int i:d)
    { cout<<i<<" "; }

    //accessing random values
    cout<<"\nElement at index 1: "<<d.at(1);

    //accessing front value
    cout<<"\nfront: "<<d.front();

    //accessing back value
    cout<<"\nback: "<<d.back();

    //clearing the deque
    cout<<"\nIs deque empty: "<<d.empty();
    d.erase(d.begin(),d.begin()+2);
    cout<<"\nIs deque empty: "<<d.empty();

 } 