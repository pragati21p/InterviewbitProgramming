string Solution::longestPalindrome(string A) {
    int n=A.length();
    bool dp[n][n];
    
    int mx=1, start=0, end=0;
    
    for(int i=0;i<n;i++){
        dp[i][i]=1;
    }
    
    for(int gap=1;gap<n;gap++){
        for(int i=0, j=i+gap;i<n, j<n;i++, j++){
            dp[i][j] = (A[i]==A[j]) && (i+1>=j || (dp[i+1][j-1]));
            
            if(dp[i][j]){
                if(mx < j-i+1 ){
                    start=i;
                    end=j;
                    mx=j-i+1;
                }
            }
        }
    }
    return A.substr(start, end-start+1);
}