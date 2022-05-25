#include<iostream>
using namespace std;

int main()
{
    string oct, res;
    cout<<"Enter a octal number: ";
    cin>>oct;

    for(int i=0; i<oct.size(); i++)
    {
        switch(oct[i])
        {
            case '0':
                res += "000";
                break;
            case '1':
                res += "001";
                break;
            case '2':
                res += "010";
                break;
            case '3':
                res += "011";
                break;
            case '4':
                res += "100";
                break;
            case '5':
                res += "101";
                break;
            case '6':
                res += "110";
                break;
            case '7':
                res += "111";
                break;
            default:
                cout<<"Invalid string: "<<oct[i];
        }
    }

    cout<<"The equivalent binary number is: "<<res;

}