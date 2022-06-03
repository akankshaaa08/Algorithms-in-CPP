//Searching a element in a row wise and column wise sorted matrix 
//T.C ==> O(R+C)


#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> ar[], int row, int col, int x)
{
    if(x<ar[0][0])                      //smallest element in the matrix
        cout<<"Element not found!";
        return 0;
    if(x>ar[row-1][col-1])                  //largest element in the matrix
        cout<<"Element not found!";
        return 0;
    
    
    int r=0, c=col-1;                   //starting from top right corner
    while(r<row && c>=0)
    {
        if(x==ar[r][c])
        {
            cout<<"Element found at position "<<r<<","<<c;
            return 0;
        }
        else if(x < ar[r][c])
            c--;                        //skipping entire column
        else
            r++;                            //skipping entire row
    }

    cout<<"Element not found!";

}

int main()
{
    int row,col,ele,x;
    cout<<"Enter number of rows and columns: ";
    cin>>row>>col;

    vector<int> ar[row];
    for(int i=0 ; i<row ; i++)
        for(int j=0 ; j<col ; j++)
        {
            cout<<"Enter a element: ";
            cin>>ele;
            ar[i].push_back(ele);
        }
    
    cout<<"Enter element to search: ";
    cin>>x;

    search(ar,row,col,x);
    
}