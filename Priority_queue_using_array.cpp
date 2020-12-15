#include<bits/stdc++.h>

using namespace std;

int a[100],n=100,front=-1,co=0;

void enqueue(int data) {
    if(front==n-1 ) {
        cout<<"queue is empty"<<"\n";
        return;
    }
    else {
        front++;
        a[front]=data;
        co++;
        cout<<"the element inserted"<<data<<"\n";
    }
}

void dequeue() {
    int max=0;
    for(int i=0; i<co; i++) {
        if(a[max]<a[i]) {
            max=i;
        }

    }
    cout<<"Dequeue element is"<<a[max];

    a[max]=a[co-1];
    co=co-1;

}

int main() {
    enqueue(5);

    enqueue(4);

    enqueue(1);

    enqueue(3);

    enqueue(2);

    dequeue();

    dequeue();

    return 0;
}
