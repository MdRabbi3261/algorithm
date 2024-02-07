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
   node* b =new node(37);
   node* c =new node(83);
   node* d =new node(25);
   head->next=a;
   a->next=b;
   b->next=c;
   c->next=d;
   node* temp=head;
   while(temp!=NULL)
   {
    cout<<temp->vlue<<endl;
    temp=temp->next;
   }
}