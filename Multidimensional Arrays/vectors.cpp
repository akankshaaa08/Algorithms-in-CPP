#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> ar[], int row)
{
    cout<<"The values in 2D array are: ";
    for(int i=0 ; i<row; i++)
    {
        for(int j=0 ; j<ar[i].size(); j++)
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

    vector <int> ar[row];               // creating (#row) vectors 
    
    for(int i=0 ; i<row; i++)                   //traversing through the elemts of array
    {
        for(int j=0 ; j<col ; j++)          //traversing through each row/element of the defined array
        {
            ar[i].push_back(i);
        }
    }   

    print(ar,row);


}