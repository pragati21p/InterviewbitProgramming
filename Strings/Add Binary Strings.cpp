string Solution::addBinary(string A, string B) {
    int i=A.size()-1, j=B.size()-1, c=0;
    
    string ans="";
    while(i>=0 || j>=0 || c==1){
        int a= i>=0?A[i]-'0':0;
        int b= j>=0?B[j]-'0':0;
        
        int x= (a+b+c);
        ans= to_string(x%2) + ans;
        c= x/2;
        i--;
        j--;
    }
    
    return ans;
}