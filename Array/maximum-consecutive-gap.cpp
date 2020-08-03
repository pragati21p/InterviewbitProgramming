int Solution::maximumGap(const vector<int> &A) {
    // Find maximum and minimum in arr[] 
    int n=A.size();
    
    int minVal=A[0], maxVal=A[0];
    for(int i=1;i<n;i++){
        minVal=min(minVal, A[i]);
        maxVal=max(maxVal, A[i]);
    }
  
  
    float gap = (float)(maxVal-minVal)/(float)(n-1);
    
    int minBucket[n-1], maxBucket[n-1];
    fill_n(maxBucket, n - 1, INT_MIN); 
    fill_n(minBucket, n - 1, INT_MAX); 
    
    for(int i=0;i<n;i++){
        if(A[i]==minVal || A[i]==maxVal) continue;
        
        int index = (A[i]-minVal)/gap;
        
        minBucket[index] = min( A[i], minBucket[index]);
        maxBucket[index] = max( A[i], maxBucket[index]);
    }
  
    // Finding maximum difference between maximum value 
    // of previous bucket minus minimum of current bucket. 
    int preval = minVal, maxgap=0;
    for(int i=0;i<n-1;i++){
        if(minBucket[i]==INT_MAX) continue;
        maxgap = max(maxgap, minBucket[i]-preval);
        preval = maxBucket[i];
    }
    maxgap = max(maxgap, maxVal-preval);
    return maxgap;
}
