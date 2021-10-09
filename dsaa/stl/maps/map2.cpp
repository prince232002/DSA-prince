#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void print(map<int,string> &m){
    cout<<m.size()<<endl;
    for(auto &pr :m){
        cout<<pr.first<< " "<<pr.second<<endl;
    }
}
int main(){
 map<int,string> m;
 m[1]="abc";
 m[2]="cvd";
 m[3]="acd";
 auto it=m.find(1);  //find the value
//  if(it!=m.end())
//     m.erase(it);    //O(log n)
// m.clear();
if(it==m.end()){
    cout<<"NO value";
}
else{
    cout<<.first<<" "<<(*it).second;
    }
 print(m);
}
// l