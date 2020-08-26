int Solution::isPower(int A) {
    
    if(A==1) return 1;
    for(int x=2;x*x<=A;x++){
        int j=A;
        while(j>1){
            if(j%x) break;
            j = j/x;
        }
        
        if(j==1){
            return 1;
        }
    }
    return 0;
}