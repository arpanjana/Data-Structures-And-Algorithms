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

node* take_input()
{
    int d;
    cin>>d;
    node*head = NULL;
    while(d!=-1)
    {
        insertAtHead(head,d);
        cin>>d;
    }
    return head;
}
/*
Sometimes it might happen that we have to take the value from a  file
    node* take_input_file()
    {
        int d;
        cin>>d;
        node *head = NULL;
        while(cin>>d)
        {
            insertAtHead(d);
        }
        return head;
    }


*/
/*
    Operator Overloading
    1. We have to define the function using operator keyword 
    (the operator that we are going to overload is <<(left shitf))
    2. this operator is actually going to get two objects
    when you define the operator function outside the class you need to pass both the parameter
    for example we have cout and head(cout<<head)
    so the first object we need to pass is a cout object it is a object of the class "ostream"
    and second object we need to pass is head of data type head*

*/

ostream& operator<<(ostream &os,node *head)
{
    print(head);
    return os; // cout
}

istream& operator>>(istream &is,node *&head)
{
    head = take_input();
    return is;
}

/*
    Now suppose I do this cout<<head<<head2;
    this will throw an error because cout<<head2 is a void
    and void<<head doesn't make any sense.
    so what can we do here is that if we can return the cout object instead of void 
    then we can call the same fucntion again this effect is called as cascading of operators.
    for that what we have to change the type from void to ostream

*/


int main() {
    // node *head = take_input();
    // node *head2 = take_input();
    node *head;
    node *head2;
    cin>>head>>head2;
    cout<<head<<head2;

  /* 
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
    */

    return 0;
}
