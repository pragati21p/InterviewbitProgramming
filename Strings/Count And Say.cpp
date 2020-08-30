string Solution::countAndSay(int n) {
    // Base cases 
    if (n == 1)      return "1"; 
    
    string curr_str = "1";
    
    
    for(int i=2;i<=n;i++){
        
        string new_str;
        int cnt=1;
        for(int j=1;j<curr_str.size();j++) {
            if( curr_str[j-1]==curr_str[j]) {
                cnt++;
            } else {
                string s(1, curr_str[j-1]);
                new_str.append( to_string(cnt) + s);
                cnt=1;
            }
        }
        
        string s(1, curr_str[ curr_str.size()-1 ]);
        new_str.append( to_string(cnt) + s);
        
        curr_str=new_str;
    }
    return curr_str;
}