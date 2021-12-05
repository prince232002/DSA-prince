// C++ program for the above approach : o(2 ^n) by recursion tree
#include <bits/stdc++.h>
using namespace std;

// Find all subsequences
void printSubsequence(string input, string output)
{
	// Base Case
	// if the input is empty print the output string
	if (input.empty()) {
		cout << output << endl;
		return;
	}
      
	// output is passed with including
	// the Ist character of
	// Input string

	// output is passed without
	// including the Ist character
	// of Input string
	printSubsequence(input.substr(1), output);  //excluded input 
	printSubsequence(input.substr(1), output + input[0]); //included input 
}

// Driver code
int main()
{
	// output is set to null before passing in as a
	// parameter
	string output = "";
	string input = "abc";
    // cout<<input.substr(1);
	printSubsequence(input, output);

	return 0;
}
