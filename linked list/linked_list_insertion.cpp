#include <iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtHead(Node* &head,int d)
{
    if(head==NULL)
    {
        head = new Node(d);
        return;
    }
    Node* n = new Node(d);
    n->next = head;
    head = n;
}
 void print(Node*head)
 {
     while(head!=NULL)
     {
         cout<<head->data<<"->";
         head = head->next;
     }
     cout<<endl;
 }

int length(Node*head)
{
    int l=0;
    while(head!=NULL)
    {
        l++;
        head= head->next;        
        
    }
    return l;
}


void insertAtTail(Node*& head,int d)
{
    if(head==NULL)
    {
        insertAtHead(head,d);
	return;
    }
    Node* tail = head;
    while(tail->next != NULL)
    {
        tail= tail->next;
    }
    tail->next = new Node(d);
}




 void insertAtMiddle(Node*&head,int d,int p)
 {
     // corner case
     if(head==NULL || p==0)
     {
         insertAtHead(head,d);
     }
    else if(p>length(head))
    {
        insertAtTail(head,d);
    }
    else{
     // move the head to p position by jumping p-1 steps
    Node* temp = head;
     while(p-1>0)
     {
         temp = temp->next;
         p--;
     }
     Node* n= new Node(d);
     n->next = temp->next;
     temp->next = n;
    }

 }







int main() {
    Node* head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,4);
    insertAtHead(head,7);
    insertAtHead(head,10);
    insertAtMiddle(head,9,3);
    insertAtMiddle(head,25,7);
   insertAtTail(head,245);
    cout<<length(head);
    cout<<endl;
    print(head);
    return 0;
}
