#include <iostream>
using namespace std;
#define max 1000
int hashtable[max+1][2];
bool search(int x)
{
    if(x>0)
    {
        if(hashtable[x][0]==1)
        {
            return true;
        }
        return false;
    }
    if(hashtable[-x][1]==1)
    {
        return true;
    }
    return false;
}
void insert_in_hashtable(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            hashtable[a[i]][0]=1;
        }
        else
        {
            hashtable[-a[i]][1]=1;
        }
    }
}
int main()
{
    int n,k;
    cout<<"Enter size of Array ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Element";
        cin>>a[i];
    }
    insert_in_hashtable(a,n);
    cout<<"Enter number to search ";
    cin>>k;
    if(search(k)){cout<<"Element Found"<<endl;}
    else{cout<<"Element not Found"<<endl;}
    cout<<"Enter number to search ";
    cin>>k;
    if(search(k)){cout<<"Element Found";}
    else{cout<<"Element not Found";}
    return 0;
}