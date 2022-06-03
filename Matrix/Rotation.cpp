#include<iostream>
#include<vector>
using namespace std;

void Rotate(vector<int>ar[], int row, int col)
{
    cout<<"Rotating Matrix 90 degree AntiClock wise: "<<endl;
	for(int i=row-1 ; i>=0 ; i--)
		for(int j=0 ; j<col ; j++)
			cout<<ar[j][i]<<" ";

	cout<<"\nRotating Matrix 90 degree Clock wise: "<<endl;
	for(int i=0 ; i<row ; i++)
		for(int j=col-1 ; j>=0 ; j--)
			cout<<ar[j][i]<<" ";
       
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

    Rotate(ar, row,col);
}


