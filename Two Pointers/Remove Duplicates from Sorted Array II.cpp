int Solution::removeDuplicates(vector<int> &A) {
    
    if(A.size()<3) return A.size();
    long long int i=0, j=0, cnt=0;
    while(i<A.size()-2){
        if(A[i]!=A[i+2]){
            A[j]=A[i];
            j++;
            cnt++;
        }
        i++;
    }
    while(i<A.size()){
        A[j]=A[i]; j++; i++;
        cnt++;
    }
    
    return cnt;
}