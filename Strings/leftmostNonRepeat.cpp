#include<iostream>
using namespace std;

int check(string &str)
{
    int visited[26];
    int res = -1;
    fill(visited, visited+26, -1);

    for(int i=0 ; i<= str.length()-1 ; i++)
    {
        if(visited[str[i] - 'a'] == false)              //first occurence
            visited[str[i] - 'a'] = i;
        else
            visited[str[i] - 'a'] = -2;                     //repeated occurence
    }

    for(int i=0 ; i<26 ; i++)
        if(visited[i] > 0)
            res = min(res,visited[i]);
    
    return (res==-1) ? -1 : res;
}

int main()
{
    string str;
    cout<<"Enter you string: ";
    cin>>str;

    cout<<"Index of leftmost non repeating character is: "<<check(str);
}