#include<bits/stdc++.h>
using namespace std;
class node 
{
    public:
    int vlue;
    node* next;
    node(int v)
    {
        vlue=v;
        next=NULL;
    }
    /*node(int vlue)   same consructor
    {
        this->vlue=vlue;
        this->next=NULL;
    }*/
};
int main()
{
 node a(10);
 node b(20);
 a.next=&b;
 cout<<a.vlue<<endl;
 cout<<a.next->vlue<<endl;
}