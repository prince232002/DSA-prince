// stack--- LIFO ,  lost in first out   1.push 2.pop 3.Top
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//  stack<int> s;
//  s.push(3);
//  s.push(5);
//  s.push(4);
//  s.push(6);
//  s.pop();
 
// }

//queue -- FIFO , first in first out 1.push 2.pop 3.Top

#include<bits/stdc++.h>
using namespace std;
int main(){
 queue<string> q;
 q.push("ff");
 q.push("faf");
 q.push("Ggg");
 q.push("hha");
     q.pop();
 while(!q.empty()){
     cout<<q.front()<<endl;
     q.pop();
 }
return 0;
}