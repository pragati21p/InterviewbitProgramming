void Solution::arrange(vector<int> &A) {
    int n=A.size();
    int x;
    for(int i=0;i<A.size();i++){
        if(A[i]>=n){
            continue;
        }
        
        x=A[i];
        int j=i, t;
        while(A[j]<n && A[j]!=j){
            t=A[j];
            A[j] = A[A[j]]<n ? A[A[j]] + n : x+n;
            j=t;
        }
    }
    
    for(int i=0;i<A.size();i++){
        if(A[i]>=n)
            A[i]=A[i]-n;
    }
}