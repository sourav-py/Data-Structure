#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};

void linkedlisttraversal(Node *head)
{
    if(head==NULL)
    {
        cout<<"null reported"<<endl;
        
    }
    else
    {
        cout<<head->data<<endl;
        linkedlisttraversal(head->next);
    }
}
void linkedlistnewnode(Node **head,int data)
{
    Node* newer = new Node();
    newer->next = *head;
    newer->data = data;
    *head = newer;
    cout<<"created!"<<endl;
}
int main()
{
    Node* first = NULL;
    Node* second = NULL;
    Node* third = NULL;

    first = new Node();
    second = new Node();
    third = new Node();

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    cout<<first->data<<" "<<second->data<<" "<<third->data<<endl;
    linkedlisttraversal(first);
    linkedlistnewnode(&first,0);
    linkedlisttraversal(first);
    return 0;
}