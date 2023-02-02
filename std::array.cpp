#include<iostream>
#include<array>
using namespace std;

int main()
{
    //Declaration
    std::array<int,5>arr;
    
    //Initialization
    std::array<int,5>arr1={1,2,3,4,5};
    std::array<int,5>arr2 {1,2,3,4,5};//uniform Initialization
    
    //assign using initializer list
    std::array<int,5>arr3;
    arr3={1,2,3,4,5};
    
    //finding the size
    cout<<arr3.size();
    
    //finding the first element in array
    cout<<arr3.front();
    
    //finding the last element in the array
    cout<<arr3.back();
    
    //find the element at any position
    cout<<arr3.at(2);
    cout<<arr3[2];
    
    //checking the array is empty or not
    cout<<arr3.empty();

    return 0;
}
