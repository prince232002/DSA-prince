#include<iostream>
using namespace std;
int s_sorting (int arr[],int n){
    // int s=0;
for (int i=0; i<n-1; i++)
 {
for (int j=i+1; j<i+1; i++)
{
    if (arr[j]<arr[i]){
        int temp = arr[j];
        arr[j]=arr[i];
        arr[i]=temp;
    }
}
    // s+=1;
}
return ;
 }

int main()
{
int n ;
int arr[n];
cin>>n;
for (int i=0; i<n; i++)
{
    cin>>arr[i];
}
cout<<"the sorted array is "<<endl;
cout<<s_sorting(arr,n);
for (int i=0; i<n; i++)
{
    cout<<arr[i] ;
}
return 0;
}