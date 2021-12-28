#include<iostream>
using namespace std;
 cfib(int a , int b , int n){
int c ;
if(n==0){
    return c;
    
}
c=a+b;
cout <<c<<endl;
cfib(b,c, n-1);
}
int main(){
 int a=0,b=1,n;
 cin>>n;
 cout<<a<<endl;
 cout<<b<<endl;
 cfib(a, b, n);

return 0;
}