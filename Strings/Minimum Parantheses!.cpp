int Solution::solve(string A) {
    int cnt=0, ans=0;
    for(int i=0;i<A.length();i++) {
        if(A[i]=='(') cnt++;
        else cnt--;
        
        if(cnt<0) {
            ans++;
            cnt++;
        }
    }
    
    ans += cnt;
    return ans;
}