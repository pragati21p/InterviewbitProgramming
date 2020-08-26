vector<int> Solution::wave(vector<int> &A) {
    sort(A.begin(), A.end());
    
    int temp, n=A.size();
    for(int i=0;i<n;i=i+2){
        if(i<n-1){
            temp = A[i];
            A[i] = A[i+1];
            A[i+1] = temp;
        }
    }
    return A;
}