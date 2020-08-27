int Solution::searchMatrix(vector<vector<int> > &A, int B) {
    
    vector<int> c;
    for(int i=0;i<A.size();i++){
        c.push_back( A[i][ A[i].size()-1 ]);
    }
    
    int x= lower_bound(c.begin(), c.end(), B) - c.begin();
    
    if(x==A.size()) return 0;
    
    return binary_search( A[x].begin(), A[x].end(), B);
}