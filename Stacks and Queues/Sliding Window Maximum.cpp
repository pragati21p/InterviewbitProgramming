vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    int mx=0;
    vector<int> ans;
    for(int i=0;i<B && i<A.size();i++) {
        if(A[mx] < A[i])
            mx=i;
    }
    ans.push_back(A[mx]);
    
    int i=0, j=B-1;
    for(int k=B;k<A.size();k++){
        if(mx>k-B){
            if(A[mx]<=A[k]) mx=k;
        } else {
            mx++;
            int x=mx+1;
            while(x<=k) {
                if(A[mx]<=A[x]) mx=x;
                x++;
            }
        }
        ans.push_back(A[mx]);
    }
    return ans;
}