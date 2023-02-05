//deque : Double ended queue
//deque is a indexed sequence container
//unlike vector,elements of deque not stored contiguous
//It allows fast insertion and deletion at both the ends

#include<iostream>
#include<deque>
using namespace std;

int main()
{
    //Initialization of deque
    deque<int>dq1;
    deque<int>dq2={1,2,3,8,5};
    
    //Inserting an ele at the begining of deque
    dq2.push_front(4);
    
    //Inserting an ele at the end of deque
    dq2.push_back(7);
    
    //Deleting an ele from the fisrt index
    dq2.pop_front();
    
    //Deleting an ele in the end of deque
    dq2.pop_back();
    
    //empty() function checks whether the container is empty or not
    //If the container is empty, it returns 1 otherwise 0
    dq1.empty();
    
    //clear() function removes all the elements from the deque and the size of the deque is reduced to zero
    dq1.clear();
    
    //erase() function removes the element from the specified position or range
    //this effectively reduces the size of the deque by the number of elements removed
    dq2.erase(dq2.begin()+1,dq2.begin()+2);
    
    //size() function determines the number of elements present in the deque container
    dq2.size();
    
    //Printing the elements of deque
    for(auto e:dq2){
        cout<<e<<" ";
    }

    return 0;
}
