int Solution::atoi(const string A) {
    
    int temp=0, ans=0;
    
    int i=0;
    bool neg=0;
    
    if(A[i]=='-'){
        i++;
        neg=1;
    } else if(A[i]=='+') i++;
    
    for(;i<A.size();i++){
        if(A[i]<'0' || A[i]>'9') break;
        
        temp = A[i]-'0';
        
        if(ans>(INT_MAX-temp)/(float)10){
            ans=INT_MAX; break;
        }
        ans = ans*10 + temp;
        
    }
    
    if(neg){
        if(ans==INT_MAX) return INT_MIN;
        else return -ans;
    }
    return ans;
}