void Solution::merge(vector<int> &A, vector<int> &B) {
    
    int i=0, j=0;
    vector<int> v;
    
    while(i<A.size() && j<B.size()){
        if(A[i]<B[j]){
            v.push_back(A[i]); i++;
        } else {
            v.push_back(B[j]); j++;
        }
    }
    
    while(i<A.size()){
        
        v.push_back(A[i]); i++;
        
    }
    
    while(j<B.size()){
        
        v.push_back(B[j]); j++;
        
    }
    
    for(i=0;i<A.size();i++){
        A[i]=v[i];
    }
    
    while(i<v.size()){
        A.push_back(v[i]); i++;
    }
}