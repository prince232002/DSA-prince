#include<bits/stdc++.h>
using namespace std;
int main(){
int f[10];
for(int i=0; i<n; i++){
    f[i]=-1;
}   
}
int f[10];
int mfib(int n)
    { 
    if(n<=1){
    f[n]=n;
    return n;
    } 
    else{
        if(f[n-2]==-1) f[n-2]=mfib(n-2); 
        if(f[n-1]==-1) f[n-1]=mfib(n-1); 
     return f[n-2]+f[n-1];
    }
}