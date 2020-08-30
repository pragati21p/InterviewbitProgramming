long long int i;
 
bool checkspace(const string A){
    while(i<A.length() && A[i]==' ') i++;
    return 1;
}
 
bool checkint(const string A){
    bool b=0;
    if(i<A.length() && (A[i]=='+' || A[i]=='-')){
        i++;
    }
    while(i<A.length() && A[i]>='0' && A[i]<='9' ){
        b=1; i++;
    }
    
    if(i<A.length() && A[i]=='.'){
        b=0;
    }
    return b;
}
 
bool checknum(const string A){
    bool b=0;
    if(i<A.length() && (A[i]=='+' || A[i]=='-')){
        i++;
    }
    while(i<A.length() && A[i]>='0' && A[i]<='9' ){
        b=1; i++;
    }
    
    if(i<A.length() && A[i]=='.'){
        i++;
        b=0;
        while(i<A.length() && A[i]>='0' && A[i]<='9' ){
            b=1; i++;
        }
    }
    return b;
}
 
int Solution::isNumber(const string A) {
    i=0;
    
    int b;
    b = checkspace(A);
    
    if(!checknum(A)) return 0;
    // cout<<A[i]<<" ";
    if(i==A.length()) return 1;
    
    b=1;
    if(A[i]=='e'){
        b=0; i++;
        if(!checkint(A)) return 0;
    }
    
    if(i==A.length()) return 1;
    
    checkspace(A);
    if(i==A.length()) return 1;
    else return 0;
}