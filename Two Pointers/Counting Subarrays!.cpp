int Solution::solve(vector<int> &A, int B) {
    
    int start=0, end=0, sum=A[0], cnt=0;
    
    while(end<A.size() && start<A.size()){
        
        if(sum<B){
            end++;
            
            if(end>start)
                cnt += end-start; 
                
            if(end<A.size()) sum += A[end];
        } else {
            sum -= A[start];
            start++;
        }
    }
    
    return cnt;
}