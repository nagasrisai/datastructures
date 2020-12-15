#include<bits/stdc++.h>

using namespace std;

struct node {
    int data;

    node *next;

};

node * new_node (int data) {
    node *node_new = new node ();

    node_new->data = data;

    node_new->next = NULL;

    return node_new;
}

void insert_at_beggining (node ** root, int data) {
    node *insert_node = new_node (data);

    if (*root == NULL) {

        *root = insert_node;

        return;

    }

    insert_node->next = *root;

    *root = insert_node;

}

void insert_at_middle (node * root, int data, int pos) {
    node *insert_node = new_node (data);

    node *curr = root;

    node *next;

    for (int i = 0; i < pos; i++) {
        curr = curr->next;
    }
    next = curr->next;

    curr->next = insert_node;

    insert_node = next;
}

void insert_at_end (node * root, int data) {
    node *insert_node = new_node (data);

    node *curr = root;

    while (curr->next != NULL) {

        curr = curr->next;

    }

    curr->next = insert_node;
}

void delete_at_beggining (node * root) {
    node *next = root->next;

    node *prev = root;

    root = next;

    free (prev);
}

void delete_at_middle (node * root, int pos) {
    node *curr = root;
    node *next;
    node *prev;
    for (int i = 0; i < pos; i++) {
        curr = curr->next;
    }
    prev = curr;
    next = curr->next->next;
    free (curr->next);
}

void delete_at_end (node * root) {
    node *curr = root;
    while (curr->next->next != NULL) {
        curr = curr->next;
    }
    node *next = curr->next;
    free (next);
}

void print_nodes (node * root) {
    node *curr = root;

    while (curr != NULL) {

        cout << curr->data << " ";

        curr=curr->next;

    }

}

int main () {
    node *root = NULL;

    insert_at_beggining (&root, 1);

    insert_at_beggining (&root, 2);

    insert_at_beggining (&root, 3);

    insert_at_beggining (&root, 4);

    insert_at_beggining (&root, 5);

    insert_at_middle (root, 6, 2);

    insert_at_end (root, 7);

    print_nodes (root);

    delete_at_beggining (root);

    delete_at_middle (root, 3);

    delete_at_end (root);

    print_nodes (root);

    return 0;

}
