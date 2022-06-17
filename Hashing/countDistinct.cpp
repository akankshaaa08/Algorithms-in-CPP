#include<iostream>
#include<unordered_set>
using namespace std;

//Naive Approach  | Time Complexity: O(n^2) | Space Complexity: O(1)
/* void countDistinct(int ar[], int n)
{
    int res = 0;

    for(int i=0 ; i<n ; i++)
    {
        int count = 0;

        for(int j= 0 ; j<i ; j++)               //checks if number has already appeared
        {
            if(ar[i] == ar[j])
            {
                count++;
                break;
            }
        }

        if(count==0)
            res++;
    }

    cout<<"Number of distinct elements present: "<<res;
} */


// Efficient Approach | Time Complexity: O(n) | Space Complexity: O(n)
void countDistinct (int ar[], int n)
{
    unordered_set<int> s(ar, ar+n);                                    //set stores distinct elements only
    cout<<"Number of distinct elements present: "<<s.size();
}



int main()
{
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int ar[n];

    for(int i=0; i<n ; i++)
    {
        cin>>ar[i];
    }

    countDistinct(ar,n);

}