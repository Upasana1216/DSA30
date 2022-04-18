// A C++ program to find a peak element
// using divide and conquer
#include <bits/stdc++.h>
using namespace std;

// A binary search based function
// that returns index of a peak element
int findPeakUtil(int arr[], int low,int high, int n)
{
    int l = low;
    int r = high;
    int mid;
    while (l <= r)
    {
        // finding mid by binary right shifting.
        mid = (l + r) /2;
        // first case if mid is the answer
        if ((mid == 0 || arr[mid - 1] <= arr[mid]) && (mid == n - 1 || arr[mid + 1] <= arr[mid]))
            break;
        // if we have to perform left recursion
        if (mid > 0 and arr[mid - 1] > arr[mid])
            r = mid - 1;
        // else right recursion.
        else
            l = mid + 1;
    }
    return mid;
}

// A wrapper over recursive function findPeakUtil()
int findPeak(int arr[], int n)
{
    return findPeakUtil(arr, 0, n - 1, n);
}

// Driver Code
int main()
{
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Index of a peak point is "
         << findPeak(arr, n);
    return 0;
}
