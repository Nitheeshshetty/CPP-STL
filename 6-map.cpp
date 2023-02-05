//Map is a key-value store data structure
//It stores the key-value pair in sorted order based on the key-value
//key is unique ans values can be same

#include<iostream>
#include<map>
using namespace std;

int main()
{
    //Initialization of map
    map<string,int>m;
    
    //Change the sorted order of map
    map<string,int,std::greater<string>>m2;
    
    //adding values to map
    m["ram"]=100;
    m["raj"]=150;
    
    //adding using insert method
    m.insert(make_pair("rak",200));
    
    //begin() --> Returns an iterator to the first element in the map
    m.begin();
    
    //end() --> Returns an iterator to the last element in the map
    m.end();
    
    //size() --> Returns the number of elements in the map
    m.size();
    
    //empty() --> Returns whether the map is empty
    m.empty();
    
    //erase(x) --> Removes the element at the position pointed by x
    m.erase(2);
    
    //clear() --> Removes all the elements from the map
    m2.clear();
    
    //Accessing the value by using the key
    m["ram"];
    
    //printing the key-value pairs 
    for(auto &e:m){
        cout<<e.first<<"-"<<e.second<<endl;
    }
    
    return 0;
}
