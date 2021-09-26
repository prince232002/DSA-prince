#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int diffr(int a[], int n,int *diff)
{ 
    sort(a,a+n);
    // int diff;
    *diff=a[n-1]-a[0];

//   mn=a.min();
return *diff;
}
// cout<<diff<<endl;
void m_array(int n , int a[], int diff)
{  
    //  cout<<diff<<endl;
    for(int i=0; i<n; i++)
{
    if(a[i]<diff){
        a[i]+=3;
    }
    else{
        a[i]-=3;
    }
}
}
int main(){
 int diff;
int a[]={2,3,7,5,8,9};
int n=sizeof(a)/ sizeof(a[0]) ;

cout<< "difference of min and max of array a[] is  : "<<diffr(a,n,&diff)<<endl;
// diff=diffr(a,n);
cout<<diff<<endl;
m_array(n,a,diff);

for (int i=0; i<n; i++){
    cout<<a[i]<<" ";
}
return 0;
}