// vectors has dynamic size so we dont need to pass a variable
//  in function while declaring  ---use .size()
// it also has local var limit like arrays i.e 10^5 for its elements so you declare a global 

#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void printvec(vector<int> &v){
  cout<<"size "<<v.size()<<endl;
  for(int i=0; i<v.size(); ++i){
  cout<<v[i]<<" ";
  }
  v.push_back(8);
  cout<<endl;
  }
int main(){
  
   // copying AN ARRAY
//  vector<int> b={4,5,5};
//  vector<int> a =b;
//  printvec(a);
vector<int> v;
v.push_back(4);
v.push_back(2);
vector<int> &v2=v;
// vector<int> v2=v;
v2.push_back(5);

 printvec(v);
 printvec(v);
 printvec(v2);
 
}