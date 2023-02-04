#include<iostream>
#include<set>
#include<string>
#include<functional>
using namespace std;

class  Person
{
    public:
        int age;
        string name;
    bool operator<(const Person& rhs) const{ return age<rhs.age;}
    bool operator>(const Person& rhs) const{ return age>rhs.age;}
};

int main()
{
    set<Person,std::greater<Person>>Set={{25,"Rajesh"},{28,"Dinesh"},{21,"Nitheesh"}};
    for(const auto& e:Set){
        cout<<e.age<<" "<<e.name<<endl;    
    }
    return 0;
}
