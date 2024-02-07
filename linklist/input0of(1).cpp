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
    node *tail=NULL;
    while(1)
    {
        int vlue;
        cin>>vlue;
        if(vlue==-1)
        break;
        insert_at_vlue(head,tail,vlue);
    }
    print_linklist(head);
    return 0;
}