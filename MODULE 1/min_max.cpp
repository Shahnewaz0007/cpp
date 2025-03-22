#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()
{
    // int a,b;
    // cin>>a>>b;
    // int c=min(a,b);
    // int d=max(a,b);
    // cout<< c<<" "<<d<<endl;

    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int mn=min({a,b,c,d});
    int mx=max({a,b,c,d});
    cout<< " minimum " << mn <<" "<< " maximum " << mx << endl;
    
    return 0;
}