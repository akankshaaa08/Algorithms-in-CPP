/*
Total number of movements: (2^n) -1
Time Complexity: T(n) = 2T(n-1) +1
*/

#include <iostream>
using namespace std;


void ToH(int n, char A, char B, char C) 
{ 
    if (n == 1) 
    { 
        cout<<"Move 1 from " <<  A << " to " << C << endl; 
        return; 
    } 
    
    ToH(n-1, A, C, B); 			// A=source, C=Auxillary, B=Destination
    cout<<"Move " << n << " from " <<  A << " to " << C << endl; 
    ToH(n-1, B, A, C); 					// B=source, A=Auxillary, C=Destination
}
	
int main() 
{	
    int n;
    cout<<"Enter number of disc: ";
    cin>>n;
    ToH(n, 'A', 'B', 'C'); 
    return 0;
}
