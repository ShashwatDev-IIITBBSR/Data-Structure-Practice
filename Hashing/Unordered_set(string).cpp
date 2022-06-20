#include <iostream>
using namespace std;
#include <unordered_set>
int main()
{
    unordered_set<string> u_set;
    u_set.insert("a");
    u_set.insert("b");
    u_set.insert("r");
    u_set.insert("t");
    for(auto it=u_set.begin();it!=u_set.end();it++)
    {
        cout<<(*it)<<endl;
    }
    u_set.erase("h");
    u_set.erase("b");
    for(auto it=u_set.begin();it!=u_set.end();it++)
    {
        cout<<(*it)<<endl;
    }
    if(u_set.find("a")!=u_set.end())
    {cout<<"Element found "<<endl;}
    else{cout<<"Element Not found "<<endl;}
    cout<<u_set.count("a");
}

