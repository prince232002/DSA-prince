#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void printvec(vector<pair<int,int>> v){
  cout<<"size "<<v.size()<<endl;
  for(int i=0; i<v.size(); ++i){
  cout<<v[i].first<<" "<<v[i].second<<endl;
  }
}
int main(){
vector<pair<int ,int>> v={{4,4},{5,7}};
int n;
cin>>n;
for(int i=0; i<n; i++){
    int x,y;
    cin>>x>>y;
    v.push_back({x,y});
}
printvec(v);
return 0;
}