//  
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
//  map is an associated array
map<string, int > marksmap;
marksmap["harry"]=88;
marksmap["carry"]=22;
marksmap["larry"]=42;
map<string , int>:: iterator iter;
for (iter= marksmap.begin(); iter!=marksmap.end(); iter++){
    cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    
}
return 0;
}


