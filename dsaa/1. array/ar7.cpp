#include<iostream>
using namespace std;
void rotate(int a[],int n )
{
int b[n];
b[0]=a[n-1];
for (int i=; i<=n; i++)
{
    b[i]=a[i-1];
    cout<<b[i-1]<<" ";
}
}
int main(){
 int n=9,a[]={4,5,6,7,8,2,3,4,1};
 rotate(a,n);
return 0;
}


// #include<iostream>
// using namespace std;
// void rotate(int a[],int n )
// {
// int temp=a[n-1];
// for (int i=n-1; i>0; i--)
// {
//     temp=a[i-1];
//    return a; 
// }
//     a[0]=temp;    
// }
// int main(){
//  int n=6,a[]={4,5,6,7,8,2};
//  rotate(a,n);
// for (i=0; i<n; i++){
    // cout  << arr[i]<<" ";
// }
// return 0;
// }
