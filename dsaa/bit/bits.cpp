#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    int n,k,count=0;
// setting the bit
// cin>>n;
// cin>>k;
// n|=1<<k;
// cout<<"after setting"<<n<<endl;
// -------------------------------------------------------------

// // clearing the bit
// cin>>n;
// cin>>k;
// n&=~(1<<k);
// cout<<"after clearing"<<n<<endl;

// --------------------------------------------------------------

// // check if power of 2
// cin >>n;
// if (n&& ! (n & n-1)){
// cout<<"yes";
// }else cout<<"not"<<endl;

// --------------------------------------------------------------
// countung the no of 1
// cin>>n;
// while(n)
// {
//     n&=n-1;
//     count++;
// }cout<<count;

// --------------------------------------------------------------
// swapping --
// a=a^b;
// b=a^b;
// a=a^b;

// --------------------------------------------------------------

// check odd/ even --
// cin>>n;
// if (int p = n&1==1)
// cout<<"odd"<<endl;
// else
// cout<<"even";

// --------------------------------------------------------------
return 0;
}
/*
<<leftshift = mutiply by2 --
1<<x=2 to power x
n<<x=n . 2 to power x 

>>rightshift = divide by2 --
n>>x = n/2 to power x

mask---> 1<<i 
to find ith bit --> (n & mask)==   if non-zero then 1 otherwise 0 
~ -> 1's complement 
-(~) 2's complement 
 */