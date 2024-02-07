#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int vlue;
    node* next;
    node(int vlue)
    {
      this->vlue=vlue;
      this->next=NULL;  
    }
};
int main()
{
   node* head=new node(10);
   node* a =new node(49);
   head->next=a;
   cout<<head->vlue<<endl;
   cout<<head->next->vlue<<endl;
}