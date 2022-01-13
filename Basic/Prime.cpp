/*
Optimal Method;
If a number x divides the given number, then
there is always a pair of x such that, it will also divide the given number
The numbers are in two different halves
Therefore loop will go from 2 to root(number)

//Prime Numbers: 2,3    5,7   11,13    17,19     23,31    37
Time Complexity: O(root n)
*/
#include<iostream>
using namespace std;

int Bool(int n)
{
    if(n==1)                        //corner case 1
		return false;

	if(n==2 || n==3)                //corner case 2
		return true;

	if(n%2==0 || n%3==0)            //corner case 3
		return false;

	for(int i=5; i*i<=n; i=i+6)
	{
		if(n % i == 0 || n % (i + 2) == 0)
			return false; 
	}

	return true;   
}

int main()
{
    int num, count=2;
    cout<<"0 = False, 1 = True";
    cout<<"\nEnter your number: ";
    cin>>num;
    cout<<"Is "<<num<<" a prime number: "<<Bool(num);
    return 0;
}

/*
Naive Approach
Time Complexity: O(n-2) = O(n)
  for(int i=2 ; i<num ; i++)
    {
        if(num%i==0)
        {
            cout<<"Not a Prime Number";
            count++;
            break;
        }
    }

    if(num==0 || num==1)
        cout<<"Neither prime nor composite";
    
    else if(count==2)
        cout<<"Prime Number";

Optimal 1

if(num==1 || num==0)
        return false;
    for(int i=2 ; i<num ; i++)
    {
        if(num%i==0)
            return false;
    }
    return true;  

*/