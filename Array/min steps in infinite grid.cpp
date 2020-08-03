int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    
    int steps=0, tmp1, tmp2;
    
    for(int i=1;i<A.size();i++){
        tmp1 = abs(A[i] - A[i-1]);
        
        tmp2 = abs(B[i] - B[i-1]);
        
        steps += max(tmp1, tmp2);
    }
    return steps;
}
