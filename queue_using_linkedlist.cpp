#include<bits/stdc++.h>

using namespace std;

struct node{
    int data;
    node* next;
};

node* create_node(int data) {
    node* new_node = new node();
    new_node->data=data;
    new_node->next=NULL;
}

void enqueue (node** root,int data) {
    if(*root==NULL) {
        node* new_node=create_node(data);
        *root=new_node;
        return;
    }

    else {
        node* new_node=create_node(data);
        node* temp=*root;

        while(temp->next!=NULL) {
            temp=temp->next;
        }

        temp->next=new_node;

    }

}

void dequeue(node** root) {
    node* temp=*root;
    *root=(*root)->next;

    free(temp);
}

void peek(node* root) {
    cout<<"the peeek element is "<<(root)->data<<"\n";
}

void rear(node* root) {
    node* temp=root;

    while(temp->next!=NULL) {
        temp=temp->next;
    }

    cout<<"the rear element is"<<temp->data<<"\n";
}

void print(node* root) {
    node* temp=root;

    cout<<"the elements are"<<"\n";
    while(temp!=NULL) {
        cout<<"the element is "<<temp->data<<"\n";
        temp=temp->next;
    }
    cout<<"\n";
}

int main() {
    node* root=NULL;

    enqueue(&root,1);

    enqueue(&root,2);

    enqueue(&root,3);

    enqueue(&root,4);

    enqueue(&root,5);

    peek(root);

    rear(root);

    print(root);

    dequeue(&root);

    peek(root);

    rear(root);

    print(root);
}
