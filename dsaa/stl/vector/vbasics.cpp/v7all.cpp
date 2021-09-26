// add ,sort ,reverse , size, descendg sort, print-------------
#include<bits/stdc++.h>
using namespace std;
void add_to_vector(vector<int> &A,int x)
{
	A.push_back(x);
}


void sort_vector_asc(vector<int> &A)
{
	sort(A.begin(),A.end());
}


void reverse_vector(vector<int> &A)
{
	reverse(A.begin(),A.end());
}

int size_of_vector(vector<int> &A)
{
	return A.size();
}

void sort_vector_desc(vector<int> &A)
{
	 sort(A.begin(),A.end(),std::greater<int> ());
}

void print_vector(vector<int> &A)
{
	for(int i=0;i<A.size();i++)
	cout<<A[i]<<" ";
}
int main()
{
  vector<int> A={4,5,6,5,7,8};  
  reverse_vector(A);
  print_vector(A);
  return 0;
}