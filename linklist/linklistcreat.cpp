#include <bits/stdc++.h>
using namespace std;
class node
{
  public:
  int vlue;
  node* next;
};
int main()
{
  node a,b;
  a.vlue=10;
  b.vlue=20;
  a.next=&b;
  b.next=NULL;
  cout<<a.vlue<<endl;
  cout<<b.vlue<<endl;
  cout<<a.next<<endl;
  cout<<b.next<<endl;
  cout<<a.next->vlue<<endl;
}