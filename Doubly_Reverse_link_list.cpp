#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void setList(Node*&head,Node*&tail,int val)
{
    Node*newnode=new Node(val);
    if(head==NULL)
    {
        head=newnode;
        tail=newnode;
        return;
    }
    tail->next=newnode;
    newnode->prev=tail;
    tail=newnode;
    
}
void print(Node*head)
{
    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
 
void reverse_doubliy(Node*head,Node*tail)
{
    for(Node *i=head ,*j=tail; i!=j&&i->prev!=j,i=i->next,j=j->prev;)
    
        swap(i->val,j->val);
}
int main()
{
    Node*head=NULL;
    Node*tail=NULL;
    int val;
    while(cin>>val&&val!=-1)
    {
        setList(head,tail,val);
    }
    print(head);
    reverse_doubliy(head,tail);
    print(head);

    return 0;
}