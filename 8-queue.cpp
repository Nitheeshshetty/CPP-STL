//queue is FIFO data-structure
//insertion of ele at rear(end) 
//deletion of ele at front

#include<iostream>
#include<queue>
using namespace std;

int main()
{
    //Initialization of queue
    queue<int>q;
    
    //Inserting elements to the queue
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    
    //Deleting an ele from the queue
    q.pop();
    
    //empty() function is used for testing whether the container is empty or not
    q.empty();
    
    //size() function returns the number of queue elements
    q.size();
    
    //front() function returns the value of the front element of the queue
    q.front();
    
    //back function returns the value of the last element of the queue
    q.back();
    
    //printing the elements of queue
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
