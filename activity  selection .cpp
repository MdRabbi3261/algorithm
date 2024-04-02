#include<bits/stdc++.h>
using namespace std;
int cmp(pair<int,int>&a,pair<int,int>&b)
{
    if(a.second==b.second)
    {
        return a.first<b.first;
    }
    return a.second<b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin>>x>>y;
        v[i].first=x;
        v[i].second=y;
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++)
    {
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
    int c=1, temp=v[0].second;
    for(int i=1;i<n;i++)
    {
        if(v[i].first>temp)
        {
            c++;
            temp=v[i].second;
        }
    }
    cout<<c<<endl;
}