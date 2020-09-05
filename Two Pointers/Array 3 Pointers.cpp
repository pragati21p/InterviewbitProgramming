int Solution::minimize(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    
    int i=0, j=0, k=0;
    long long int mn=INT_MAX;
    
    while( i<A.size() && j<B.size() && k<C.size() ){
        
        long long int x= (long long int) A[i] - (long long int) B[j];
        if(x<0) x=-x;
        
        long long int y= (long long int) C[k] - (long long int) B[j];
        if(y<0) y=-y;
        
        long long int z= (long long int) A[i] - (long long int) C[k];
        if(z<0) z=-z;
        
        long long int ans = max(x, y);
        ans = max(ans, z);
        mn = min(mn,ans);
        if(A[i]<=B[j] && A[i]<=C[k]){
            i++;
        } else if(A[i]>=B[j] && B[j]<=C[k]) j++;
        else k++;
    }
    return mn;
}