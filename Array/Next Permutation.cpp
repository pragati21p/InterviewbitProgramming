vector<int> Solution::nextPermutation(vector<int> &A) {
    
    int n=A.size();
    vector<int> ::iterator i, j, k;
    for(i=A.end()-1;i!=A.begin();i--){
        if(*(i-1)<*i){
            break;
        }
    }
    
    // find min
    int mn=*i, temp;
    k=i;
    if(i!=A.begin()){
        j=i;
        for(;j!=A.end();j++){
            if(mn>*j && *(i-1)<*j){
                mn = *j; k=j;
                // cout<<*j<<endl;
            }
            
        }
        
        temp = *(i-1);
        *(i-1) = *k;
        *k = temp;
    }
    
    sort(i, A.end());
    return A;
}