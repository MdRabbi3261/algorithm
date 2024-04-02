#include<bits/stdc++.h>
using namespace std;
int cmp (pair<int,int>&a,pair<int,int>&b)
{
    return (double)a.first/a.second>(double)b.first/b.second;
}
int main()
{
    int n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin>>a>>b;
        v[i].first=a;
        v[i].second=b;
    }
    int weight;
    cin>>weight;
    sort(v.begin(),v.end(),cmp);
    // for(int i=0;i<n;i++)
    // {
    //     cout<<v[i].first<<" "<<v[i].second<<endl;
    // }
    int  sum=0;
    for(int i=0;i<n;i++)
    {
        if(v[i].second<=weight)
        {
            sum+=v[i].first;
            weight-=v[i].second;
        }
        else 
        {
            sum+=v[i].first*((double)weight/(double)v[i].second);
            break;
        }
       // cout<<sum<<endl;
    }
    cout<<sum<<endl;

}