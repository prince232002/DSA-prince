#include<iostream>
using namespace std;
int main(){
 int n=0, a,b;
 cin>>a>>b;
 while(a>0 || b>0)
 {
 if((a&1) != (b&1)){
    n+=1;
 }
 a>>=1;b>>=1;
 }
cout<<n;
return 0;
}