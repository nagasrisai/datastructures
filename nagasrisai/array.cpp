#include<bits/stdc++.h>

using namespace std;

void insert_at_beginning (int arr[], int *n, int size, int ele) {
    int i;


    for(i=*n; i>=0; i--) {
        arr[i+1]=arr[i];
    }
    arr[0]=ele;

    *n++;

}

void insert_at_middle (int arr[], int *n, int size, int ele, int pos) {
    if(*n<pos) {
        try {
            throw "out of bound index";
        }
        catch (char const* error) {
            cout<<error<<"\n";

        }
    }

    else {

        for (int i = *n; i >pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos - 1] = ele;

        *n++;
    }
}

void insert_at_end (int arr[], int *n, int size, int ele) {

    arr[*n++]=ele;
}

void delete_at_begining(int arr[], int *n , int size) {
    int i=0;
    for(i=0; i<*n; i++) {
        arr[i]=arr[i+1];
    }

    *n--;
}

void delete_at_middle (int arr[], int *n, int size, int pos) {

    for(int i=pos-1; i<*n-1; i++) {
        arr[i]=arr[i+1];
    }

    *n--;
}

void delete_at_end(int arr[], int *n, int size) {
    *n--;
}

void search_for_element (int arr[], int n, int size, int ele) {

    for(int i=0; i<n; i++) {
        if(arr[i]==ele) {
            cout<<i<<" ";
        }
    }

}
int main() {

    int size=6;

    int arr[50]={0,2,3,4,5,6};

    int n = sizeof(arr)/sizeof(arr[0]);

    insert_at_beginning(arr, &n, size, 1);
    size++;

    insert_at_beginning(arr, &n, size, 7);
    size++;

    insert_at_beginning(arr, &n, size, 8);
    size++;

    insert_at_beginning(arr, &n,size,9);
    size++;

    insert_at_beginning(arr,&n,size,10);
    size++;

    insert_at_middle(arr, &n, size, 10, 3);
    size++;

    delete_at_begining(arr, &n, size);

    delete_at_middle(arr, &n, size, 2);

    delete_at_end(arr,&n, size);

    search_for_element(arr,n,size,9);

    cout<<arr[0]<<"\n";

    cout<<arr[1]<<"\n";

    cout<<arr[2]<<"\n";

    cout<<arr[3]<<"\n";

    cout<<arr[4]<<"\n";

    cout<<arr[5]<<"\n";

    cout<<arr[6]<<"\n";

    cout<<arr[7]<<"\n";

    cout<<arr[8]<<"\n";

    cout<<arr[9]<<"\n";

    cout<<arr[10]<<"\n";

    cout<<size<<"size"<<"\n";



    cout<<n<<"total"<<"\n";

    return 0;

}
