int Solution::removeElement(vector<int> &A, int B) {
    
    long long int i=0, j=0, cnt=0;
    while(i<A.size()){
        if(A[i]!=B){
            cnt++;
            
            
            long long int t=A[i];
            A[i]=A[j];
            A[j]=t;
            j++;
        } 
        i++;
    }
    return cnt;
}