#include<bits/stdc++.h>
using namespace std;


void sortSqure(int arr[],int n){
    for(int i=0;i<n;i++){
        arr[i]=arr[i]*arr[i];
    }

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
}

int main(){

int n;
cout<<"enter the array size: ";
cin>>n;

int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}


sortSqure(arr,n);
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;

}
