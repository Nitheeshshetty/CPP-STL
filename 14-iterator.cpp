//iterator is used to iterate through the container
//it is used in map,set,unordered_map,unordered_set,vector,etc

#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    //Initializing the unordered_map
    unordered_map<string,int>map;
    
    //inserting values to the map
    map["ram"]=1;
    map["raj"]=2;
    map["sam"]=3;
    map["jam"]=4;
    map.insert({"rak",5});
    map.insert(make_pair("par",6));
    
    //iterator initialization
    unordered_map<string,int>::iterator it;
    
    //iterator can be used to erase the elements of map
    it=map.begin();
    map.erase(++it);
    
    //Traversing the map using iterator
    it=map.begin();
    while(it!=map.end())
    {
        cout<<it->first<<"-"<<it->second<<endl;
        it++;
    }

    return 0;
}
