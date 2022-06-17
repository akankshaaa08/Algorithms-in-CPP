#include<iostream>
#include<unordered_map>
using namespace std;

//Naive Approach  | Time Complexity: O(n^2) | Space Complexity: O(n)
/*void frequency(int ar[], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        bool check = false;

        for(int j=0 ; j<i ; j++)            //checking if already appeared
            if(ar[i] == ar[j])
            {
                check = true;
                break;
            }
        
        if(check == true)
            continue;
        
        int count = 1;

        for(int k = i+1 ; k<n ; k++)            //checking duplicate elements
            if(ar[i]==ar[k])
                count++;

        cout<<ar[i]<<" "<<count<<endl;
    }
} */


// Efficient Approach | Time Complexity: O(n) | Space Complexity: O(n)
void frequency(int ar[], int n)
{
    unordered_map<int,int> h;
    
    for(int i=0; i<n ; i++)
        h[ar[i]]++;                     //if element is not present in map, insert the element as key and initiliaze value as 1

    for(auto it: h)
        cout<<it.first<<" "<<it.second<<endl;
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

    frequency(ar,n);

}