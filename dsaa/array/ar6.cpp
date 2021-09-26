// program to unoin of the two array ----
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
  int i,j,k,n=4,m=4,cnt=0;
  int c[m+n],b[]={2,5,6,7},a[]={5,3,1,4};
  for(i=0; i<n; i++){
      c[i]=a[i];
  }
  for(j=i,k=0; k<m; j++,k++)
  {
      c[j]=b[k];
  }
  sort(c,c+m+n);
  for (i=0;i<n+m;i++)
  {if(c[i]!=c[i+1])
     {cnt++;}
  }
    cout<<cnt<<" ";
       
return 0;
}