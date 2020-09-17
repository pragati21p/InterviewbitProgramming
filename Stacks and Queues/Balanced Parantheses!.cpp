int Solution::solve(string A) {
    int x=0;
    for(int i=0;i<A.length();i++){
        if(A[i]=='(') x++;
        else x--;
        
        if(x<0) return 0;
    }
    if(x==0) return 1;
    return 0;
}