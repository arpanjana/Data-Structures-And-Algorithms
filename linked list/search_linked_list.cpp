#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d)
    {
        data = d;
        next = NULL;
    }
};

void insertAtHead(node* &head,int d)
{
    // corner case
    if(head==NULL)
    {
        head = new node(d);
        return;
    }
    node* n = new node(d);
    n->next = head;
    head = n;
}

void print(node* head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<endl;
}

int length(node *head)
{
    int cnt =0;
    while(head!=NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}



void insertAtMiddle(node* &head,int d,int p)
{
    // cornere cases
    if(head == NULL or p==0)
    {
        insertAtHead(head,d);
        return;
    }
    /*
    if(p>length(head))
    {
        insertAtTail(head,d);
    }
    */


    node*temp = head;
    // take p-1 jumps
    int jump = 1;
    while(jump<=p-1)
    {
        temp = temp->next;
        jump++;
    }
    node* n = new node(d);
    n->next = temp->next;
    temp->next = n;
}

void insertAtTail(node* &head,int d)
{
    // corner cases
    if(head == NULL)
    {
        head = new node(d);
        return;
    }
    node* temp = head;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    
    temp->next = new node(d);
}

void deleteAtHead(node*& head)
{
    // corner case
    if(head==NULL)
    {
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}
bool search(node *head,int key)
{
    while(head!= NULL)
    {
        if(head->data==key)
        {
            return true;
        }
        head = head->next;
    }
    return false;
}

bool searchRecursively(node* head,int key)
{
    // base case
    if(head==NULL)
    {
        return false;
    }
    // recursive case 
    if(head->data == key)
    {
        return true;
    }
    return searchRecursively(head->next,key);
}


int main() {
    node *head = NULL;
    insertAtHead(head,1);
    insertAtHead(head,3);
    insertAtHead(head,7);
    insertAtHead(head,11);
    insertAtMiddle(head,25,3);
    insertAtTail(head,36);
     //print(head);
    //deleteAtHead(head);
    print(head);
    int key;
    cin>>key;
    if(search(head,key))
    {
        cout<<"element found"<<"\n";
    }
    else{
        cout<<"element not found"<<"\n";
    }

    if(searchRecursively(head,key))
    {
        cout<<"element found"<<"\n";
    }
    else{
        cout<<"element not found"<<"\n";
    }

    return 0;
}
