#include<iostream>
#include<vector>
using namespace std;

void spiral(vector<int> arr[], int row , int col)
{
    int top = 0;                //initializing index for pointers
    int right = col-1;
    int bottom = row-1;
    int left = 0;

    while(top<=bottom && left<=right)
    {
        for(int i = left; i<=right ; i++)           //top 
            cout<<arr[top][i]<<" ";
        
        top++;

        for(int i=top; i<=bottom ; i++)             //left
            cout<<arr[i][right]<<" "; //bottom
        
        right--;

        if(top <= bottom)
        {
            for(int i=right; i>=left ; i--)             //bottom
                cout<<arr[bottom][i]<<" ";  
        
            bottom--;
        }

        if(left<=right)
        {
            for(int i=bottom ; i>=top ; i--)           //right
                cout<<arr[i][left]<<" ";

            left++;
        }
       
    }
}

int main()
{
    int row,col,ele;
    cout<<"Enter the number of rows and columns: ";
    cin>>row>>col;

    vector<int> arr[row];

    for(int i=0 ; i<row ; i++)
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter the element: ";
            cin>>ele;

            arr[i].push_back(ele);
        }
    
    spiral(arr,row,col);
}