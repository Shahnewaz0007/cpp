// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int *a=new int ;
//     *a=10;
//     cout<<*a<<endl;
//     return 0;
// }



#include<bits/stdc++.h>
using namespace std;
int * fun()
{
    int *a=new int;
    
    *a=100;
    cout<<"fun "<<&a<<endl;
    return a; 
}
int main()
{
 int * p=fun();
  cout << "main " << *p << endl;
    return 0;
}