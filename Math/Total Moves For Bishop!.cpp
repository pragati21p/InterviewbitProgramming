int Solution::solve(int A, int B) {
    int d1[]={1, -1, 1, -1};
    int d2[]={1, -1, -1, 1};
    
    int cnt=0;
    for(int i=1;i<8;i++){
        for(int j=0;j<4;j++){
            
            if( A+ i*d1[j] >=1 && B+ i*d2[j] >=1 && A+ i*d1[j] <9 && B+ i*d2[j] <9 ) cnt++;
        }
    }
    return cnt;
}