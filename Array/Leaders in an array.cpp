vector<int> Solution::solve(vector<int> &A) {
    int n=A.size();
    vector<int> ans;
    
    if(n==0) return ans;
    ans.push_back(A[n-1]);
    int mx=A[n-1];
    
    for(int i=n-2;i>=0;i--){
        if( A[i]>mx){
            mx=A[i];
            ans.push_back(mx);
        }
    }
    return ans;
}