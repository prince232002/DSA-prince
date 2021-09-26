// for taking intervals we take pair----
#include<iostream>
using namespace std;
int main(){
 pair<int ,string> s;
  s.first=3;
  s.second="fr4";
//   or
  s={3,"dd"};
  pair<int ,string> &s1=s;

  cout<<s.first<<" "<<s.second<<endl;
int a[]={5,7,8,6};
int b[]={4,7,8};
pair<int , int >p_array[3];
p_array[0]={3,4};
p_array[1]={3,5};
p_array[2]={4,6};
swap(p_array[0],p_array[1]);
for(int i=0; i<3; i++){
cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
}
return 0;
}