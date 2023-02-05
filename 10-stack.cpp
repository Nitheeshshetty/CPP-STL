//Stack is LIFO data-structure
//It allows push and pop from back only

#include<iostream>
#include<stack>
using namespace std;

int main()
{
    //stack initialization
    stack<int>st;
    
    //inserting an ele into stack
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    
    //popping an ele from the stack
    st.pop();
    
    //get the top ele from the stack
    st.top();
    
    //empty() fun returns whether the stack is empty or not
    st.empty();
    
    //size() fun returns the no. of elements in the stack
    st.size();
    
    //print the elements of the stack
    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    
    return 0;
}
