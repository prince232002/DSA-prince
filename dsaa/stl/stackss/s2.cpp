//  parenthesis count balance using stack --------
 #include<bits/stdc++.h>
using namespace std;
unordered\\\_map<int ,int> symbols={{'[',-1},{'{',-2},{'(',-3},{']',1},{'}',2},{')',3}};
string isbalance(string s){
    stack<char> st;
    for(char bracket:s){
        if(symbols[bracket]<0){
            st.push(bracket);}
        else{
            if(st.empty()) return "NO";
            char top=st.top();
            st.pop();
            if(symbols[top]+symbols[bracket])
               return "NO";
            }
        }
    if(st.empty()) return "YES";
    return "NO";
}
int main(){
 int t;
 cin>>t;
 while(t--){
     string s;
     cin>>s;
     cout<< isbalance(s)<<endl;

 }
}