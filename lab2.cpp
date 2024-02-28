#include <bits/stdc++.h>
using namespace std;
struct lab2
{
    int data;
    int rightindex;
    int leftindex;
    /* data */
};
lab2 valueasine(int d,int right,int left)
{
    lab2 maxarray;
    maxarray.data=d;
    maxarray.rightindex=right;
    maxarray.leftindex=left;
    return maxarray;

}
lab2 marge(int arr[],int n, int low, int mid, int high) 
{
   

    int leftSum = INT_MIN;
    int rightSum = INT_MIN;

    int leftIndex;
    int rightIndex;

    int sum = 0;

    for(int i = mid; i >= low; i--) {
        sum += arr[i];
        if(leftSum  < sum) {
            leftSum = sum;
            leftIndex = i;
        }
    }

    sum = 0;

    for (int i = mid+1; i<=high; i++) {
        sum += arr[i];
        if(rightSum < sum) {
            rightSum = sum;
            rightIndex = i;
        }
    }
  //cout<<leftSum<<"   "<<rightSum<<" "<<leftSum+rightSum<<endl;
    return valueasine(leftSum + rightSum,rightIndex,leftIndex);
}
lab2 subarray(int a[],int n,int first,int last)
{
   int mid=(first+last)/2;
   if(first==last)
   {
     return valueasine(a[last],first,last);
   }
   lab2 leftsubarry =subarray(a,n,first,mid);
   lab2 rightsubarry =subarray(a,n,mid+1,last);
   lab2 margesubarry=marge(a,n,first,mid,last);
   if(leftsubarry.data >= rightsubarry.data && 
        leftsubarry.data >= margesubarry.data)
         return leftsubarry;

    if(rightsubarry.data >= leftsubarry.data &&
        rightsubarry.data >= margesubarry.data) 
        return rightsubarry;

    return margesubarry;

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    lab2 maxarry=subarray(a,n,0,n-1);
    cout<<maxarry.data<<" "<<maxarry.rightindex<<" "<<maxarry.leftindex<<endl;
}