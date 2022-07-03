#include<iostream>
using namespace std;

//Naive Approach
/*
int check(string & str)
{
    int count[26] = {0};

    for(int i=0 ; i<str.length() ; i++)
    {
        count[str[i] - 'a']++;
    }

    for(int i=0 ; i<str.length() ; i++)
        if(count[str[i] - 'a'] > 1)
            return i;

    return -1;
}*/

//Efficient Approach
int check(string & str)
{
    int res = -1;
    bool visited[26];
    fill(visited, visited+26, false);

    for(int i = str.length()-1 ; i>=0 ; i--)
    {
        if(visited[str[i] - 'a'] == false)                 //first occurence
            visited[str[i] - 'a'] = true;
        
        else
            res = i;
    }

    return res;
}

int main()
{
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    cout<<check(str);

}