#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //initializing a vector
    vector<int> v;
      
    //printing capacities
    cout<<"Capacity with 0 elements: "<<v.capacity()<<endl;

    //inserting elements in the vector (in last position)
    v.push_back(10);
    cout<<"Capacity with 1 elements: "<<v.capacity()<<endl;

    v.push_back(20);
    cout<<"Capacity with 2 elements: "<<v.capacity()<<endl;

    //increase vector size by 2 times 
    v.push_back(30);
    cout<<"Capacity with 3 elements: "<<v.capacity()<<endl;

    v.push_back(40);
    cout<<"Capacity with 4 elements: "<<v.capacity()<<endl;

    //increase vector siz e by 2 times 
    v.push_back(50);
    cout<<"Capacity with 5 elements: "<<v.capacity()<<endl;

    //determining size of vector
    cout<<"\nSize of vector: "<<v.size()<<endl;

    //printing vector
    for(int i=0 ; i<v.size(); i++)
    { cout<<v[i]<<" ";}

    //retreiving information from a specifix index
    cout<<"\nelement at index 3: "<<v.at(3)<<endl;

    //printing first element
    cout<<"first element: "<<v.front()<<endl;

    //printing last element
    cout<<"last element: "<<v.back()<<endl;
    
    //removing last element
    v.pop_back();
    cout<<"Vector after popping an element: ";
    for(int i=0 ; i<v.size(); i++)
    { cout<<v[i]<<" "; }

    //clearing the vector
    cout<<"\n\nSize before clear: "<<v.size()<<endl;
    v.clear();
    cout<<"Size after clear: "<<v.size()<<endl;


    //initilizing array with size
    vector<int> vc(5,1);            //set all elements as 1; default is 0;
    cout<<"\nVector vc: "; 
    for(int i:vc)
    { cout<<vc[i]<<" "; }  

    //copying once vector to another
    vector<int> new_vc(vc);
    cout<<"\nNew Vector vc: "; 
    for(int i:new_vc)
    { cout<<new_vc[i]<<" "; } 

}