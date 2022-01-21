#include<iostream>
using namespace std;

//---------NAIVE APPROACH------
//T.C --> O(total bits in the number)
int countSetBits_naive (int num)
{
    int count =0;
    while(num>0)
    {
        if(num&1 !=0)
            count++;
        num = num >>1;
    }

    return count;
}


//------------BRIAN KERNINGAM'S ALGORITHM------------
//T.C --> O(total number of SET bits)
//Basic Idea: If we subtract 1 from any number, the rightmost SET bit becomes 0 and rest trailing bits become 1
//Example: 8= 1000, 7= 0111
int countSetBits_brian(int num)
{
    int count = 0;
    while(num>0)
    {
        num = (num & (num-1));
        count++;
    }

    return count;
}


//-------------------LOOK-UP TABLE------------------
//T.C --> O(1), S.C --> O(255)
int countSetBits_lookup(int num)
{
    int table[256];      // to store numbers upto 8 bits, from 0 to (2^8 -1)
    table[0] = 0;
    
    //creating lookup table
    for(int i=1 ; i<256 ; i++)
    {
        table[i] = (i & 1) + table[i/2];                // table[i] represents total SET bits in number i
    }
    
    
    //Counting SET bits in groups of 8 bits
    int res = table[num & 0xff];            //till 8 bits
    num=num>>8;

    res = res + table[num & 0xff];          // 8-16 bits
    num=num>>8;

    res = res + table[num & 0xff];          // 16-24 bits
    num=num>>8;

    res = res + table[num & 0xff];              // 32 bits

    return res;

}

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    cout<<"The number of SET bits in "<<num<<" is equal to: "<<countSetBits_lookup(num);
}
