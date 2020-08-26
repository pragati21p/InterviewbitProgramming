void Solution::setZeroes(vector<vector<int> > &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int n=A.size();
    set<int> rows, cols;
    
    for(int i=0;i<n;i++){
        for(int j=0;j<A[i].size();j++){
            if(A[i][j]==0){
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    
    for(auto i=rows.begin();i!=rows.end();i++){
        int row= *i;
        for(int j=0;j<A[row].size();j++){
            A[row][j] = 0;
        }
    }
    
    for(auto i=cols.begin();i!=cols.end();i++){
        int col= *i;
        for(int j=0;j<n;j++){
            A[j][col] = 0;
        }
    }
}