// program to calculate square of a number -----
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int n;
 cin>>n;
int res=n;
 for ( int i=1 ; i<n; i++ )
 {
     res+=n;
 }
cout<<"square of "<<n<< " is " <<res<<endl;
return 0;
}
