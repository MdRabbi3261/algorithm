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
void insert_at_tail(node *&head, int v)
{
    node *newnode = new node(v);
    node *temp = head;
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    // temp last node e
    temp->next = newnode;
} 
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
    int vlue;
    while (1)
    {
        cin >> vlue;
        if (vlue == -1)
            break;
            insert_at_tail(head,vlue);
    }
    print_linked_list(head);

    return 0;
}