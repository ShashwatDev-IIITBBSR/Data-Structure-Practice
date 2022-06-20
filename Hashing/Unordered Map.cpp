#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> umap;
    umap["tyupe"]=85;
    umap["q"]=894;
    umap["hsd"]=4830;
    umap.insert(make_pair("hdsihi",6));
    umap.insert(make_pair("hhi",6));
    for(auto itr=umap.begin();itr!=umap.end();itr++)
    {
        cout<<itr->first<<" "<<itr->second<<endl;
    }
    cout<<"Find Element "<<endl;
    if(umap.find("q")!=umap.end())
    {
        auto temp=umap.find("q");
        cout<<temp->first<<" "<<temp->second<<endl;
    }
    int arr[]={1,75,4,7,3,5,4,7,0,98,76,5,4,3,21,0,9,8,7,7,6,5,5,4,4,3,21,0,9,7,66,5,5,4,4,3};
    int i,j;
    int k=36;
    cout<<k<<endl;
    unordered_map<int,int> umaped;
    for(i=0;i<k;i++)
    {
        j=arr[i];
        umaped[j]++;
    }
    for(auto l=umaped.begin();l!=umaped.end();l++)
    {
        cout<<l->first<<" "<<l->second<<endl;
    }
}
















