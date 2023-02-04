//Multiset is a associative container that contains a sorted set of duplicate objects 

#include<iostream>
#include<set>
using namespace std;

int main()
{
    //Multiset initialization
    multiset<int> ms1;
    multiset<int>ms2={2,4,1,7,3,1};
    
    //change the sorting order
    multiset<int,std::greater<int>>ms3={4,5,1,2,3,1,8};
    
    //inserting an elements to multiset
    ms1.insert(1);
    
    //begin() --> Returns an iterator to the first element in the multiset
    ms2.begin();
    
    //end() --> Returns an iterator to the last element in the multiset 
    ms2.end();
    
    //size() --> Returns the number of elements in the multiset
    ms2.size();
    
    //empty() --> Returns whether the multiset is empty
    ms2.empty();
    
    //clear() --> Removes all the elements from the multiset
    ms3.clear();
    
    //erase(x) --> Removes all the occurrences of x 
    ms1.erase(1);
    
    //printing the elements of multiset
    for(const auto& ele:ms2){
        cout<<ele<<" ";
    }
    return 0;
}
