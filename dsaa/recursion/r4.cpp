#include<iostream>
using namespace std;
void toi(int n ,char src , char dest , char help)
{
    if(n==0){
        return;
    }
    toi (n-1, src , help , dest);
    cout << "move from "<< src<< " to "<< dest<<endl;
    toi (n-1,help , dest ,src);
}
int main(){
 toi(4, 'A','B','C');
return 0;
}