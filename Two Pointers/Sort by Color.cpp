void Solution::sortColors(vector<int> &A) {
    
    int cnt0=0, cnt1=0, cnt2=0;
    
    for(int i=0;i<A.size();i++){
        if(A[i]==0) cnt0++;
        if(A[i]==1) cnt1++;
        if(A[i]==2) cnt2++;
    }
    
    int i=0;
    while(cnt0>0){
        A[i]=0; i++; cnt0--;
    }
    while(cnt1>0){
        A[i]=1; i++; cnt1--;
    }
    while(cnt2>0){
        A[i]=2; i++; cnt2--;
    }
}