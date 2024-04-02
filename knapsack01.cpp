#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int w[n],p[n];
    for(int i=0;i<n;i++)
    {
        cin>>w[i];
        cin>>p[i];
    }
    int weight;
    cin>>weight;
    vector<vector<int>>k(n+1,vector<int>(weight+1,0));
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=weight;j++)
        {
            if(i==0 || j==0)
            {
                k[i][j]=0;
            }
            else if(w[i-1]>j)
            {
                k[i][j]=k[i-1][j];
            }
            else 
            {
                k[i][j]=max(k[i-1][j],k[i-1][j-w[i-1]]+p[i-1]);
            }
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=weight;j++)
        {
            cout<<k[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<k[n][weight]<<endl;
}