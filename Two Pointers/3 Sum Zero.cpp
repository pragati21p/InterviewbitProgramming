vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(), A.end());
    
    vector<vector<int> > ans;
    for(int i=0;i<A.size();){
        int j=i+1, k=A.size()-1;
        
        while(j<k){
            long long int s = (long long int) A[i] + (long long int) A[j]+ (long long int)A[k];
            
            if(s<0){
                int t=A[j];
                while(A[j]==t && j<k)
                    j++;
            } else if(s>0){
                int t=A[k];
                while(A[k]==t && j<k)
                    k--;
            } else{
                vector<int> v = {A[i], A[j], A[k]};
                ans.push_back(v);
                
                int t=A[j];
                while(A[j]==t && j<k)
                    j++;
            }
        }
        
        int t=A[i];
        while(A[i]==t && i<A.size())
            i++;
        
    }
    return ans;
}