#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int vlue;
    node *next;
    node(int vlue)
    {
        this->vlue = vlue;
        this->next = NULL;
    }
};
void insert_at_vlue(node *&head,node *&tail,int v)
{
     node *newnode = new node(v);
    if (head == NULL)
    {
        head=newnode;
        tail=head;
        return;
    }
    tail->next=newnode;
    tail=newnode;
}
void print_linklist(node *head)
{
    node *temp=head;
    if(temp==NULL)
    return;
    cout<<temp->vlue<<" ";
    print_linklist(temp->next);
    cout<<endl;
}
void reverse_linklist(node *head)
{
    node *temp=head;
    if(temp==NULL)
    return;
    reverse_linklist(temp->next);
     cout<<temp->vlue<<" ";
    //cout<<endl;
}
int main()
{
    node *head=NULL;
    node *tail=NULL;
    while(1)
    {
        int vlue;
        cin>>vlue;
        if(vlue==-1)
        break;
        insert_at_vlue(head,tail,vlue);
    }
    cout<<"Linklist:"<<endl;
    print_linklist(head);
    cout<<"Reverse linklist"<<endl;
    reverse_linklist(head);
    cout<<endl;
    return 0;
}