#include<iostream>
#include<array>
using namespace std;

int main()
{
    //initializing the array; static nature
    array<int,4> arr = {4,7,2,6};

    //determining array size
    int size = arr.size();

    //iterating through array
    cout<<"The array is: ";
    for(int i=0 ; i<size ; i++)
    {
        cout<<arr[i]<<" ";
    }

    //Retrieving element from a specific index
    cout<<"\nElement at index 2: "<<arr.at(2)<<endl;

    //checking array is empty or not
    cout<<"Is array empty or not: "<<arr.empty()<<endl;

    //Retrieving first element of the array
    cout<<"First Element: "<<arr.front()<<endl;

    //Retrieving last element of the array
    cout<<"First Element: "<<arr.back()<<endl;

}