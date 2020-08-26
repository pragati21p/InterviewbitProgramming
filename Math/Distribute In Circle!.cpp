int Solution::solve(int A, int B, int C) {
    
    if(C+A-1 <= B) return C+A-1;
    
    return solve( A - (B-C+1), B, 1);
}