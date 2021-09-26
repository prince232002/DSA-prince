// count pair sum of an arr for a key :
#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int getsum(int arr[], int n , int k)
{ int count=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
        {
            if( arr[i]+arr[j]==k){
                count +=1;
                        }
        }
    }
    return count;
}
int main(){
 int arr[]={1,5,7,1};
 int n;
 int key;
 cin>>key;
 cout<<getsum(arr,4, key);
return 0;
}