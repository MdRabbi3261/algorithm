#include<bits/stdc++.h>
using namespace std;
int main()
{

    int n ;
    cin>>n;
    vector<int>coins(n);
    for(int i=0;i<n;i++)
    {
        cin>>coins[i];
    }
    int sum ;
    cin>>sum;

     vector<vector<int> > dp(n + 1, vector<int>(sum + 1, 0));
     //dp[0][0]=1;
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            if(i==0)
            {
                if(j==0)
                dp[i][j]=1;
            }
            else if(coins[i-1]>j)
            {
                dp[i][j] =dp[i-1][j];
            }
            else 
            dp[i][j]=dp[i-1][j]+dp[i][j-coins[i-1]];
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=sum;j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
  cout<<dp[n][sum]<<endl;
}