//unordered_map --> Collection of unique key-value pairs with faster insertion and deletion
//Internally the elements are organized in buckets
//It uses hashing to insert an elements to buckets
//elements are stored not in a particular order

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    //Initialization of unordered_map
    unordered_map<int,char>um;
    unordered_map<int,char>um2={{1,'a'},{2,'b'},{3,'c'}};
    
    //Inserting elements to unordered_map
    um[1]='z';
    um.insert(make_pair(2,'y'));
    um.insert({3,'x'});
    
    //begin() --> Returns an iterator to the first element in the unordered_map
    um.begin();
    
    //end() --> Returns an iterator to the last element in the unordered_map
    um.end();
    
    //size() --> Returns the number of elements in the unordered_map
    um.size();
    
    //empty() --> Returns whether the unordered_map is empty
    um.empty();
    
    //clear() --> Removes all the elements from the unordered_map
    um2.clear();
    
    //Accessing the value by using the key
    um[1];
    
    //printing the elements of unordered_map
    for(auto e:um){
        cout<<e.first<<"-"<<e.second<<endl;
    }

    return 0;
}
