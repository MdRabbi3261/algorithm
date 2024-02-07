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
void insert_at_head(node *&head,int v)
{
    node *newnode=new node(v);
    newnode->next=head;
    head=newnode;

}
void insert_at_position(node *head,int pos,int v)
{
     node *newnode=new node(v);
     node *temp=head;
     for(int i=1;i<pos;i++)
     {
        temp=temp->next;
     }
     newnode->next=temp->next;
     temp->next=newnode;
}
void delete_at_position(node *head,int pos)
{
    node *temp=head;
  for(int i=1;i<pos;i++)
  {
    temp=temp->next;
  }
  node *deletenode=temp->next;
  temp->next=temp->next->next;
  delete deletenode;
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
  cout<<endl<<endl<<endl; 
}
int main()
{
  node *head=NULL;
  
  while(1)
  {
    cout<<"Option 1: Insert at Tail"<<endl;
    cout<<"Option 2: print Linked List"<<endl;
    cout<<"Option 3: insertnay position"<<endl;
    cout<<"Option 4: insert head"<<endl; 
    cout<<"Option 5: delete form position"<<endl;
    cout<<"Option 6: Terminate"<<endl;
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
    cout<<"Enter position and vlue"<<endl;
    int pos,vlue;
    cin>>pos>>vlue;
    if(pos==0)
    {
        insert_at_head(head,vlue);
    }
    else 
    insert_at_position(head,pos,vlue);
  }
  else if(op==4)
  {
    int v;
    cout<<"Enter value"<<endl;
    cin>>v;
    insert_at_head(head,v);
  }
  else if(op==5)
  {
    cout<<"Enter Your delet element positon"<<endl;
    int pos;
    cin>>pos;
    delete_at_position(head,pos);
  }
  else if(op==6)
  {
    break;
  }
  }
  return 0;
}