#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int>> &ar)
{
    cout<<"The values in 2D array are: ";
    
    for(int i=0 ; i<ar.size(); i++)
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

    vector <vector <int>> ar;           //rows are dynamic
    for(int i=0 ; i<row; i++)
    {
        vector <int> v;

        for(int j=0 ; j<col ; j++)
            v.push_back(i);                 //inserting elements in one row

        ar.push_back(v);                        //inserting elements in a row of array
    }   

    print(ar);


}