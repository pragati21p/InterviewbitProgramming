int Solution::findMedian(vector<vector<int> > &A) {
    
    int r=A.size(), c=A[0].size();
    int mn=INT_MAX, mx=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            mn = min(mn, A[i][j]);
            mx = max(mx, A[i][j]);
        }
    }
    
    int desired = (( r*c )+1)/2;
    
    while(mn<mx){
        int mid = (mx+mn)/2;
        int place=0;
        for(int i=0;i<r;i++){
            place += upper_bound( A[i].begin(), A[i].end(), mid) - A[i].begin();
        }
        
        if(place<desired){
            mn = mid+1;
        } else mx = mid;
    }
    return mn;
}