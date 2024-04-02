#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int c=0;
    for (int i = 0; i < n; i++)
    {
        int key = a[0];
        int k=0;
        for (int j = 1; j < n - i; j++)
        {
            if (a[j] > key)
            {
                key = a[j];
                k=j;
            }
            c++;
        }
        swap(a[k],a[n-i-1]);
        for (int l= 0; l < n-i; l++)
        {
            cout << a[l] << " ";
        }
        cout << endl;

    }
   // cout<<c<<endl;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}