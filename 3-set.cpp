//Set contains the unique elements and they are in sorted order (A/D)
//Default the elements are stored in ascending order
//syntax for descending order : set<int,greater<>>s

#include<iostream>
#include<set>
#include<functional>
#include<string>
using namespace std;

int main()
{
    //Initialization of set
    set<int>s1;
    set<int>s2={1,2,4,1,3,5};
    
    //get the size of set
    s2.size();
    
    //add the elements to set
    s1.insert(3);
    
    //swapping the two sets
    swap(s1,s2);
    
    //find-->is used to find an element with the given value val.
    //If it finds the element then it returns an iterator pointing to the element otherwise, it returns an iterator pointing to the end of the set i.e. set::end()
    auto it=s1.find(3);
    
    //count-->returns 1 if the value is present in set ,otherwise returns 0
    s1.count(3);
    
    //Deleting the particular value of a set
    s1.erase(3);
    
    //printing the set elements
    for(auto it=s2.begin();it!=s2.end();it++){
        cout<<*it<<" ";
    }
    return 0;
}
