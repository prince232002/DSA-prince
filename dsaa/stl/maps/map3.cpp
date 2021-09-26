// unique string in lex order 
#include<bits/stdc++.h>
using namespace std;
int main(){
 map<string,int > m;   //o(log n)
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
     string s;
     cin>>s;           //o(log n)
     m[s]++;
 }
//  to output the map 
 for(auto it:m ){
 cout<<it.first<<' '<<it.second<<endl;
 }
return 0;
}