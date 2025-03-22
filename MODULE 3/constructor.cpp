#include<bits/stdc++.h>
using namespace std;

class Student{
    public:
    int roll;
    int cls;
    double gpa;
    
    // Student(int r,int c,double g)
    Student(int roll,int cls,double gpa)
    {
        // roll=r;
        // cls=c;
        // gpa=g;

        // *(this).roll=roll
        this->roll=roll;
        this->cls=cls;
        this->gpa=gpa;
                  
    }
};
int main()
{
    Student Rahim(29,8,9.022);
    Student Karim(45,10,6.02);
    cout<<Rahim.roll<<" "<<Rahim.cls<<" "<<Rahim.gpa<<endl;
    cout<<Karim.roll<<" "<<Karim.cls<<" "<<Karim.gpa<<endl;
 
    return 0;
}