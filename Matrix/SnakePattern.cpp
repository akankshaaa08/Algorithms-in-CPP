#include<iostream>
#include<vector>
using namespace std;

void Snake(vector<int>ar[], int row)
{
    for(int i=0 ; i<row ; i++)
    {
        if(i%2==0)
        {
            for(int j=0 ; j<ar[i].size(); j++)                  //traversing left to right
                cout<<ar[i][j]<<" ";
        }

        else
        {
            for(int j=ar[i].size()-1 ; j>=0;  j--)                  //traversing right to left
                cout<<ar[i][j]<<" ";
        }
    }
}


int main()
{
    int row, col, ele;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    vector<int> ar[row];

    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter a element in the array: ";
            cin>>ele;
            ar[i].push_back(ele);
        }
    }

    Snake(ar, row);
}


