
/* Problem description: There are n people standing in a circle. 
The kth person get killed in every iteration, in a circular manner.
Find the position of survivor. */ 


#include<iostream>
using namespace std;

//T.C ==> O(n)
int jos(int n, int k)
{
    if(n==1)
        return 0;
    else 
        return ( (jos(n-1,k) +k ) % n );
}

int main()
{
    int start, n, k;
    cout<<"Enter the starting position, total positions and position to be killed: ";
    cin>>start>>n>>k;

    cout<<"The survivor will be at position "<<jos(n,k)+start;
}