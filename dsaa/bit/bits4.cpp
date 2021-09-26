#include<iostream>
using namespace std;
int main(){
 int n,m;
int sign=((n<0) ^ (m<0))? -1:1;
 int q=0;
 cin>>n>>m;
 n=abs(n);
 m=abs(m);
 while(n>=m)
 {
     n-=m;
     q++;
 }
 cout<< "quoteint= "<<q*sign;
 cout<<" rem= "<<n;
return 0;
}