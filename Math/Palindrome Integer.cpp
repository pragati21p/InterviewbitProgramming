int Solution::isPalindrome(int A) {
    long long int n=A, ans=0;
    if(n<0) return 0;
    
    while(n>0){
        int t=n%10;
        ans = ans*10 + t;
        n=n/10;
    }
    
    return ans==A;
}