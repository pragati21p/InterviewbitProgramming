int Solution::solve(int A) {
    int cnt=0;
    while(A){
        if(A%2==0) cnt++;
        else break;
        A/=2;
    }
    return cnt;
}