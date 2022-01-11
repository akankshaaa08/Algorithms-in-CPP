#include<iostream>
using namespace std;

//-------ITERATIVE APPROACH-----
//T.C ==> O(N), A.S ==> O(1)
int fact_iterative(int num)
{
    int fact =1;
    for(int i=2 ; i<=num ; i++)
    {
        fact = fact * i;
    }

    return fact;
}


//-------ITERATIVE APPROACH-----
//T.C ==> O(N), A.S ==> O(N)
//T(N) = T(N-1) + O(1)
int fact_recursive(int num)
{
    if(num==1)
     return 1;
    return num * fact_recursive(num-1);
}

int main()
{
    int num;
    cout<<"Enter the number: ";
    cin>>num;

    cout<<"The factorial of the given number is: "<<fact_iterative(num);
}