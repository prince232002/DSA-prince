#include<iostream>
using namespace std;
int nfib(int n){
    if(n<=1) return n;
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
}
int mfib(int n){
    int f[10];
    if(n<=1) return n;
    else{
        if(f[n-2]==-1) f[n-2]=mfib(n-2); 
        if(f[n-1]==-1) f[n-1]=mfib(n-1); 
        return f[n-2]+f[n-1];
    }
}
int main(){
 int a=0,b=1,n;
 cin>>n;
 cout<<a<<endl;
 cout<<b<<endl;
//  cfib(a, b, n-2);
// cout<<"nth term is "<< nfib(n);
cout<< mfib()
return 0;
}