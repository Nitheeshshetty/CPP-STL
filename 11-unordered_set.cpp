//unordered_set stores the unique objects
//It stores the objects to buckets using hashing concept(no particular order)
//It allows faster access of individual elements because it uses the hashing
//Main usage --> Maintain a collection of unique items with faster insertion and deletion

#include<iostream>
#include<unordered_set>
using namespace std;

int main()
{
    //unordered_set initialization
    unordered_set<int>us;
    unordered_set<int>us2={2,1,5,3,7,1};
    
    //inserting elements to unordered_set
    us.insert(1);
    us.insert(2);
    us.insert(1);
    us.insert(3);
    
    //begin() fun return an iterator pointing to the first element
    us.begin();
    
    //end() fun returns an iterator pointing to the past-the-end-element
    us.end();
    
    //count() fun count occurrences of a particular element in an unordered_set
    us.count(2);
    
    //find() fun search for an element in the container
    us.find(2);
    
    //size() fun return the number of elements in the unordered_set
    us.size();
    
    //empty() fun check if an unordered_set container is empty or not
    us.empty();
    
    //clear() fun removes all of the elements from an unordered_set
    us2.clear();
    
    //printing the elements of unordered_set
    for(auto e:us){
        cout<<e<<" ";
    }

    return 0;
}
