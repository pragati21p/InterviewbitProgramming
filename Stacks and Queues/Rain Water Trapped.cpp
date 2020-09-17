int Solution::trap(const vector<int> &A) {
    
    vector<int> s1(A.size(), 0), s2(A.size(), 0);
    int mx=-1;
    for(int i=0;i<A.size();i++){
        if(mx<A[i]){
            s1[i]=-1;
            mx=A[i];
        } else {
            s1[i]=mx;
        }
    }
    
    mx=-1;
    for(int i=A.size()-1;i>=0;i--){
        if(mx<A[i]){
            s2[i]=-1;
            mx=A[i];
        } else {
            s2[i]=mx;
        }
    }
    
    long long int ans=0, t;
    for(int i=0;i<A.size();i++){
        if(s1[i]==-1 || s2[i]==-1) continue;
        
        t = min(s1[i], s2[i]) - A[i];
        if(t>0) ans += t;
    }
    return ans;
}