// C++ implementation of
// the above approach
#include <bits/stdc++.h>
using namespace std;

// Function to find the minimum number
// of chairs required to ensure that
// every worker is seated at any time
int findMinimumChairs(string s)
{
	// Stores the number of
	// chairs required
	int count = 0;

	// Pointer to iterate
	int i = 0;

	// Stores minimum number of
	// chairs required
	int mini = INT_MIN;

	// Iterate over every character
	while (i < s.length()) {

		// If character is 'E'
		if (s[i] == 'E')

			// Increase the count
			count++;

		// Otherwise
		else
			count--;

		// Update maximum value of count
		// obtained at any given time
		mini = max(count, mini);

		i++;
	}

	// Return mini
	return mini;
}

// Driver Code
int main()
{
	// Input

	// Given String
	string s = "EELEE";

	// Function call to find the
	// minimum number of chairs
	cout << findMinimumChairs(s);
}
