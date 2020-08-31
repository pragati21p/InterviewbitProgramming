int Solution::cntBits(vector<int> &A) {
    
    long long int ans=0;
    for(int i=0;i<32;i++){
        
        long long int ones=0, zeroes=0;
        for(long long int j=0;j<A.size();j++){
            if(A[j]%2==1) ones++;
            else zeroes++;
            
            A[j]/=2;
        }
        
        ans = (ans+ ((ones*zeroes)%1000000007))%1000000007;
    }
    return (2*ans)%1000000007;
}