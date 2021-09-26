// auto -> identify itself the type of variable dont use it while declaring 
// Auto deduce type to be iterator of a vector of ints
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
 vector<int> v={2,3,5,6,7};
 for (int i=0; i<v.size(); ++i){
     cout<<v[i]<<" ";
 }cout<<endl;
//  vector<int> ::iterator it= v.begin();
//  for(it=v.begin(); it!=v.end(); ++it){ 
//      cout<<(*it)<<" ";                 
//  }   or
 for(auto it=v.begin(); it!=v.end(); ++it){ 
     cout<<(*it)<<" ";                 
 }
 cout<<endl;
//  for(int &value:v){ //if we use value then it doesnt change the value as it is passing value but now referenc
//      value++;
//     //  cout<<value<<" ";
//  }
//  for(int value:v){
//      cout<<value<<" ";
//  }cout<<endl;
// vector<pair<int , int>> v_p={{4,5},{5,6}};
// for(pair<int ,int> &value :v_p){
//     cout<<value.first<<" "<<value.second;
// }
vector<pair<int , int>> v_p={{4,5},{5,6}};
for(auto &value :v_p){
    cout<<value.first<<" "<<value.second;
}
return 0;
}