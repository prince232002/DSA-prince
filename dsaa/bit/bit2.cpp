// program for subset of string all possible ---
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
    char s[100];
    cin>>s;
    int n =strlen(s);
    int nos= (1<<n)-1;
    cout << "{} ";
    for (int i=1; i<= nos ; i++)
    {
        int temp=i,j=0;
        while (temp>0)
        {
            if (temp&1)
                 cout << s[j];
            j++;
            temp=temp>>1;
        }
        cout<<" ";
    }
return 0;
}