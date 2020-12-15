#include<bits/stdc++.h>

using namespace std;

int a[100], n=100, front=-1, rear=-1;

void enqueue(int val) {

    if(rear==n-1) {
        cout<<"queue is full"<<"\n";
        return;
    }

    else if(front==-1 && rear==-1) {
        front=rear=0;
        a[rear]=val;
    }

    else {
        rear++;
        a[rear]=val;

    }

}

void dequeue() {
    if(front==-1 && rear==-1) {
        cout<<"Queue is empty"<<"\n";
        return;
    }

    else if(rear==front) {
        cout<<"Dequeue element is"<<a[rear]<<"\n";
        return;
    }

    else {
        cout<<"Dequeue element is "<<a[front]<<"\n";
        front++;
    }

}

void display() {

    for(int i=front; i<=rear; i++) {
        cout<<"the element in the queue is"<<a[i]<<"\n";
    }
}

int main() {

    enqueue(1);

    enqueue(2);

    enqueue(3);

    enqueue(4);

    enqueue(5);

    display();

    dequeue();

    enqueue(6);

    enqueue(7);

    display();

    dequeue();

    return 0;
}
