#include<iostream>
#include <string>
using namespace std;

int main(){
   string str;

    getline(cin,str);
    cout<<"the string is "<<str.length()<< str<<endl;


    str.push_back('u');

    cout<<"after push back"<<str<<endl;
   str.pop_back();

   cout<<str;

   
  
}