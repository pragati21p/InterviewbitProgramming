int Solution::gcd(int A, int B) {
    if(A==0 || B==0) return max(A, B);
    
    return gcd( B%A, A);
}