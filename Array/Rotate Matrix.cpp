void Solution::rotate(vector<vector<int> > &A) {
    
    int n=A.size();
    
    for(int x=0;x<n/2;x++){
        
        for(int y=x;y<n-x-1;y++){
            
//            cout<<A[i][j]<<" "<<
            int i=x, j=y;
            
            int temp = A[i][j];
            A[i][j] = A[n-j-1][i];
            A[n-j-1][i] = A[n-i-1][n-j-1];
            A[n-i-1][n-j-1] = A[j][n-i-1];
            A[j][n-i-1] = temp;
        }
        
    }
    
}