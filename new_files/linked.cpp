#include<bits/stdc++.h>
using namespace std;

class Node{
  public:
   int data;
  Node* next;

};

  void print(Node* n){
    while(n!=NULL){
        cout<<n->data<<" ";
        n=n->next;
    }
}

int main(){
    Node* first=new Node();
    Node* second= new Node();
    Node* third= new Node();

     
    first->data=1;
    first->next=second;
    second->data=2;
    second->next=third;
    third->data=3;
    third->next=NULL;

   print(first);
}

