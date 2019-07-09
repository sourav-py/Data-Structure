#include <iostream>
using namespace std;

void printqueue(Node *head)
void queue(queue**,int);

class queue
{
    int data;
    queue* next;
}
int main()
{
    int sw;
    
    queue* first = NULL;
    queue* second = NULL;
    queue* third = NULL;

    first = new queue();
    second = new queue();
    third = new queue();

    first->data = 1;
    first->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;
    cout<<"default list!"<<endl;
    cout<<first->data<<" "<<second->data<<" "<<third->data<<endl;

    cout<<"Select options:"<<endl;
    cout<<"\t1.print queue items."<<endl;
    cout<<"\t2.Queue."<<endl;
    cout<<"\t3.Deque."<<endl;
    cin>>sw;
    switch(sw)
    {
        case 1:
        {
            printqueue(first);
            break;
        }
        case 2:
        {
            
        }
    }


    


}
void queue(Node **head,int data)
{
    Node* newer = new Node();
    newer->next = *head;
    newer->data = data;
    *head = newer;
    cout<<"created!"<<endl;
}
void printqueue(Node *head)
{
    
    if(head != NULL)
    {
        cout<<head->data<<" ";
        printqueue(head->next);
    }
    else
    {
        cout<<endl;
    }
}
