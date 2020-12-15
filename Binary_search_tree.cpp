#include<bits/stdc++.h>

using namespace  std;

struct node {
    int data;
    node* left;
    node* right;
};

node* create_node(int data) {
    node* new_node=new node();
    new_node->data=data;
    new_node->left=NULL;
    new_node->right=NULL;
}

node* insert_node(node* root, int data) {
    if(root==NULL) {
        return create_node(data);
    }
    if(data<=root->data) {
        root->left=insert_node(root->left,data);
    }
    else {
        root->right=insert_node(root->right,data);
    }
    return root;
}

node* min_value(node* root) {
    node* curr=root;
    while(curr&&curr->left!=NULL) {
        curr=curr->left;
    }
    return curr;
}

node* delete_node(node* root,int data) {
    if(root==NULL) {
        return root;
    }
    if(data<root->data) {
        root->left=delete_node(root->left,data);
    }
    else if(data>root->data) {
        root->right=delete_node(root->right,data);
    }
    else {
        if(root->left==NULL && root->right==NULL) {
            free(root);
            root=NULL;
            return root;
        }
        else if(root->right==NULL) {
            node* temp=root;
            root=root->left;

            free(temp);
        }
        else if (root->left==NULL){
            node* temp=root;
            root=root->right;
            free(temp);
        }
        else {
            node* curr=min_value(root->right);
            root->data=curr->data;
            root->right=delete_node(root->right,curr->data);

        }
        return root;

    }
    return root;
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
    node* root=NULL;
    root=insert_node(root, 15);

    root=insert_node(root,10);

    root=insert_node(root,6);

    root=insert_node(root,13);

    root=insert_node(root,7);

    root=insert_node(root,18);

    root=insert_node(root,20);

    root=insert_node(root,16);

    inorder(root);

    root=delete_node(root,18);

    inorder(root);

    return 0;
}
