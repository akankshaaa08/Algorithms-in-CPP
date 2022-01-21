#include<iostream>
using namespace std;

void forward_count(int num)
{
    if(num<0)
        return;
    forward_count(num-1);
    cout<<num<<" ";
}

void backward_count(int num)
{
    if (num<0)
        return;
    cout<<num<<" ";
    backward_count(num-1);                      //Tail Recursion //The parent function has no code to execute after the execution of child function
}


int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"Printing numbers from 1 to n:"<<endl;
    forward_count(num);
    cout<<"\n\nPrinting numbers from n to 1:"<<endl;
    backward_count(num);

}