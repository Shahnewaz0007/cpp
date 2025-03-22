#include<bits/stdc++.h>
using namespace std;
int main()
{
    // string s="Hello World";
    // cout<<s.size()<<endl;
    // cout<<s.max_size()<<endl;

    // string a;
    // cout<<a.capacity()<<endl;

    // string s;
    // cin>>s;
    // if(s.empty()==true){
    //     cout <<"Empty"<<endl;
    // }
    // else{
    //     cout<<"Not Empty"<<endl;
    // }

    string s;
    cin>>s;
    // s.resize(5); //hello world->hello
    s.resize(20,'X'); 
    cout<<s.size()<<endl;
    cout<<s<<endl;
    return 0;
}