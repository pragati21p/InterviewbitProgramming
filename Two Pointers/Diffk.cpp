int Solution::diffPossible(vector<int> &A, int B) {
    long long int i=0, j=1;
    while(i<A.size() && j<A.size()){
        long long int sum = (long long int) A[j]- (long long int) A[i];
        if( sum >B) i++;
        else if( sum<B ) j++;
        else if(j!=i) return 1;
        else i++;
    }
    return 0;
}