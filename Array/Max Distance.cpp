int Solution::maximumGap(const vector<int> &A) {
    
    int n=A.size();
    int lv[n], rv[n];
    
    int mn=INT_MAX, mx=INT_MIN;
    for(int i=0;i<n;i++){
        mn = min(mn, A[i]);
        lv[i] = mn;
    }
    
    for(int i=n-1;i>=0;i--){
        mx = max(mx, A[i]);
        rv[i] = mx;
    }
    
    int i=0, j=0, ans=0;
    while(i<n && j<n){
        if( lv[i] <= rv[j]){
            if(ans<j-i) ans=j-i;
            j++;
        } else i++;
    }
    return ans;
}