#include<bits/stdc++.h>

using namespace  std;

struct node{
    int data;
    node* left=NULL;
    node* right=NULL;
};

node* create_node(int data) {
    node* new_node= new node();
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
    return new_node;
}

void inorder(node* root) {
    if(root==NULL) {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main() {
    node* root=create_node(1);
    root->left=create_node(2);
    root->right=create_node(3);
    root->left->left=create_node(4);
    root->left->right=create_node(10);
    root->right->right=create_node(5);
    root->right->left=create_node(9);


    inorder(root);

}
