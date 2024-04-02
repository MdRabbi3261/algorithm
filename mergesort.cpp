#include <bits/stdc++.h>
using namespace std;
void merge(int a[], int n, int l, int r, int mid)
{
    int left_size = mid - l + 1;
    int right_size = r - mid;

    int L[left_size + 1];
    int R[right_size + 1];

    for (int i = 0; i < left_size; i++)
    {
        L[i] = a[l + i];
    }
    for (int j = 0; j < right_size; j++)
    {
        R[j] = a[mid + 1 + j];
    }

    L[left_size] = INT_MIN;
    R[right_size] = INT_MIN;

    int lp = 0, rp = 0;

    for (int k = l; k <= r; k++)
    {
        if (L[lp] >= R[rp])
        {
            a[k] = L[lp];
            lp++;
        }
        else
        {
            a[k] = R[rp];
            rp++;
        }
    }
    // for(int i=0;i<n;i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    // cout<<endl;
}

void mergesort(int a[], int n, int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    mergesort(a, n, l, mid);
    mergesort(a, n, mid + 1, r);
    merge(a, n, l, r, mid);
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout<<"After array= ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    mergesort(a, n, 0, n-1);
    cout<<"befor array = ";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
