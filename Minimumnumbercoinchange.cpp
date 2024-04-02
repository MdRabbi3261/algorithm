#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int sum;
    cin>>sum;
    int s=0;
    for(int i=n-1;i>=0;i--)
    {
        int temp=sum%a[i];
        s+=sum/a[i];
        sum=temp;
    }
    cout<<s<<endl;
}