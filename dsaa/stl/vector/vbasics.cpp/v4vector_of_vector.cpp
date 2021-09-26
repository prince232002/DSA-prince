/* here 2d array of vector so array is dynamic and 2d as row is fixed and column is varying to make rows also 
// dynamic we take vector<vector<int>
// now we dont need to give row no simply v  not v[N] */
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void printvec(vector<int> v){
  cout<<"size "<<v.size()<<endl;
  for(int i=0; i<v.size(); ++i){
  cout<<v[i]<<" ";
  }cout<<endl;
}
int main(){
    int N;
    cin>>N;
vector<vector<int>> v;
for(int i=0; i<N; i++){
int n;
cin>>n;
vector<int> temp;
    for(int j=0;j<n; j++) {
    int x;
    cin>>x;
    temp.push_back(x);
}
    v.push_back(temp);
}
//------------ or------------
//     v.push_back(vector<int> ());
//     for(int j=0;j<n; j++) {
//     int x;
//     cin>>x;
//     v[i].push_back(x);
// }
v[0].push_back(10);  //this will push 10 in row2 
for(int i=0; i<v.size(); i++){
    printvec(v[i]);
}
cout<<v[2][1];

return 0;
}