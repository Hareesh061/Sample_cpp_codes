#include<iostream>
using namespace std;

 void linear_search(int n,int arr[],int k)
 {
    for(int i=0;i<n;i++){
        if(k==arr[i]){
            cout<<"key is found:"<<" "<<"the key found in index: "<<i;
        }
        
      
    }
    cout<<"key not found:";

 }

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;
    linear_search(n,arr,k);
    
}