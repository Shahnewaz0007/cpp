#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age=24;
    void hello()
    {
        cout<<"Rakib namespace"<<endl;
    }

    
}
namespace sakib
{
    int age2=24;
    void hello2()
    // void hello()
    {
        cout<<"sakib namespace"<<endl;
    }

    
}
using namespace Rakib;
using namespace sakib;
int main()
{
    cout<<age<<endl;
    hello();
    hello2();
    // sakib hello();
 
    return 0;
}