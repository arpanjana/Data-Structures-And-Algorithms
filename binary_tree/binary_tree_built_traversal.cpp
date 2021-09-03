#include <iostream>
using namespace std;


class node
{

public:
    int data;
    node* left;
    node* right;
    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    node* root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}

void printInOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printInOrder(root->left);
    printInOrder(root->right);
}

void printPreOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printPreOrder(root->left);
    cout<<root->data<<" ";
    printPreOrder(root->right);

}

void printPostOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printPostOrder(root->left);
    printPostOrder(root->right);
    cout<<root->data<<" ";
}




int main()
{
    node* root = buildTree();
    printInOrder(root);
    cout<<"\n";
    printPreOrder(root);
    return 0;
}