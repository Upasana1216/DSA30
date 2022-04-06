int maxLen(int A[], int n)
{
    // Your code here
    unordered_map<int,int> mpp; 
    int maxi = 0;
    int sum = 0; 
    for(int i = 0;i<n;i++) {
        sum += A[i]; 
        if(sum == 0) {
            maxi = i + 1; 
        }
        else {
            //2 cases-> sum-> into hash or not
            if(mpp.find(sum) != mpp.end()) { // subarray len

                maxi = max(maxi, i - mpp[sum]); 
            }
            else {
                mpp[sum] = i; //store into hash
            }
        }   
    }

    return maxi; 
}