void swap(int* a, int* b) 
{ 
    int temp; 
    temp = *a; 
    *a = *b; 
    *b = temp; 
} 
int perform(vector<int> &A, int start){
    int n=A.size();
    // cout<<start<<" ";
    if(n==start) return 1;
    for(int i=start;i<n;i++){
        int ind=abs(A[i])-1+start;
        if( ind<n ){
            A[ind] = -abs(A[ind]);
        }
    }
    
    for(int i=start;i<n;i++){
        if(A[i]>0) return i+1-start;
    }
    return n+1-start;
}
 
int Solution::firstMissingPositive(vector<int> &A) {
    int j=0;// mn=INT_MAX;
    for(int i=0;i<A.size();i++){
        // if(mn>A[i]) mn=A[i];
        if(A[i]<=0){
            // cout<<A[i]<<" ";
            if(i!=j) swap(&A[i], &A[j]);
            j++;
        }
    }
    // cout<<j<<" ";
    // if(mn<=0)
    return perform(A, j);
}