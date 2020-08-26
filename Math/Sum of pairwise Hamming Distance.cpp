int Solution::hammingDistance(const vector<int> &A) {
    long long int ans = 0;  // Initialize result 
    long long int n=A.size();
    // traverse over all bits 
    for (int i = 0; i < 32; i++) 
    { 
        // count number of elements with i'th bit set 
        long long int count = 0; 
        for (long long int j = 0; j < n; j++) 
            if ( (A[j]>>i)%2 ) 
                count = (count+1)%1000000007; 
  
        // Add "count * (n - count) * 2" to the answer 
        ans += (count * (n - count) * 2); 
    } 
  
    return ans%1000000007; 
}