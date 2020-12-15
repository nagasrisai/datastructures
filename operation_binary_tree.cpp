#include<bits/stdc++.h>

using namespace std;

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
    return new_node;
}

node * insert(node* root , int data) {
    node* new_node=create_node(data);
    if(root==NULL) {
        return create_node(data);
    }
    if(data<root->data) {
        root->left=insert(root->left,data);
    }
    else {
        root->right=insert(root->right,data);
    }
}

void inorder_using_recursion(node* root) {
    cout<<"inorder traversal without recursion"<<"\n";
    stack<node *>s;
    node* curr=root;
    while(curr!=NULL || s.empty()==false ) {

        while(curr!=NULL) {
            s.push(curr);
            curr=curr->left;
        }
        curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        curr=curr->right;
    }
}

void preorder_without_recursion(node* root)  {
    cout<<"Preorder Traversal"<<"\n";
    if(root==NULL) {
        return;
    }
    stack<node *>s;
    s.push(root) ;
    while(!s.empty()) {
        node* curr=s.top();
        s.pop();
        cout<<curr->data<<" ";
        if(curr->right) {
            s.push(curr->right);
        }
        if(curr->left) {
            s.push(curr->left);
        }
    }
}

int height(node* root) {
    if(root==NULL) {
        return 0;
    }
    node* curr=root;
    queue<node* >q;
    q.push(root);
    int height=0;

    while(1) {
        int node_count=q.size();
        if(node_count==0) {
            return height;
        }
        height++;
        while(node_count>0) {
            node* node=q.front();
            q.pop();
            if(node->left) {
                q.push(node->left);
            }
            if(node->right) {
                q.push(node->right);
            }
            node_count--;
        }


    }

}

int height_using_recursion(node* root) {
    if(root==NULL) {
        return 0;
    }
    int le=height_using_recursion(root->left);
    int ri =height_using_recursion(root->right);
    if(le>ri) {
        return 1+le;
    }
    else {
        return 1+ri;
    }
}

void level_order_traversal(node* root){
    cout<<"Level Order Traversal"<<" ";
    node* curr;
    queue<node *>q;
    q.push(root);
    while(!q.empty()) {
        curr=q.front();
        q.pop();
        cout<<curr->data<<" ";
        if(curr->left) {
            q.push(curr->left);
        }
        if(curr->right) {
            q.push(curr->right);
        }
    }
}


int main() {
    node* root=NULL;
    root=insert(root,5);

    root=insert(root,3);

    root=insert(root,9);

    root=insert(root,2);

    root=insert(root,7);

    root=insert(root,1);

    root=insert(root,8);

    root=insert(root,4);

    root=insert(root,6);

    inorder_using_recursion(root);

    preorder_without_recursion(root);

    cout<<"height of a tree"<<height(root);

    cout<<"height of a tree with recursion"<<height_using_recursion(root);

    level_order_traversal(root);

    return 0;


}
