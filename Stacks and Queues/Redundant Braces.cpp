int Solution::braces(string A) {
    stack<char> s;
    
    int n=A.length();
    for(int i=0;i<A.length();i++){
        if( A[i]=='('){
            s.push(A[i]);
            if(A[i+1]=='('){
                s.push('0');
            } 
            if(A[i+1]==')' || A[i+2]==')') return 1;
        } else {
            if(A[i]==')'){
                s.pop();
                
                if(!s.empty()){
                    if(i+1<n && A[i+1]==')' && s.top()=='0') return 1;
                    if(s.top()=='0') s.pop();
                }
                
            }
        }
    }
    return 0;
}