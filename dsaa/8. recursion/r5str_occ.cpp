#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int f=-1, l=-1;
void cal_se(int indx, char s[],char key ){

if(indx==strlen(s)){
    return;
}
  if (s[indx]==key){
      if(f==-1){
         f=indx;
          }
          else
         l=indx;
  }
    cal_se(indx+1, s,key);

// return l;

}

int main(){
 char key;
char s[]="abcd3ata3fgfhtjgjfdghfg";
cin>>key;
cal_se(0,s,key);
cout<<f<<" "<<l;

return 0;
}