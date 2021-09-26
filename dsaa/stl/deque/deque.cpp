#include<iostream>
using namespace std;
#include<bits/stdc++.h>
int main(){
 deque<int> de{4,5,7,8,6};
 de.push_front(44);
 de.push_back(434);
 
deque<int> ::iterator it;
it=de.begin();
 de.erase(it);
// de.clear();
for (auto it= de.begin(); it!= de.end(); ++it  )
{
    cout<< " "<<*it;
}
return 0;
}