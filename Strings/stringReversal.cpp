#include<iostream>
#include <cstring>
#include<string>
using namespace std;

void reverseWord(char str[], int low, int high)
{
    while(low<=high)
    {
        swap(str[low],str[high]);
        low++;
        high--;
    }
}

void reversed(char str[], int len)
{
    int start=0;
    
    //traversing every letter before the space 
    for(int end=0 ; end<len ; end++)
    {
        if(str[end] == ' ')             
        {
            reverseWord(str,start,end-1);
            start=end+1;                    //for starting next word
        }
    }

    //for reversing last word, which will be after last space
    reverseWord(str,start,len-1);

    //reversing back whole string
    reverseWord(str,0,len-1);

    for(int i=0; i<len ; i++)
        cout<<str[i];
}

int main()
{
    string s;
    cout<<"Enter your sting: ";
    getline(cin,s);

    //converting string to character array, as string is immutable
    int len = s.length();
    char str[len];
    strcpy(str, s.c_str());
    
    cout<<"Reversed string is: ";
    reversed(str,len);
}