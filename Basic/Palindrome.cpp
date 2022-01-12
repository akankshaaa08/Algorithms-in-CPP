//TC ==> O(n/2) ==> O(n)

#include<iostream>
using namespace std;

//For Strings
int palindrome_strings(string s, int len)
{
    int count =0;
    for(int i=0 ; i<len/2; i++)
    {
        if(s[i] != s[len-1-i])
        {
           cout<<"The string is not a Panlindrome!";
           count++;
           break;
        }
    }

    return count;
}


//For Numbers
int palindrome_numbers(int num, int len)
{
    int temp = num;
    int last_digit, rev=0;
    
    while(temp!=0)
    {
        last_digit=temp%10;                 //returns the last digit
        rev = rev*10 + last_digit;              //creating reverse of number
        temp = temp/10  ;                                   //removing last digit 
    }

    if(rev==num)
        cout<<"The number is a Panlindrome! ";
    else    
        cout<<"The number is not a Panlindrome!";

}

int main()
{
    string s;
    cout<<"Enter your string: ";
    cin>>s;

    int len = s.length();

    int check = palindrome_strings(s,len);

    if(check == 0)
        cout<<"The string is Panlindrome!";
}