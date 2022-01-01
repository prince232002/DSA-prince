// here time complexity is O(log n)

#include<iostream>
using namespace std;
int power(int x, int n){
    if (n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    if (n%2==0){   // n is even 
        return power(x, n/2)* power(x, n/2);
        
    else          //   n is odd 
        return power(x, n/2)* power(x, n/2)*x;
       
}
int main(){
 int n,x;
 cin>>x>>n;
cout<<power(x,n);
return 0;
}