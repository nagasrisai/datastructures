#include<bits/stdc++.h>

using namespace  std;

#define MAX 07

class Stack {
    int top;
public:
    int a[MAX];

    Stack(){
        top=-1;
    }
    bool push(int x);

    int pop();

    int peek();

    bool isempty();

};

bool Stack::push(int x) {
    if(top< (MAX-1) ) {
        a[++top]=x;
        cout<<x<<" "<<"\n";
        return true;

    }
    else {
        cout<<"stack overflow"<<"\n";
        return false;
    }
}

int Stack:: pop() {
    if(top==-1) {
        cout<<"stack is empty or stack underflow"<<"\n";
        return -1;
    }
    else {
        int element=a[top--];
         cout<<"poped element is"<<element<<"\n ";
         return element;
    }
}
int Stack::peek() {
    if(top==-1) {
        cout<<"stack underflow"<<"\n";
        return -1;
    }
    else {
        int element=a[top];
        cout<<"top most element is "<<element<<"\n ";
        return element;
    }
}
bool Stack::isempty() {
    if(top==-1) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    class Stack s;
    s.push(1);

    s.push(2);

    s.push(3);

    s.push(4);

    s.push(5);

    s.push(7);

    s.push(8);

    s.push(9);

    s.pop();

    s.peek();

    s.pop();

    s.peek();

    s.isempty();

    return 0;

}
