#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
        int data;
        node*left;
        node*right;

        node(int d){
            data = d;
            left = NULL;
            right = NULL;
        }
};

node* buildTree(){
    int d;
    cin>>d;

    if(d==-1){
        return NULL;
    }
    node * root = new node(d);
    root->left = buildTree();
    root->right = buildTree();
    return root;
}
void print(node *root){
    if(root==NULL){
        return;
    }
    //Otherwise, print root first followed by subtrees(children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}

void printIn(node*root){
    if(root==NULL){
        return;
    }
    //Otherwise Left Root Right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}

void printPost(node*root){
    if(root==NULL){
        return;
    }
    printPost(root->left);
    printPost(root->right);
    cout<<root->data<<" ";
}

int height(node*root){
    if(root==NULL){
        return 0;
    }
    int ls = height(root->left);
    int rs = height(root->right);
    return max(ls,rs) + 1;

}

void printKthLevel(node*root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printKthLevel(root->left,k-1);
    printKthLevel(root->right,k-1);
    return;

}

void printAllLevels(node*root){
    int H = height(root);

    for(int i=1;i<=H;i++){
        printKthLevel(root,i);
        cout<<endl;
    }
    return;
}

int count(node*root){
    if(root==NULL){
        return 0;
    }
    return 1 + count(root->left) + count(root->right);
}

int sum(node*root)
{
    if(root==NULL){
        return 0;
    }
    return root->data+sum(root->left)+sum(root->right);
}


void bfs(node *root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}


int main(){ 
    node* root = buildTree();
    //cout<<count(root)<<endl;
    //printAllLevels(root);
    bfs(root);
    cout<<count(root)<<endl;
    cout<<sum(root)<<endl;

return 0;
}










