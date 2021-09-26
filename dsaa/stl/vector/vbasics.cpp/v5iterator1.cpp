#include<iostream>
// #include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
 vector <int> v;
 int size=3,e;
 for(int i=0; i<size; i++){
   cin >> e;
   v.push_back(e); //o(1)

 }
//  v.pop_back();
// declaring an iterator syntax() ------------------
 vector<int> ::iterator it= v.begin();
 v.insert(it+1,13,444);
 
 for(int j=0; j<v.size(); j++)
{
    cout<< v[j]<<" ";
}
//  v.push_back(35);
 cout<<v.size()<<endl;
 cout<<v.front()<<endl;
 cout<<v.back();
return 0;
}