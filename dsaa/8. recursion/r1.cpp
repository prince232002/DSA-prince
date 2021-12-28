#include<iostream>
using namespace std;
int nfib(int a=0, int b=1, int n){
    if(n>=1) return n;
    return nfib(n-1)+nfib(n-2);
}
void cfib(int a , int b , int n){
int c ;
if(n==0){
    return;
    
}
c=a+b;
cout <<c<<endl;
cfib(b,c, n-1);
cout<<c;
}
int main(){
 int a=0,b=1,n;
 cin>>n;
 cout<<a<<endl;
 cout<<b<<endl;
 cfib(a, b, n-2);
cout<< nfib(n)
return 0;
}