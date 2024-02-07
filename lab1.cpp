#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define forn for (ll i = 0; i < n; ++i)
#define foro for (ll i = 1; i < n; ++i)
#define forne for (ll i = n - 1; i >= 0; --i)
#define MOD 1000000007
#define umap unordered_map
#define pb push_back
#define sz(x) (int)(x).size()
#define ff first
#define ss second
#define vc vector
#define rd ill()
ll ill();

void solve()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //for i = 2 to A.length
    for(int i=1;i<n;i++)
    {
    //  key = A[i]

      int key=a[i];
       // j = i - 1
      int j=i-1;
    //    // Insert A [i] into the sorted sequence A[1… i-1]
   // while j>0 and A[j] > key
      while(j>=0 && key<a[j])
      {
        a[j+1]=a[j]; //     A[j+1] = A[j]
        j=j-1;//     j = j - 1
        a[j+1]=key; // A[j + 1]  =  key 
      }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t = 1;
    //cin >> t;
    for (int i = 1; i <= t; i++)
        solve();
    return 0;
}
ll ill()
{
    ll x;
    cin >> x;
    return x;
}