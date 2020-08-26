int Solution::perfectPeak(vector<int> &A) {
    int n=A.size();
    int minimum[n-2], maximum[n-2];
    
    int mn=A[0];
    for(int i=1;i<n-1;i++){
        minimum[i-1] = mn;
        mn = max(mn, A[i]);
    }
    
    mn=A[n-1];
    for(int i=n-2;i>0;i--){
        maximum[i-1] = mn;
        mn = min(mn, A[i]);
    }
    
    for(int i=1;i<n-1;i++){
        if( A[i]>minimum[i-1] && A[i]<maximum[i-1]) return 1;
    }
    return 0;
}