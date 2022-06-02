#include<iostream>
using namespace std;

void print(int **ar, int row, int col)
{
    cout<<"The values in 2D array are: ";
    for(int i=0 ; i<row; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<ar[i][j]<<" ";
        }
    }
}

int main()
{
    int row, col;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    int **arr;                  //initializing a double pointer (dp)
    arr = new int *[row];           // dp pointing towards a array of pointers

    for(int i=0 ; i<row; i++)               //traversing through array of pointers
    {
        arr[i] = new int [col];             //array of pointers pointing towards actual data array
        
        for(int j=0 ; j<col ; j++)              //traversing through data array
        {
            arr[i][j]=i;
        }
    }

    print(arr,row,col);
}