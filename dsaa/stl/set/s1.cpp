// here in set insert of duplicate is not allowed while in multiset is allowed 
#include<bits/stdc++.h>
using namespace std;
void print(set<string> &s){
    for(string value: s){
        cout<<value<<endl;
    }
}
int main(){
 set<string> s;
 s.insert("abc");   //O(log n)
 s.insert("gss");
 s.insert("gss");
 s.insert("fss");
auto it=s.find("abc");
if(it!=s.end()){
    // cout<<(*it);
    s.erase("abc");
    print(s);
}
return 0;
}