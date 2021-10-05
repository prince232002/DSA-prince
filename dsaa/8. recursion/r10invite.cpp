// ways to invite to guest (n)  as single or pair  ------
#include<iostream>
using namespace std;
int wayto_invite(int n){
   if(n<=1){
       return 1;
   }
   int single= wayto_invite(n-1);
   int pair= (n-1)* wayto_invite(n-2);
   return single+pair;
}
int main(){
 int n=4;
cout<<wayto_invite(n);
return 0;
}