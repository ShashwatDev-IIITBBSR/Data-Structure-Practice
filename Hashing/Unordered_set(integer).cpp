#include <iostream>
using namespace std;
#include <unordered_set>
int main()
{
    unordered_set<int> u_set;
    u_set.insert(10);
    u_set.insert(-2);
    u_set.insert(999);
    u_set.insert(5);
    for(auto it=u_set.begin();it!=u_set.end();it++)
    {
        cout<<(*it)<<endl;
    }
    u_set.erase(10);
    u_set.erase(87);
    for(auto it=u_set.begin();it!=u_set.end();it++)
    {
        cout<<(*it)<<endl;
    }
    if(u_set.find(-2)!=u_set.end())
    {cout<<"Element found "<<endl;}
    else{cout<<"Element Not found "<<endl;
    cout<<u_set.count(-2);}
}





