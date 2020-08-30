string Solution::solve(string A) {
    string s="", ans="";
    
    for(int i=0;i<A.size();i++){
        if(A[i]==' '){
            
            if(s!=""){
                ans = s + " " + ans;
            } 
            s="";
        } else {
            string s1(1, A[i]);
            s = s + s1;
        }
    }
    if(s.length()>0) ans = s + " " + ans;
    return ans.substr(0, ans.length()-1);
}