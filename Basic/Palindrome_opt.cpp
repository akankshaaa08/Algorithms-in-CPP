//T.C ==> O(n/2) , where n = given number

#include<iostream>
using namespace std;

bool palindrome(int x)
{
    // if x is a negative number, it is not a palindrome
    // if x%10 == 0, the first digit should also be zero 
    if(x<0 || ( x!=0 && (x%10 ==0) ) )
            return false;

    int rev = 0;

    //Avoiding overflow by traversing anly half digits if the number
    while(x > rev)
    {
        rev = rev*10 + (x%10);
        x = x/10;
    }

    //rev contains the second half of x
    // If x has odd number of digits, dicard the middle digit before comparing with x
    // Example, if x = 12321, at the end of for loop x = 12 and reversedNum = 123
    // So, reversedNum/10 = 12, which is equal to x
    return (rev==x || x==rev/10);
}

int main()
{
    int num;
    cout<<"Enter your number: ";
    cin>>num;

    if(palindrome(num))
        cout<<"The given number is a plaindrome!";
    else
        cout<<"The given number is not a palindrome!";
}