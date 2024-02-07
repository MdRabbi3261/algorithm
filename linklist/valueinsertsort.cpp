#include<bits/stdc++.h>
using namespace std;
class node
{
    public:
    int value;
    node *next;
    node (int value)
    {
        this->value=value;
        this->next=NULL;
    }
};
void insertsort(node *&head,int value)
{
    node *newnode=new node(value);
    node *temp=head;
    if(head==NULL || head->value>newnode->value)
    {
       newnode->next=head;
       head=newnode;
    }
    else{
        while(temp->next!=NULL && temp->next->value<newnode->value)
        {
            temp=temp->next;
        }
            newnode->next=temp->next;
            temp->next=newnode;
        
    }
}
void printlinklist(node *head)
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->value<<" ";
        temp=temp->next;
    }
}
int main()
{
    node *head=NULL;
    while(1)
    {
        int v;
        cin>>v;
        if(v==-1)
        break;
        insertsort(head,v);
    }
    printlinklist(head);
}