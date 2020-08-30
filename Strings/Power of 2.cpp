bool isodd(char c){
    if( (c-'0')%2==1 ) return 1;
    return 0;
}
 
int Solution::power(string A) {
    int i=0;
    
    for(;i<A.length();i++){
        if(A[i]!='0') break;
    }
    if(i==A.length()) return 0;
    
    A = A.substr(i, A.length()-i);
    
    while(A.length()>0){
        string newstr;
        if( isodd(A[ A.length()-1 ]) ) return 0;
        
        int carry=0;
        for(int i=0;i<A.length();i++) {
            int temp = ((A[i]-'0') + (carry*10));
            
            string s(1, (char)(temp/2 + '0'));
            newstr.append(s);
            carry = temp%2;
        }
        A=newstr;
    
        int i=0;
        
        for(;i<A.length();i++){
            if(A[i]!='0') break;
        }
        if(i==A.length()) return 1;
        
        A = A.substr(i, A.length()-i);
        // cout<<A<<" ";
        if(A.length()==1 && A[0]=='1') return 1;
    }
    return 1;
}