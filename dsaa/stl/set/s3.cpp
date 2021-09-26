// unordered set -- have tiee complexity o(1) 
#include<bits/stdc++.h>
using namespace std;
int main(){
 unordered_set<int> s;
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
     string str;
     cin>>str;
     s.insert(str);
 }
 for(auto it:s ){
 cout<<it<<endl;
 }
return 0;
}