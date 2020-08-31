int Solution::numSetBits(unsigned int A) {
    
    int cnt=0;
    for(int i=0;i<32;i++){
        cnt += (A>>i)%2;
    }
    return cnt;
}