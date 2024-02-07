#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int vlue;
    node *next;
    node (int vlue)
    {
      this->vlue=vlue;
      this->next=NULL;
    }
};
void insert_at_tail(node *&head,int v)
{
  node *newnode  =new node(v);
  node *temp=head;
  if(head==NULL)
  {
    head=newnode;
    return;
  }
  while(temp->next!=NULL)
  {
    temp=temp->next;
  }
  // temp last node e
  temp->next=newnode;
}
// link list print function
void print_linked_list(node *head)
{
    cout<<"Your link list"<<endl; 
    node *temp=head;
  while(temp!=NULL)
  {
    cout<<temp->vlue<<" ";
    temp=temp->next;
  }
  cout<<endl; 
}
int main()
{
  node *head=NULL;
  
  while(1)
  {
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: print Linked List"<<endl;
    cout<<"Option 3: Terminate"<<endl;
  int op;
  cin>>op;
  if(op==1)
  {
    cout<<"Enter a vlue"<<endl;
    int v;
    cin>>v;
    insert_at_tail(head,v);
  }
  else if(op==2){
  // print the link list
   print_linked_list(head);
  }
  else if(op==3)
  {
    break;
  }
  }
  return 0;
}