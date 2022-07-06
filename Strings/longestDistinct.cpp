#include<iostream>
#include<vector>
using namespace std;

//O(n^2) Slution

/*int sub(string &str)
{
    int n = str.length();
    int count = 0;

    for(int i=0 ; i<n ; i++)
    {
        
        vector<bool> visited(256);
        
        //generating sub-strings
        for(int j=i ; j<n ; j++)
        {
            if(visited[str[j]] == true)
                break;
            else
            {
                count = max(count,j-i+1);
                visited[str[i]] = true;
            }
        }
    
    }

    return count;
}*/

// O(n) Solution
int sub(string &str)
{
    int n = str.length(), res=0;
    vector<int> prev(256,-1);
    int i = 0;                  // i = first element index of previous window
    for(int j=0 ; j<n ; j++)
    {
        // if current element is found in the substring,
         //starting index will start after that position
        i=max(i , prev[str[j]] + 1 );
        int maxLength = j-i+1;
        res = max(res,maxLength);
        prev[str[j]] = j;
    }

    return res;
}

int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    cout<<"Length of longest subsequence of dictinct characters is: "<<sub(str);
}