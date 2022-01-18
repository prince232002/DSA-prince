
#include<bits/stdc++.h>
using namespace std;
int main(){
 float f = 10.5;
float* ptr = &f;
(*ptr)++;
cout<<f;
}