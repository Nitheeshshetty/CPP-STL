//priority_queue is a container adapter that provides costant time lookup of the largest or smallest element
//By default vector is the container used
//It is implemented using make_heap,push_heap and pop_heap
//cost of insertion and extraction is logarithmic

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Initialization
    //By default priority_queue in c++ is max_heap
    priority_queue<int>pq;
    
    //Making priority_queue as min_heap
    priority_queue<int,vector<int>,greater<int>>pq2;
    
    //Insertion of elements on to the priority_queue
    pq.push(3);
    pq.push(2);
    pq.push(6);
    pq.push(4);
    pq.push(1);
    
    //popping an element from the priority_queue
    pq.pop();
    
    //top() fun is used to access the top ele from priority_queue
    pq.top();
    
    //empty() fun returns whether the queue is empty or not
    pq.empty();
    
    //size() fun returns the size of the queue
    pq.size();
    
    //printing the elements of priority_queue
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }

    return 0;
}
