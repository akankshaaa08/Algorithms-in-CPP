#include<iostream>
#include<cmath>
using namespace std;


//T.C --> O(2^len * len)
void getPowerSet(string s)
{
    int len=s.length();
    int powSet = pow(2,len);            //Number of elements in the power set of string with length n is 2^n

    for(int counter=0 ; counter<powSet ; counter++)
    {
        for(int j=0 ; j<len ; j++)              //traversing through string
        {
            if( (counter & (1<<j)) !=0)                 //checking SET bit in each bit of counter // 000 (0) for first bit, 010 (2) for second bit // 100 (4) for third bit 
                cout<<s[j];
        }
        cout<<"\n";
    }

    cout<<" "<<endl;                    //for empty set
}

int main()
{
    string s;
    cout<<"Enter your string: ";
    cin>>s;

    cout<<"The power set of the string "<<s<<" is: ";
    getPowerSet(s);
}


/