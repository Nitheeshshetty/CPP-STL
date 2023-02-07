//All the containers supports emplace and insert opeartion to store data
//Emplace is used to construct object in-place and avoids the unnecessary copy of objects
//Insert and Emplace is a equal for priority data types
//But when we deal with heavy objects use Emplace for efficiency

#include<iostream>
#include<set>
using namespace std;

class A 
{
    public:
    int x;
    A(int x=0): x{x} {cout<<"Construct"<<endl;};
    A(const A& rhs) {x=rhs.x;cout<<"Copy"<<endl;}
};

bool operator < {const A& lhs,const A& rhs} {return lhs.x<rhs.x;}

int main()
{
    set<A> Set;
    
    //Construct and copy both occurs
    Set.insert(A(10))
    
    //Only Construct
    Set.emplace(2);

    return 0;
}
