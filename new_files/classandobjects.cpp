#include<bits/stdc++.h>
using namespace std;

class student{
  int s_num;
  string name;

  public:
    student(){
        cout<<"enter num";
        cin>>s_num;
        cout<<"enter name";
        cin>>name;
    }
    void display(){
        cout<<"student name"<<name<<endl<<"number for student"<<s_num;
    }
};

int main(){
    student s;
    s.display();
}