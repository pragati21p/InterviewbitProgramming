vector<int> Solution::primesum(int A) {
    bool b[A+5];
    fill_n(b, A+5, 1);
    
    for(int i=2;i<A;i++){
        if(!b[i]) continue;
        
        for(int j=2;i*j<A;j++){
            b[i*j] = 0;
        }
    }
    
    vector<int> v;
    for(int i=2;i<A;i++){
        if(b[i] && b[A-i]){
            v.push_back(i);
            v.push_back(A-i);
            break;
        }
    }
    return v;
}