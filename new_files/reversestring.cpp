#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
    string reversWords(string S){
        int j=S.length()-1;
        int k=S.length()-1;
        
        string res="";
    while(j>=0){
             if(S[j]=='.'){
             for(int i=j+1; i<=k;i++){
                 res=res+S[i];
             }  
             res=res+'.';
             k=j-1;
             }
             j--;
             if(j==0){
                 for(int i=j;i<=k;i++){
                     res=res+S[i];
                                     }
                    }
             
        
      
    
                  }return res;
        
            }  
};

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        Solution obj;
        cout<<obj.reversWords(s)<<endl;
    }
}
