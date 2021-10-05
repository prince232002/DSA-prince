#include<iostream>
using namespace std;
#include<bits/stdc++.h>
void dup(int a[], int n){
    for(int i=1; i<n; i++)
    {
    int cnt=0,j;
        for(j=0; j<n ; j++){
            if(a[i]==a[j] && i!=j)
             cnt++;

        }
        if(cnt>0){
            cout<< a[i]<<endl;
        }
    }
}
int main(){
    int a[]={2,2,4,5,5,3};
    int n = sizeof(a)/sizeof(a[0]);
    dup(a,n);
return 0;
}