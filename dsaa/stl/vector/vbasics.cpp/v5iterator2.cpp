/*in iterator :
i++ and i+1 has different meaning so:
--> as in vector has contigous memory
--> but in map and unordered map has different memory so 
--> i+1 point next contigous memory location and i++ point next memory lacation 
*/
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
 vector<int> v={4,5,6,7,8};
 for (int i=0; i<v.size(); ++i){
     cout<<v[i]<<" ";
 }cout<<endl;
//  vector<int> ::iterator it= v.begin();
//  for(it=v.begin(); it!=v.end(); ++it){ 
    //  cout<<(*it)<<endl;                 
//  }
vector<pair<int , int>> v_p={{4,5},{5,6}};
vector<pair<int,int> > ::iterator it;
 for(it=v_p.begin(); it!=v_p.end(); ++it){  // here it+! valid as contigous but not valid in case of map 
     cout<<(*it).first<<" "<<(it->second)<<endl;                 // and gives runtime error
 } 
//  (*it).first <=> (it->first)         //both are same 
return 0;
}