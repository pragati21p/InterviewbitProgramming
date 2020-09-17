int Solution::maxSpecialProduct(vector<int> &A) {
    
    long long int lv[A.size()], rv[A.size()];
    vector<long long int> s, t;
    for(long long int i=0;i<A.size();i++){
        
        while( s.size()> 0){
            if(A[i] < A[ s[s.size() - 1] ]){
                lv[i]=s[s.size() - 1];
                break;
            }
            s.pop_back();
        }
        
        if(s.size()==0) lv[i]=0;
        s.push_back( i );
    }
    
    for(long long int i=A.size()-1;i>=0;i--){
        while( t.size()> 0){
            if(A[i] < A[ t[t.size() - 1] ] ){
                rv[i]=t[t.size() - 1];
                break;
            }
            t.pop_back();
        }
        
        if(t.size()==0) rv[i]=0;
        t.push_back( i );
    }
    
    unsigned long long int ans=0;
    for(long long int i=0;i<A.size();i++){
        if( ans<(lv[i]*rv[i]) ) ans=(lv[i]*rv[i]);
    }
    
    return ans%1000000007;
}