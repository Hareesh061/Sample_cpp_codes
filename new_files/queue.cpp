#include<bits/stdc++.h>
using namespace std;

class Queue{
    int size;
    int *arr;
    int front;
    int rear;


public:
Queue(int size){
    size=100001;
    arr = new int[size];
    front=0;
    rear=0;
}


void enqueue(int data){
    if(rear==size){
        cout<<"full"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;

    }

}


void dequeue(int data){
 if(front== rear){
    return -1;
 }
 else {
    int ans=arr[front];
    arr[front]=-1;
    front++;
    if(front==rear){
        front=0;
        rear=0;
    }
    return ans;
 }

}

void front(){
if(front==rear){
    return -1;
}
else{
    arr[front];
}

}



};




int main(){
    
    
}