// list used for fast insertion and deletion where array for fast access 
// push_back(), remove(), merge(), sort(), reverse(), swap()
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void display(list<int> &lst)
{
    list<int>:: iterator it;
    for(it=lst.begin(); it!=lst.end(); it++){
       cout<<*it<<" ";
    }cout<<endl;
}
int main(){
  list <int> list1 ;
  list <int> list2 ;
//   list <int> list2(7);
list1.push_back(5);
list1.push_back(7);
list1.push_back(8);
list1.push_back(8);
list1.push_back(8);

list2.push_back(6);
list2.push_back(7);
list2.push_back(8);
list2.push_back(6);
list2.push_back(4);
list1.remove(8);
// list1.merge(list2);
list1.remove(8);


// list<int> :: iterator iter ;
// iter =list1.begin();
// cout<< *iter<<" ";
// iter++;
// cout<<*iter<<" " ;
display(list1);
list1.reverse();
display(list1);
list1.sort();
display(list1);
list1.swap(list2);
display(list1);
return 0;
}