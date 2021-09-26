#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int power (int a, int b){
    if( b==1){
        return 1;
    }
    return a*pow(a,b-1);
}
int main(){
int x=5,y=3;
// cin>>a>>b;
cout<< power(x,y);

return 0;
}