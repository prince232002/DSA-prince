#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int check(int i, int n , int a[]){
    // sort(a,a+n);
    if (i==n-1){
        return true;
    }
    if(a[i]<a[i+1] )
     {
        return check(i+1,n,a);
      }
    else{
      return false;
      }
}
int main(){
 int a[]={1,5,6};
 int n =sizeof(a)/sizeof(a[0]);
cout<<true;
cout<<check(0, n, a);

return 0;
}