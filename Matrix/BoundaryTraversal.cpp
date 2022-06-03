#include<iostream>
#include<vector>
using namespace std;

void boundary(vector<int> arr[], int row, int col)
{
    
    if(row==1)
    {
        for(int i=0 ; i<col; i++)
            cout<<arr[0][i]<<" ";
    }

    else if (col==1)
    {
        for(int i=0; i<row ; i++)
            cout<<arr[i][0]<<" ";
    }

    else
    {
        for(int i=0 ; i<col ; i++)              //top boundary
            cout<<arr[0][i]<<" ";
        
        for(int i=1 ; i<row ; i++)                  //right boundary
            cout<<arr[i][col-1]<<" ";
        
        for(int i=col-2; i>=0 ; i--)                    //bottom boundary
            cout<<arr[row-1][i]<<" ";

        for(int i=row-2 ; i>=1 ; i--)                       //left boundary
            cout<<arr[i][0]<<" ";
    }
}

int main()
{
    int row, col, ele;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    vector<int> arr[row];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter a element: ";
            cin>>ele;
            arr[i].push_back(ele);
        }
    }

    boundary(arr,row,col);
}