// program to get minmax from array------------------------------------------------------------------*/
#include<iostream>
using namespace std;
struct Pair {
    int min;
    int max;

};

struct Pair get_minmax(int arr[], int n)
{
    struct Pair minmax;
    int i ;
    
    if(n==1)
    {
        minmax.max=arr[0];
        minmax.min=arr[0];
        return minmax;
    } 
    if (arr[0]>arr[1])
    {
        minmax.max=arr[0];
        minmax.min=arr[1];
    }
    else {
        minmax.max=arr[1];
        minmax.min=arr[0];
    
    }  
    for(i=2 ;i<=n;i++)
    {
        if (arr[i]>minmax.max)
        minmax.max=arr[i];
        else if (arr[i]<minmax.min)
        minmax.min=arr[i];
    }
    return minmax;


}
int main ()
{
    int arr[]={3,5,7,8,9,32,44};
    int arr_size=6;
    struct Pair minmax=get_minmax(arr,arr_size);
    cout<<"the max element is "<<minmax.max<<endl;
    cout<<"the min element is "<<minmax.min<<endl;
    return 0;
}
