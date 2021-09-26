#include<iostream>
using namespace std;
int check(int a[], int n)
{
for (int i=0 ; i<n ; i++)
 { int cnt=0;
    for ( int j =0 ; j<n ; j++)
    {
        if (a[i]==a[j] && i!=j){
            cnt++;
        }
    }
    if (cnt==0){
        cout<<a[i]<<endl;
        }
 }
    return 0 ;
}
int main(){
int n=9;
int a[]={1,2,3,1,5,4,5,6,4};
check(a,n);
return 0;
}