vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {
    vector<vector<int> > ans;
    
    for(int j=0;j<A.size();j++){
        int i=0, k=j;
        vector<int> v;
        while(i>=0 && k>=0 && i<A.size() && k<A.size()){
            v.push_back(A[i][k]);
            i++; k--;
        }
        ans.push_back(v);
    }
    
    for(int i=1;i<A.size();i++){
        int j=A.size()-1, k=i;
        vector<int> v;
        while(j>=0 && k>=0 && j<A.size() && k<A.size()){
            v.push_back(A[k][j]);
            k++; j--;
        }
        ans.push_back(v);
    }
    return ans;
}