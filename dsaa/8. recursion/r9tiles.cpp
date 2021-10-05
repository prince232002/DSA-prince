// place tiles in the  4*2 block of tiles 2*1 ( horizontal) || 1*2(vertical)
#include<iostream>
using namespace std;
int place_tiles(int n ,int m){
    if(n==m)
    return 2;
    if(n<m)
    return 1;

     int vertical=place_tiles(n-m,m);
     int horiz=place_tiles(n-1,m);
     return vertical + horiz;

}
int main(){
 int n=4, m=2;
cout<<place_tiles(n,m);

return 0;
}