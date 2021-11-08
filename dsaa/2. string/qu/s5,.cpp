#include <bits/stdc++.h>
using namespace std;

// Function to print a substring
// str[low..high]
void printSubStr(
	string str, int low, int high)
{
	for (int i = low; i <= high; ++i)
		cout << str[i];
}


void longestPalSubstri(string str)
{
	int n = str.size(); 

	
	bool table[n][n];

	memset(table, 0, sizeof(table));

    int cnt=0,i,j,g=0,maxLength=1,start=0;
	for(g=0; g<n; g++)
	{
		for(i=0,j=g; i<sizeof(table); i++,j++){
            if(g==0){
				table[i][j]==true;
				if (g > maxLength) {
                    start = i;
                    maxLength = g;
                }
			}else if(g==1){
				if(str[i]==str[j]){
                  table[i][j]==true;
				  if (g > maxLength) {
                    start = i;
                    maxLength = g;
                }
				}else{
                  table[i][j]==false;
				}				
			}
			else{
				if(str[i]==str[j] && table[i+1][j-1]==true ){
                  table[i][j]==true;
				  if (g > maxLength) {
                    start = i;
                    maxLength = g;
                }
				}
				else{
                  table[i][j]==false;
				}
				
			}
		}
	}
	cout<< maxLength<<endl;
	
	 cout << "Longest palindrome substring is: ";
    printSubStr(str, start, start + maxLength - 1);
 
    // return length of LPS
}
// Driver Code
int main()
{
	string str = "forgeeksskeegfor";
	cout << "\nLength is: ";
    longestPalSubstri(str);
}
