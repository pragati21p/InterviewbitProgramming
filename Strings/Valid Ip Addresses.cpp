vector<string> perform(string A, int n){
    vector<string> ans, ans1;
    
    if(n==1){
        if(A.size()>3 || A.size()==0) return ans;
        else {
            int temp = stoi(A);
            if((temp>0 && temp<=255 && A[0]!='0') 
                || (temp==0 && A.size()==1)){
                ans.push_back(A);
            }
            return ans;
        }
    }
    
    if(A.size()==0) return ans;
    string str, str1;
    int temp;
    for(int i=0;i<3 && i<A.size();i++){
        str = A.substr(0, i+1);
        
        temp = stoi(str);
        // cout<<A<<" ";
        if((temp>0 && temp<=255 && str[0]!='0') || (temp==0 && str.size()==1)){
            
            ans1 = perform( A.substr(i+1, A.size()-1), n-1 );
            
            for(int j=0;j<ans1.size();j++){
                str1 = str;
                str1.append(".");
                str1.append(ans1[j]);
                ans.push_back(str1);
            }
        }
    }
    return ans;
}
 
vector<string> Solution::restoreIpAddresses(string A) {
    
    vector<string> ans;
    ans = perform( A, 4 );
    return ans;
}