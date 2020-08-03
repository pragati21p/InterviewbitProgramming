vector<int> Solution::plusOne(vector<int> &A) {
    
    vector<int> B;
    int carry=1, i, tmp;
    
    for(i=A.size()-1;i>=0;i--){
        if(carry==0) break;
        
        tmp = (A[i] + carry);
        if( (A[i] + carry) == 10 ){
            carry = 1;
            tmp = 0;
        } else carry=0;
        B.push_back(tmp);
        // cout<<tmp<<" ";
    }
    
    if(carry==1) B.push_back(1);
    
    for(;i>=0;i--){
        B.push_back(A[i]);
    } 
    
    vector<int> c;
    int b=0;
    for(int i=B.size()-1; i>=0;i--){
        if(b==0 && B[i]==0) continue;
        c.push_back(B[i]);
        b=1;
    } 
    return c;
}
