#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int marks;
};

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].name>>a[i].roll>>a[i].marks;
    }
    Student mn;
    // Student mx;
    mn.marks=INT_MAX; //for minimum
    //mx.marks=INT_MIN; //for maximum
    for(int i=0;i<n;i++)
    {
        if(a[i].marks<mn.marks)
        // if(a[i].marks>mx.marks)
        {
            mn=a[i];
            // mx=a[i];
        }
    }
    cout<<mn.name<<" "<<mn.roll<<" "<<mn.marks<<endl;
    // cout<<mx.name<<" "<<mx.roll<<" "<<mx.marks<<endl;
 
    return 0;
}