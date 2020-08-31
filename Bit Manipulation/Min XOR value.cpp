int Solution::findMinXor(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int mn=INT_MAX;
    for(int i=1;i<A.size();i++){
        mn = min(mn, A[i]^A[i-1]);
    }
    return mn;
}