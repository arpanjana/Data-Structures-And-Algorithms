#include <iostream>
using namespace std;


class node{

public:
    int data;
    node*left;
    node*right;
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

void printPreOrder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    printPreOrder(root->left);
    printPreOrder(root->right);
}

void printInOrder(node* root)
{
    if(root==NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
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
/*
    Print Each Level(Print Each Kth level)
    for all 1... maxLevel
    no_of_levels === max_height;
    printKth Levl

*/



int height(node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs)+1;
}

void printKthLevel(node* root,int k)
{
    if(root==NULL)
    {
        return;
    }
    if(k==1)
    {
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;
}


void printAllLevel(node* root)
{
    int h = height(root);

    for(int i=1;i<=h;i++)
    {
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}

/*
    Worst time Complexity will be O(N^2)
    because in case of skewed tree
    1+2+3+4+....+n = n*(n+1)/2
    We can reduce this time complexity by using a better aproach called BFS
*/



int main() {
    node* root = buildTree();
    cout<<"PreOrder: "<<endl;
    printPreOrder(root);
    cout<<endl;
    cout<<"InOrder: "<<endl;
    printInOrder(root);
    cout<<endl;
    cout<<"PostOrder: "<<endl;
    printPostOrder(root);
    cout<<endl;
    cout<<height(root)<<endl;
    //printKthLevel(root,3);
    printAllLevel(root);
    return 0;
}
