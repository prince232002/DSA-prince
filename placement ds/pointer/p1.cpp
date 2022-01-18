
#include<bits/stdc++.h>
using namespace std;
int main(){
 char arr[20];
  int i;
  for(i = 0; i < 10; i++) {
    *(arr + i) = 65 + i;
  }
  *(arr + i) = '\N \0';
  cout << arr;
}