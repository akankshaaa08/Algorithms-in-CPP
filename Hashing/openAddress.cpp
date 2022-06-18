//OPEN ADDRESSING USING LINEAR PROBING

#include<iostream>
#include<list>
using namespace std;

struct myHash
{
    int bucket, cap = 0;
    int *arr;

    myHash(int size)            //for initialization
    {
        bucket = size;
        for(int i=0; i<bucket ; i++)
            arr[i]= -1;
    }

    int hash(int key)               //computing hash values
    {
        return key % bucket;
    }

    bool insert(int key)                
    {
        if(cap == (bucket-1))           //table is full
            return false; 

        int h = hash(key);
        
        while(arr[h] != -1 && arr[h] != -2 && arr[h] != key)            //finding an empty slot
            h = (h+1) % bucket;
        

        if(arr[h]==key)
            return false;                           //no duplicate values allowed in hash table
        
        else
        {
            arr[h]=key;
            cap++;
            return true;
        }

    }

    bool erase(int key)
    {
        int h = hash(key);
        int offset = h;

        while(arr[h] != -1)
        {
            if(arr[h] == key)
            {
                arr[h] = -2;                    //makrking cell as deleted
                return true;
            }           
            
            h = (h+1)%bucket;                       //linearly probing to next cell

            if(h==offset)                       //came back to the original position
                return false;

        }
        return false;
    }

    bool search(int key)
    {
        int h = hash(key);
        int offset = h;
        
        while(arr[offset] != -1)                    //empty slots are -1
        {
            if(arr[offset] == key)
                return true;
            offset = (offset+1)%bucket;         // '%bucket' to keep the value in table range
            
            if(offset == h)                     //came back to the original position
                return false;
        }
        return false;
    }

};

int main()
{
    int n;
    cout<<"Enter the size of Hash Table: ";
    cin>>n;

    myHash mh(n);
    cout<<mh.insert(49)<<endl;
    cout<<mh.insert(56)<<endl;
    cout<<mh.insert(72)<<endl;
    cout<<mh.search(56)<<endl;
    cout<<mh.erase(56)<<endl;
    cout<<mh.search(56)<<endl; 

}