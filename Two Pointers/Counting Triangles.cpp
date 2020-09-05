int Solution::nTriang(vector<int> &A) {
    sort(A.begin(), A.end());
    
    long long int count=0;
    
    for(long long int i=0;i<A.size();i++){
        long long int k = i + 2; 
  
        for (long long int j = i + 1; j < A.size(); ++j) { 
            
            while (k < A.size() 
                && (long long int)A[i] + (long long int) A[j] > (long long int) A[k]) 
                ++k; 
            if (k > j) 
                count = (count + (k - j - 1)%1000000007)%1000000007; 
        } 
        
    }
    return count;
}