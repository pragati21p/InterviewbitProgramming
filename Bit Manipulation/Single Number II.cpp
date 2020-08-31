int Solution::singleNumber(const vector<int> &A) {
    
    int num=0, t=1;
    for(int j=0;j<32;j++){
        
        int sum=0;
        for(int i=0;i<A.size();i++){
            sum += (A[i]>>j)%2;
        }
        
        num += (sum%3)*t;
        t*=2;
    }
    return num;
}