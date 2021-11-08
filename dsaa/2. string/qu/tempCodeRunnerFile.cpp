#include<bits/stdc++.h>
using namespace std;
int check(string a , string b){
	int n=a.size();
	string t=a+b;
	return(t.find(a)!=string::npos);
}
int main(){
 string a,b;
 cout<< check("abb","bab");
}