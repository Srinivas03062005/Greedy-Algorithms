      RUN IN ONLINE COMPILER

#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> a,pair<int,int> b)
{
    int x=a.first/a.second;
    int y=b.first/b.second;
    if(x>=y)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int n,w;
    cin>>n>>w;
    vector<pair<int,int>> v;
    for(int i=0;i<n;i++)
    {
        //first one is value and the second one is weight
        int a,b;
        cin>>a>>b;
        v.push_back({a,b});
    }
    /*for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;*/
    sort(v.begin(),v.end(),comp);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    cout<<endl;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second<=w)
        {
            sum=sum+v[i].first;
            w=w-v[i].second;
        }
        else
        {
            int k=v[i].first/v[i].second;
            sum=sum+(w*k);
            break;
        }
    }
    cout<<sum<<endl;
    return 0;
}

