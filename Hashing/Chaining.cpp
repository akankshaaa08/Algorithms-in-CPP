/*
 HASHING IMPLEMENTATION USING LINKED LIST
 T.C ==> for inserting, deletion, searching = O(l)
 where l = chain length 
*/

#include<iostream>
#include <list>
using namespace std;

struct myHash
{
    int bucket;
    list <int> *table;
   
    myHash(int size)
    {
        bucket = size;
        table = new list<int> [bucket];         //linked list of size 'bucket'
    }

    void insert(int val)
    {
        int i = val % bucket;              //hash function = val % bucket
                                                //creating index

        table[i].push_back(val);                    //pushing values in hash table        
    }

    void remove(int val)
    {
        int i = val % bucket;           //finding index
        table[i].remove(val);                   //deleting a value
    }

    bool search(int val)
    {
        int i = val % bucket;
        for(auto x: table[i])           //traversing i(th) index of the table
            if(x==val)
                return true;
        return false;
    }

};

int main()
{
    int n;
    cout<<"Enter size of hash table: ";
    cin>>n;

    myHash mh(n);
    mh.insert(10);
    mh.insert(20);
    mh.insert(15);
    mh.insert(7);
    cout << mh.search(10) << endl;
    mh.remove(15);
    cout << mh.search(15);

}