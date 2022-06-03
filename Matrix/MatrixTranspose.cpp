#include<iostream>
#include<vector>
using namespace std;

void transpose(vector<int> arr[], int row,int col)
{                 
    for(int i=0 ; i<col ; i++)
        for(int j=0 ; j<row; j++)
            cout<<arr[j][i]<<" ";
}

int main()
{
    int row,col,ele;

    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    vector<int> arr[row];

    for(int i=0 ; i<row; i++)
    {
        for(int j=0; j<col ; j++)
        {
            cout<<"Enter a element: ";
            cin>>ele;

            arr[i].push_back(ele);
        }
    }

    transpose(arr,row,col);
}