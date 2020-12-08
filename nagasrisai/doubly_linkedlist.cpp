
#include<bits/stdc++.h>

using namespace  std;

struct node {
    int data;
    node* next;
    node* prev;
};

node* create_node(int data) {
    node* new_node=new node();

    new_node->data=data;
    new_node->prev=NULL;
    new_node->next=NULL;

    return new_node;
}

node* insert_at_beggining(node** root, int data) {
    node* new_node= create_node(data);

    if(*root==NULL) {
        *root=new_node;
        return *root;
    }
    else {
        new_node->next=*root;

        (*root)->prev=new_node;

        (*root)=new_node;

        return (*root);
    }
}

void insert_at_middle (node** root, int data, int position) {
    node* temp=(*root);

    node* new_node=create_node(data);

    for(int i=0; i<position-1; i++)  {

        temp=temp->next;

    }
    node* next=temp->next;

    temp->next=new_node;

    new_node->prev=temp;

    new_node->next=next;

    next->prev=new_node;
}

void insert_at_end (node** root, int data) {
    node* temp=(*root);

    node* new_node=create_node(data);

    while(temp->next!=NULL) {

        temp=temp->next;

    }
    temp->next=new_node;

    new_node->prev=temp;

}

void delete_at_beggining(node** root) {
    node* temp=(*root);

    (*root)=(*root)->next;

    temp->next=NULL;

    (*root)->prev=NULL;


}

void delete_at_middle(node** root, int position) {
    node* temp=(*root);

    for(int i=0; i<=position-1; i++) {
        temp=temp->next;
    }

    node* prevv=temp->prev;

    node* next= temp->next;

    prevv->next=next;

    next->prev=prevv;

    free(temp);
}

void delete_at_end(node** root) {
    node* temp=(*root);

    while(temp->next!=NULL) {
        temp=temp->next;
    }

    free(temp);
}

void display(node* root) {
    node* temp=root;

    while(temp!=NULL) {
        cout<<temp->data<<" ";

        temp=temp->next;

    }
    cout<<"\n";
}

void reverse_print(node* root) {
    node* temp=root;

    while(temp->next!=NULL) {
        temp=temp->next;
    }

    while(temp!=root) {
        cout<<temp->data<<" ";

        temp=temp->prev;
    }
    cout<<temp->data<<" ";
}

int main() {

    node* root=NULL;

    insert_at_beggining(&root, 1);

    insert_at_beggining(&root, 2);

    insert_at_beggining(&root, 3);

    insert_at_beggining(&root, 4);

    insert_at_beggining(&root, 5);

    insert_at_beggining(&root, 6);

    insert_at_middle(&root,50,3);

    insert_at_end(&root,10);

    delete_at_beggining(&root);

    delete_at_middle(&root, 3);

    delete_at_end(&root);

    display(root);

    reverse_print(root);

    return 0;

}
