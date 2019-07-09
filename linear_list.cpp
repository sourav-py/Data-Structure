#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
};

void linkedlisttraversal(Node *head);
void linkedlistnewnode(Node **head,int data);
void linkedlistnewnodecustom(int n,Node **head,int data);
void linkedlistnewnodeend(Node **head,int data);
void linkedlistdeletenode(Node **head,int data);

int main()
{   
    int sw;
    
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
    cout<<"default list!"<<endl;
    cout<<first->data<<" "<<second->data<<" "<<third->data<<endl;

    cout<<"Select options:"<<endl;
    cout<<"\t1.print list items."<<endl;
    cout<<"\t2.add one at the beginning."<<endl;
    cout<<"\t3.add one at the end."<<endl;
    cout<<"\t4.add one at custome place."<<endl;
    cout<<"\t5.delete a node."<<endl;

    cin>>sw;
    switch(sw)
    {
        case 1:
        {
            linkedlisttraversal(first);
            break;
        }
        case 2:
        {
            int data;
            cout<<"enter data"<<endl;
            cin>>data;
            linkedlistnewnode(&first,data);
            linkedlisttraversal(first);
            break;
        }
        case 3:
        {
            int data;
            cout<<"enter data"<<endl;
            cin>>data;
            linkedlistnewnodeend(&first,data);
            linkedlisttraversal(first);
            break;
        }
        case 4:
        {
            int data;
            int position;
            cout<<"enter data"<<endl;
            cin>>data;
            cout<<"after node?"<<endl;
            cin>>position;
            linkedlistnewnodecustom(position,&first,data);
            linkedlisttraversal(first);
            break;

        }
        case 5:
        {
            int data;
            cout<<"enter no."<<endl;
            cin>>data;
            linkedlistdeletenode(&first,data);
            linkedlisttraversal(first);
            break;
        
        }
        default:
        {
            cout<<"invalid input!"<<endl;
            break;
        }
    }

    
    return 0;
}
void linkedlisttraversal(Node *head)
{
    
    if(head != NULL)
    {
        cout<<head->data<<" ";
        linkedlisttraversal(head->next);
    }
    else
    {
        cout<<endl;
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
void linkedlistnewnodecustom(int n,Node **head,int data)
{
    Node *newer = new Node();
    Node *temp = *head;
    int i;
    for(i=0;i<n-1;i++)
    {  
        temp = temp->next; 

    }
    newer->data = data;
    newer->next = temp->next;
    temp->next = newer;
}
void linkedlistnewnodeend(Node **head,int data)
{
    Node *last = *head;
    Node *newer = new Node();
    newer->data = data;
    newer->next = NULL;

    while(last->next !=  NULL)
    {
        last = last->next;
    }
    last->next = newer;
}
void linkedlistdeletenode(Node **head,int data)
{
    Node *temp = *head;
    while(temp->next->data != data)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;

}
