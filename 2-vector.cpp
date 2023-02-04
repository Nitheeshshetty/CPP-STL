//vector --> dynamic array

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //Initialization of vector
    vector<int>v1;
    vector<int>v2={1,2,3,4};
    
    //reserving the capacity of vector
    v1.reserve(10);
    
    //get the capacity of the vector
    v1.capacity();
    
    //check the vector is empty or not
    v1.empty();
    
    //inserting the elements to the vector
    v1.push_back(1);
    v1.insert(1,2);// insert(pos,val)
    v1.insert(1,5,0);//insert(pos,size,val);
    
    //deleting the last ele of vector
    v1.pop_back();
    
    //swapping two vectors
    v1.swap(v2);
    
    //remove all the elements of the vector container
    v1.clear();
    
    //accessing of vector elements
    v2.at(2);
    v2[2];
    v2.front();//start ele accessing
    v2.back();//last ele accessing
    
    //printing the elements of vector
    for(int i=0;i<v2.size();i++)
        cout<<v2[i]<<" ";
    return 0;
}
