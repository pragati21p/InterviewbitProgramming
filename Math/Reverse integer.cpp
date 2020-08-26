int Solution::reverse(int A) {
    long long int n=A, ans=0;
    if(n<0) n=-A;
    
    while(n>0){
        int t=n%10;
        ans = ans*10 + t;
        n=n/10;
    }
    if(ans!=(int)ans) return 0;
    return A<0?-ans:ans;
}