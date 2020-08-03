int Solution::solve(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int n=A.size();
    for(int i=0;i<n;i++){
        
        if(A[i] >=0 && A[i]<n && A[i]==n-i-1){
            if(i<n-1 && A[i+1]>A[i]) return 1;
            else if(i==n-1) return 1;
        } 
    }
    return -1;
}
