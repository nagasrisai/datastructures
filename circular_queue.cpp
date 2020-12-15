#include<bits/stdc++.h>

# define MAx_size 7

using namespace  std;

class Queue {
private:
    int a[MAx_size];
    int front,rear;

public:
    Queue() {
        front=-1;
        rear=-1;
    }

    bool isEmpty() {
        if(rear==-1 && front==-1) {
            return true;
        }

        else {
            return false;
        }
    }

    bool isFull() {
        return ((rear+1)%MAx_size)==rear ? true:false;
    }

    void enqueue(int data) {

        if(isFull()) {
            cout<<"Queue is Full"<<"\n";
            return;
        }

        if(isEmpty()) {
            front=rear=0;

        }

        else {
            rear = (rear+1)%MAx_size;


        }
        a[rear]=data;
        cout<<"the data inserted is "<<data<<"\n";

    }


    void dequeue() {
        if(isEmpty()) {
            cout<<"Queue is empty"<<"\n";
        }

        else if(rear==front) {
            rear=front=-1;
        }

        else {
            front = (front+1)%MAx_size;
            cout<<"Dequeue element"<<"\n";
        }

    }

    int peek() {
        if(front==-1 && rear==-1) {
            cout<<"Queue is empty"<<"\n";
            return -1;
        }

        else {
            return a[front];
        }

    }

    void print() {
        int count = (rear+MAx_size-front)%MAx_size + 1;
        for(int i=0; i<count; i++) {
            int index=(front+i)%MAx_size;
            cout<<"The elements are"<<a[index]<<"\n";
        }
        
        cout<<"\n";
    }

};
int main() {
    Queue q;
    bool x=q.isEmpty();
    cout<<"is queue is empty?"<<x<<"\n";

    q.enqueue(1);

    q.enqueue(2);

    q.enqueue(3);

    q.enqueue(4);

    q.enqueue(5);

    int z=q.peek();
    cout<<"the peek element is "<<z<<"\n";

    bool e=q.isFull();
    cout<<"is queue is full"<<e<<"\n";

    q.enqueue(6);

    bool d=q.isFull();
    cout<<"is queue is full"<<d<<"\n";

    q.enqueue(7);

    bool c=q.isFull();
    cout<<"is queue is full?"<<c<<"\n";

    int b=q.peek();
    cout<<"the peek element is "<<b<<"\n";

    bool a=q.isEmpty();
    cout<<"the empty queue is"<<a<<"\n";

    q.print();

    q.dequeue();

    q.print();


}
