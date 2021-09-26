// here 2d array of vector so array is dynamic and 2d as row is fixed and column is varying
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
vector<int> v[N];   //here in case of vec of vec we dont need to give N ie row simply v 
for(int i=0; i<N; i++){
int n;
cin>>n;
    for(int j=0;j<n; j++) {
    int x;
    cin>>x;
    v[i].push_back(x);

}
}
v[0].push_back(10);  //this will push 10 in row2 

for(int i=0; i<N; i++){
    printvec(v[i]);
}
cout<<v[0][1];
return 0;
}