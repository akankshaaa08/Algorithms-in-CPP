#include<iostream>
#include<unordered_map>
using namespace std;


//Efficient Approach | T.C ==> 
void window(int arr[], int n, int k)
{
    unordered_map <int,int> m;

    for(int i=0 ; i<k ; i++)
        m[arr[i]] += 1 ;                 //storing element's frequency as values

    cout<<m.size()<<" ";
    
    for(int i = k ; i<n ; i++)
    {
        m[arr[i-k]] -= 1;                            //decreasing frqeuncy of last window element by 1

        if(m[arr[i-k]] == 0)
            m.erase(arr[i-k]);

        m[arr[i]] += 1;                                //inserting last element of the window

        cout<<m.size()<<" ";
    }


}


//Naive Approach | T.C ==> O(( n-k)*k*k)
/*void window(int arr[], int n, int k)
{
    for(int i=0 ; i<=n-k ; i++)                     //staring of every sub array
    {
        int count=0;

        for(int j=0; j<k; j++)                              //traversing through every window
        {
            bool check = false;

            for(int x = 0; x<j ; x++)                              //check if element has been seen before
            {
                if(arr[i+j]==arr[i+x])
                {
                    check = true;
                    break;
                }
            }

            if(check==false)
                count++;
        }

        cout<<count<<" ";
    }
}*/

int main()
{
    int n,k;
    cout<<"Enter size of array and window: ";
    cin>>n>>k;
    int arr[n];

    cout<<"Enter elements in array: ";
    for(int i=0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    window(arr,n,k);
}
