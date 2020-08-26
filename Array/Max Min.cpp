int Solution::solve(vector<int> &A) {
    int mn=0, mx=0;
    
    for(int i=1;i<A.size();i++){
        if(A[mn]>A[i]) mn=i;
        else if(A[mx]<A[i]) mx=i;
    }
    return A[mx]+A[mn];
}