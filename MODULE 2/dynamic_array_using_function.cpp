#include<bits/stdc++.h>
using namespace std;
//  int n; /* If you want to create an array using a function without parameters, you can declare the array as a global variable or define it inside the function itself. */
int*fun()
{
    int*a=new int[5];
    // int*a=new int[n];
    for(int i=0;i<5;i++)
    // for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    return a;
}
int main()

{
    int *a=fun();
    for(int i=0;i<5;i++)
    // for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}