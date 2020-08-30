string Solution::longestCommonPrefix(vector<string> &A) {
    
    int j=0;
    string ans="";
    while(1){
        int b=0;
        
        if(A[0].length()==j) break;
        char c=A[0][j];
        
        for(int i=1;i<A.size();i++){
            if(A[i].length()==j || A[i][j]!=c){
                b=1; break;
            }
        }
        if(b) break;
        string s(1,c);
        ans = ans+c;
        j++;
    }
    return ans;
}