/*
Assumption: The matrix is row wise sorted
T.C ==> O(r * log(max-min) * log c)
*/

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int median(vector<int> ar[], int row, int col)
{
    int min = ar[0][0];                 //the smallest element will be in first col
    int max = ar[0][col-1];                 //the largest element will be in last col

    for(int i=1 ; i<row ; i++)
    {
        if(ar[i][0] < min)                  //finding smallest element in first col
            min = ar[i][0];     
        if(ar[i][col-1] > max)                      //finding largest element in last col
            max = ar[i][col-1];
    }

    int midPos = ((row*col+1)/2);                //finding position of median element in the entire array

    while(min<max)
    {
        int median_element = (min+max)/2;           //calculating median value
        int median_pos = 0;                                    // for storing position of median value

        for(int i=0; i<row ; i++)
            median_pos += upper_bound(ar[i], ar[i]+col, median_element) - ar[i] ;                 //calculating number of elements smaller than or equal to calculated median value
                                                                                                        // i.e median position
                                                                                                                //desired value = midPos
        
        if (median_pos < midPos)                            //decreasing the search space like in binary search
            min = median_pos+1;
        
        else
            max = median_pos;                                              // for cases when median value is not present in array
        
    }

    cout<<"Median value of array is: "<<min;                 // in last iteration, min=max

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
    
    median(ar,row,col);
    
}