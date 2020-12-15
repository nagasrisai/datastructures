#include<bits/stdc++.h>

#define Max 7;

using namespace std;

int s1[100],s2[100],co=0,n=100,top1=-1,top2=-1;


void push1(int data) {
    if(top1==n-1) {
        cout<<"Queue is full"<<"\n";
        return;
    }

    top1++;
    s1[top1]=data;
    cout<<"the element inserted is"<<data<<"\n";
}


void push2(int data) {
    if(top2==n-1) {
        cout<<"queue is full"<<"\n";
        return;
    }

    else{
        top2++;
        s2[top2]=data;

    }
}

int  pop1 () {

    return s1[top1--];
}

int pop2() {
    return s2[top2--];
}

void enqueue (int data) {
    push1(data);
    co++;

}

void dequeue() {
    if(top1==-1 && top2==-1) {
        cout<<"queue is empty"<<"\n";
        return;
    }

    else {
        for(int i=0; i<co; i++) {

            int a = pop1();
            push2(a);
        }
    }

    int b=pop2();
    cout<<"dequeu element is "<<b<<"\n";
    co--;
    for(int i=0; i<co; i++) {
        int c=pop2();
        push2(c);
    }
}

void display () {
    for(int i=0; i<=top1; i++) {
        cout<<"the elements are"<<s1[top1]<<"\n";
    }
}

int main() {
    enqueue(1);

    enqueue(2);

    enqueue(3);

    enqueue(4);

    display();

    dequeue();

    enqueue(5);

    enqueue(6);

    display();

    dequeue();

    return 0;
}
