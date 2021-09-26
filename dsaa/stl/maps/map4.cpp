// unodered map-----
// unique string in  non lex order 
// now here we use unordered map as lex order it not priority 
// time complexity is o(1) not o(log n)
#include<bits/stdc++.h>
using namespace std;
int main(){
 unordered_map<string,int > m;
 int n;
 cin>>n;
 for(int i=0; i<n; i++){
     string s;
     cin>>s;
     m[s]++;
 }
//  to output the map 
 for(auto it:m ){
 cout<<it.first<<' '<<it.second<<endl;
 }
return 0;
}
