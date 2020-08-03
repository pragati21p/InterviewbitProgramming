int Solution::maxSubArray(const vector<int> &A) {
    long long int sum1=0, sum2=0, i, n=A.size();
    sum1 = sum2 = (long long) A[0];
    for(i=1;i<n;i++){
        
        if(sum1 + (long long) A[i] > (long long) A[i]){
            sum1 = sum1 + (long long) A[i];
        } else {
            sum1 = (long long) A[i];
        }
        
        if(sum2 < sum1) sum2 = sum1;
    }
    
    return sum2;
}
