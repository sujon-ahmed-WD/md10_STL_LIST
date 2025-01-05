#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    Node *slow = head;
    Node *fast = head;
    bool flag=false;
    while ()
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            // cycle detected
            flag=true;
            break;
        }
        cout<<"cycle detected"<<endl;
        cout<<"No Cycle"<<endl;
    }

    return 0;
}