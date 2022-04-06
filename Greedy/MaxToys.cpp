//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

#include <algorithm>
class Solution{
public:
    int toyCount(int N, int K, vector<int> arr)
    {
        sort(arr.begin(), arr.end());
        
        int count = 0;
        long long sum = 0;
        for(auto v : arr) {
            sum += v;
            if(sum > K) return count;
            count++;
        }
        
        return count;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, K;
        cin>>N>>K;
        vector<int> arr(N);
        for(int i = 0;i < N;i++)
            cin>>arr[i];
        
        Solution ob;
        cout<<ob.toyCount(N, K, arr)<<endl;
    }
    return 0;
}  // } Driver Code Ends