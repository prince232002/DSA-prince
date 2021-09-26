/* set  also stores sorted array and time--O(log n)
// its internal implementation is also red black trees
//same as map and unordered map it also  have same different
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
 set<string>s;
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