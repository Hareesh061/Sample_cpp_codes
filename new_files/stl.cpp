
//"deque"

// #include<iostream>
// #include<deque>

// using namespace std;

// int main(){
    
//     deque<int>d;
//     d.push_front(1);
//     d.push_back(2);
//     d.push_back(3);
//     d.push_front(7);
//     d.pop_back();
//     d.pop_front();
//     d.erase(d.begin(),d.begin()+1);
//     for(int i:d){
//         cout<<i<<" ";
//     }
    
// }



//"list"

// #include<iostream>
// #include<list>

// using namespace std;

// int main(){
// list<int> l;

// l.push_back(1);
// l.push_front(4);
// l.pop_back();
// l.pop_front();
// l.empty();



// for(int i:l){
//     cout<<i<<" ";

// }
// }


// "stack"

// #include<iostream>
// #include<stack>

// using namespace std;
// int main(){
//     stack<int> std;
//     std.push(1);
//     std.push(2);
//     std.push(3);
    
//   cout<<std.top()<<endl;

//    std.pop();
//    cout<<std.top()<<endl;

// }


// "queue"
// #include<iostream>
// #include<queue>

// using namespace std;
// int main(){
    
//     queue<int> q;
//     q.push(1);
//     q.push(2);
//     q.push(3);
//    cout<<q.front()<<endl;
//    cout<<q.back()<<endl;
//     q.pop();
//   cout<<q.front();
// }


// " priority queue"

// #include<iostream>
// #include<queue>
// using namespace std;

// int main(){
// //max heap
// priority_queue<int>maxi;

// //min heap
// priority_queue<int,vector<int>, greater<int>> min;

// maxi.push(1);
// maxi.push(3);
// maxi.push(6);
// maxi.push(4);

// int n=maxi.size();
// for(int i=0;i<n;i++){
//     cout<<maxi.top()<<" ";
//      maxi.pop();
// }
// cout<<endl;
// cout<<endl;
//   min.push(9);
//   min.push(4);
//   min.push(1);
//   min.push(5);

//   int k=min.size();
//   for(int j=0;j<k;j++){
//     cout<<min.top()<<" ";
//     min.pop();
//   }
// }



// " set "


// #include<iostream>
// #include<set>

// using namespace std;

// int main(){
//  set<int> s;
//  s.insert(7);
//  s.insert(4);
//  s.insert(3);
//  s.insert(8);
//  for(auto i:s){
//     cout<<i<<" ";
//  }
//  cout<<s.count(4);
// cout<<endl;



// }


// " map "

// #include<iostream>
// #include<map>
// #include<unordered_map>

// using namespace std;

// int main(){
// map<int,string>m;

// unordered_map<int,string>um;

// m[8]="lockesh";
// m[6]="loki";
// m.insert({4,"hari"});


// for(auto i:m){
//     cout<<i.first<<" "<<i.second;
// }


// }

// algorithm

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){

vector<int> v;

v.push_back(3);
v.push_back(4);
v.push_back(18);
v.push_back(23);



cout<<binary_search(v.begin(),v.end(),3)<<endl;

const int a=2;
const int b=6;

cout<<max(a,b);

cout<<endl;

cout<<min(a,b);

string e="hai my name is hareesh";
reverse(e.begin(),e.end());
cout<<e;


rotate(v.begin(),v.begin()+2,v.end());
for(auto i:v){
    cout<<i<<" ";
}
cout<<endl;
sort(v.begin(),v.end(),greater<int>());
for(auto i:v){
    cout<<i<<" ";
}

}


