vector<int> Solution::findPerm(const string A, int B) {
    
    int i=1, j=B;
    vector<int> v;
    
    for(int pos=0;pos<A.length();pos++){
        if(A[pos]=='D'){
            v.push_back(j--);
        } else v.push_back(i++);
    }
    v.push_back(i);
    return v;
}