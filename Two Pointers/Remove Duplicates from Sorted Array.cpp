int Solution::removeDuplicates(vector<int> &A) {
    
    long long int i=1, j=1, cnt=1;
    while(i<A.size()){
        if(A[i]!=A[i-1]){
            A[j]=A[i];
            j++;
            cnt++;
        }
        i++;
    }
    return cnt;
}