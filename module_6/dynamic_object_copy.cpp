#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    Person(string name,int age)
    {
        this->name=name;
        this->age=age;
    }
    
};
int main()
{
    Person* rakib=new Person("Rakib Ahsan",25);
    Person* sakib=new Person("Sakib Ahamed",26);
    // rakib=sakib; //kora jabe na delete korle problem hobe
    rakib->name=sakib->name;
    rakib->age=sakib->age;
    //*ra 
    cout<<rakib->name<<" "<<rakib->age<<endl;
 
    return 0;
}