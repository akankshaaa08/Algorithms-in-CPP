//T.C ==> O(n log(n) )

 #include<iostream>
using namespace std;

void merge(int *ar, int l, int m, int r)
{
    int i=l;             //starting index of left subarray;
    int j=m+1;              //starting index of right subarray
    int k=0;                    //starting index of temporary array

    int temp[r+1];

    while(i<=m && j<=r)
    {
        if(ar[i]<=ar[j])
        {
            temp[k]=ar[i];              //if the value in left sub-array is smaller, push it to temp
            k++; 
            i++;
        }
        else
        {
            temp[k]=ar[j];                      //if the value in right sub-array is smaller, push it to temp
            k++;
            j++;
        }
    }

    while(i<=m)              //for remaining elements in left sub-array
    {
        temp[k]=ar[i];
        k++; 
        i++;
    }

    while(j<=r)                  //for remaining elements in right sub-array
    {
        temp[k]=ar[j];
        k++; 
        j++;
    }

    for(int s=l ; s<=r ; s++)            //copying values to the original array
    {
        ar[s]=temp[s];
    }

}

void MergeSort(int ar[], int l, int r)
{
    while(l<r)
    {
        int m = (l+r)/2;

        //Split the data into two halves
        MergeSort(ar,l,m);
        MergeSort(ar,m+1,r);

        //merge them to get sorted output
        merge(ar,l,m,r);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements in the array: ";
    cin>>n;
    int ar[n];
    cout<<"Enter "<<n<<" elements in the array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }
    
    cout<<"Before Sorting: ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<ar[i]<<" ";
    }

    MergeSort(ar, 0, n-1);

    cout<<"\nAfter Sorting: ";
    for(int i=0 ; i<n ; i++)
    {
        cout<<ar[i]<<" ";
    }

}
