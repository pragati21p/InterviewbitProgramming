string Solution::solve(string A, int B) {
    int cnt=1, i=1;
    string str;
    
    while(i<A.length()) {
        if(A[i]!=A[i-1]){
            if(cnt!=B){
                string s(1, A[i-1]);
                str.append(s);
            } 
            cnt=1;
        } else cnt++;
        i++;
    }
    
    if(cnt!=B){
        string s(1, A[i-1]);
        str.append(s);
    }
    return str;
}