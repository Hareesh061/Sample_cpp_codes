#include<bits/stdc++.h>
using namespace std;


class node{
  public:
     int data;
     node* left;
     node* right;

     node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
     }

};

node* build_tree(node *root){
   
    cout<<"enter data:"<<endl;
    int data;
    cin>>data;
    root= new node(data);

    if(data==-1){
        return NULL;
    }
  

cout<<"enter data for inserting left:"<<endl;
root->left=build_tree(root->left);
cout<<"enter data for inserting right:"<<endl;
root->right=build_tree(root->right);
return root;
    
}


int main(){

  node* root=NULL;

  root=build_tree(root);  


}
