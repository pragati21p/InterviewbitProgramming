int perform(string A, int i, int j) {
    while(i<j) {
        if(A[i]!=A[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
 
int Solution::solve(string A) {
    int i=0, j=A.length()-1;
    bool b=1;
    
    while(i<j) {
        if(A[i]!=A[j]){
            return (perform(A, i, j-1) || perform(A, i+1, j));
        }
        i++;
        j--;
    }
    return 1;
}