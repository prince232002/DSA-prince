// C++ program to find whether
// a given element is present
// in the given 2-D matrix
#include <bits/stdc++.h>
using namespace std;

#define M 3
#define N 4

// Basic binary search to
// find an element in a 1-D array
bool binarySearch1D(int arr[], int K)
{
	int low = 0;
	int high = N - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;

		// if element found return true
		if (arr[mid] == K)
			return true;

		// if middle less than K then
		// skip the left part of the
		// array else skip the right part
		if (arr[mid] < K)
			low = mid + 1;
		else
			high = mid - 1;
	}

	// if not found return false
	return false;
}

// Function to search an element
// in a matrix based on
// Divide and conquer approach
bool searchMatrix(int matrix[M][N], int K)
{
	int low = 0;
	int high = M - 1;
	while (low <= high) {
		int mid = low + (high - low) / 2;

		// if the element lies in the range
		// of this row then call
		// 1-D binary search on this row
		if (K >= matrix[mid][0]
			&& K <= matrix[mid][N - 1])
			return binarySearch1D(matrix[mid], K);

		// if the element is less then the
		// starting element of that row then
		// search in upper rows else search
		// in the lower rows
		if (K < matrix[mid][0])
			high = mid - 1;
		else
			low = mid + 1;
	}

	// if not found
	return false;
}

// Driver code
int main()
{
	int matrix[M][N] = { { 331, 3, 5, 7 },
						{ 10, 11, 16, 20 },
						{ 23, 30, 34, 50 } };
	int K = 3;
	if (searchMatrix(matrix, K))
		cout << "Found" << endl;
	else
		cout << "Not found" << endl;
}
