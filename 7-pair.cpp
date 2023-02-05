//pair is a struct template that provides a way to store two heterogeneous objects as a single unit
//It can be used in map,multimap,unorder_map,unorder_multimap,vector,etc

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //pair initialization
    pair<int,int>p(10,20);
    
    //printing the values of pair
    cout<<p.first<<" "<<p.second<<endl;
    
    //pair can be used in any data structure
    //pair used in vector
    vector<pair<string,int>>v;
    
    //inserting the values to vector in the form of pair
    v.push_back({"Ram",2});
    v.push_back(make_pair("Raj",4));
    pair<string,int>pa("Rak",6);
    v.push_back(pa);
    
    //printing the values of vector
    for(auto e:v){
        cout<<e.first<<" "<<e.second<<endl;
    }
    
    return 0;
}
