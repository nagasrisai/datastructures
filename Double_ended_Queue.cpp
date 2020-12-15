#include<bits/stdc++.h>

using  namespace std;

int a[5], n=5, front=-1, rear=-1;

void enqueue_at_front (int x) {
    if((front==0&& rear==n-1)||front==rear+1) {
        cout<<"Queue is full"<<"\n";
        return;
    }
    else if(front==-1&& rear==-1) {
        cout<<"Queue is empty"<<"\n";
        front=rear=0;
        a[rear]=x;
    }
    else if(front==0) {
        front=n-1;
        a[front]=x;
    }
    else {
        front--;
        a[front]=x;
    }
}

void enqueue_at_end (int x) {
    if((front==0&& rear==n-1)||front==rear+1) {
        cout<<"Queue is full"<<"\n";
        return;
    }
    else if(rear==n-1) {
        rear=0;
        a[rear]=x;
    }
    else {
        rear++;
        a[rear]=x;
    }
}

void dequeue_at_front() {
    if(rear==-1 && front==-1) {
        cout<<"underflow" <<"\n";
        return;
    }
    else if(rear==front) {
        front=rear-1;
    }
    else if(front==n-1) {
            cout<<"dequeu"<<a[front];
            front=0;

    }
    else {
        front++;
    }
}

void dequeue_at_end () {
    if(rear==-1 && front==-1) {
        cout<<"underflow" <<"\n";
        return;
    }
    else if(front==rear) {
        front=rear-1;
    }
    else if(rear==0) {
        rear=n-1;
    }
    else
    {
        rear--;
    }

}

void display() {
    for(int i=0; i<n; i++) {
        int k=(front+i)%n;
        cout<<a[k]<<" ";
    }
    cout<<"\n";
}


int main() {
    enqueue_at_front(1);

    enqueue_at_front(2);

    enqueue_at_front(3);

    enqueue_at_end(4);

    display();

    enqueue_at_end(2);

    display();

    dequeue_at_front();

    display();

    enqueue_at_end(6);

    display();

    dequeue_at_end();

    display();

    enqueue_at_end(7);

    display();

    dequeue_at_front();

    display();

    enqueue_at_end(1);

    display();

    dequeue_at_end();


    display();

    return 0;

}
