string Solution::simplifyPath(string A) {
    stack<string> s, s1;
    int start=0;
    string str="", ans;
    if(A[ A.length()-1 ]!='/') A=A+"/";
    for(int i=0;i<A.length();i++){
        
        str.clear();
        while( i<A.length() && A[i]=='/' ) i++;
        
        while(i<A.length() && A[i]!='/'){
            str.push_back(A[i]);
            i++;
        }
        
        if(str==".." ){
            if(!s.empty()) s.pop();
        } 
        
        else if(str!="." && str.length()>0){
            s.push(str);
        }
        
    }
    
    stack<string> st1; 
    while (!s.empty()) { 
        st1.push(s.top()); 
        s.pop(); 
    } 
    
    string res="/";
    // the st1 will contain the actual res. 
    while (!st1.empty()) { 
        string temp = st1.top(); 
          
        // if it's the last element no need 
        // to append "/" 
        if (st1.size() != 1) 
            res.append(temp + "/"); 
        else
            res.append(temp); 
  
        st1.pop(); 
    } 
  
    return res; 
}