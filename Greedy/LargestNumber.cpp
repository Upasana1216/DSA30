#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// Function to return Largest Number

class Solution
{
public:
    // Function to return the largest possible number of n digits
    // with sum equal to given sum.
    string largestNumber(int n, int sum)
    {
        if (sum == 0)
        {
            cout << 0;
        }
        else if (sum >= (n * 9) + 1)
        {
            cout << -1;
        }
        else
        {
            int nine = sum / 9;
            ;
            int remainder = sum % 9;
            int zero = n - nine;
            for (int i = 1; i <= nine; i++)
                cout << 9;
            if (remainder != 0)
            {
                cout << remainder;
                zero -= 1;
            }
            for (int i = 1; i <= zero; i++)
                cout << 0;
        }
    }
};

// { Driver Code Starts.
int main()
{
    // taking testcases
    int t;
    cin >> t;

    while (t--)
    {
        // taking n and sum
        int n, sum;
        cin >> n >> sum;

        Solution obj;
        // function call
        cout << obj.largestNumber(n, sum) << endl;
    }
    return 0;
} // } Driver Code Ends