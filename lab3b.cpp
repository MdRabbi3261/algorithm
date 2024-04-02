#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(auto&e:a)
    cin>>e;

  cout<<"Input array = ";
    for(auto & e:a)
    cout<<e<<" ";
    cout<<endl;
    
    int mx=INT_MIN;
    for(auto&e:a)
    {
       if(e>mx)
       mx=e;
    }
    int mi=INT_MAX;
    for(auto&e:a)
    {
        if(e<mi)
        mi=e;
    }

    int ave=(mx+mi)/2;
   // cout<<ave<<endl;
    int mid=(n/2),in,su=ave;
    for(int i=0;i<n;i++)
    {
        int s=abs(su-a[i]);
        if(s<=ave)
        {
            ave=s;
            //cout<<ave<<endl;
            in=i;
        }
    }
    //cout<<mid<<" "<<in<<endl;
    //cout<<a[mid]<<" "<<a[in]<<endl;
    swap(a[mid],a[in]);
  cout<<"Mid swap array = ";
  for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;


    for(int i=0;i<mid;i++)
    {
        int mx=a[0];
        int in=0;
        for(int j=0;j<mid-i;j++)
        {
            if(mx<a[j])
            {
                mx=a[j];
                in=j;
            }
        }
        swap(a[in],a[mid-1-i]);
    }

    for(int i=mid+1;i<n;i++)
    {
        int mx=a[mid+1];
        int in=mid+1;
        int k=0;
        for(int j=mid+1;j<n;j++)
        {
            if(mx<a[j])
            {
                mx=a[j];
                in=j;
            }
        }
        swap(a[in],a[n-1-k]);
        k++;
    }
  cout<<"Sorted array = ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}