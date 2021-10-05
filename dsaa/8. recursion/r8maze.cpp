// count no in total of maze of 3*3 
#include<iostream>
using namespace std;
int countpath(int i ,int j ,int n ,int m){
    if(i==n || j==m)    {
        return 0;
    }
    if(i==n-1 && j==m-1){
        return 1;
    }
    int left= countpath(i+1, j , n ,m);
    int right =countpath(i,j+1, n ,m);
    return left+ right;
}
int main(){
 int n=3,m=3;
 cout<< countpath(0,0,n,m);

return 0;
}