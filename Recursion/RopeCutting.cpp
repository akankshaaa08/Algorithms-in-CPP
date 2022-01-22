#include<iostream>
using namespace std;

//T.C --> O(3^n)
int ropeCut(int len, int size1, int size2, int size3)
{
    if(len == 0)
        return 0;
    if(len <= -1)
        return -1;

    int res = max( ropeCut(len-size1 , size1 , size2 , size3) , 
              max( ropeCut(len-size2, size1 , size2 , size3), 
              ropeCut(len-size3 , size1 , size2 , size3) ));

    if(res==-1)
        return -1;
    
    return res+1;
}

int main()
{
    int ropeLength , size1 , size2 , size3;
    cout<<"Enter the length of rope: ";
    cin>>ropeLength;
    cout<<"Enter the allowed sizes of the rope pieces: ";
    cin>>size1>>size2>>size3;
    cout<<"The maximum number of pieces after cutting the rope is: "<<ropeCut(ropeLength,size1,size2,size3);
}