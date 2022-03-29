
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// An Interval
struct Interval
{
	int s, e;
};

// Function used in sort
bool mycomp(Interval a, Interval b)
{ 
	return a.s < b.s; 
}

void mergeIntervals(Interval arr[], int n)
{
	// Sort Intervals in increasing order of
	// start time
	sort(arr, arr+n, mycomp);// sorting comparator -> comparision + sprting acc to you

	int index = 0; // Stores index of last element
	// in output array (modified arr[])

	// Traverse all input Intervals
	for (int i=1; i<n; i++)
	{
		// If this is not first Interval and overlaps
		// with the previous one
		if (arr[index].e >= arr[i].s)
		{
			// Merge previous and current Intervals
			arr[index].e = max(arr[index].e, arr[i].e);
		}
		else {
			index++;
			arr[index] = arr[i];
		}
	}

	// Now arr[0..index-1] stores the merged Intervals
	cout << "\n The Merged Intervals are: ";
	for (int i = 0; i <= index; i++)
		cout << "[" << arr[i].s << ", " << arr[i].e << "] ";
}

// Driver program
int main()
{
	Interval arr[] = { {6,8}, {1,9}, {2,4}, {4,7} };
	int n = sizeof(arr)/sizeof(arr[0]);
	mergeIntervals(arr, n);
	return 0;
}
