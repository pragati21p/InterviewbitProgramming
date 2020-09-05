int Solution::threeSumClosest(vector<int> &A, int B) {
    
    sort(A.begin(), A.end());
    
    long long int mn= abs( B - (A[0] + A[1] + A[2]));
    long long int ans= A[0] + A[1] + A[2];
    for(long long int i=0;i<A.size();i++){
        
        long long int sum = B- A[i];
        long long int j=i+1, k=A.size()-1;
        while(j<k){
            long long int ch = A[j] + A[k];
            
            if(mn > abs(B - A[i] - ch)){
                ans = A[i] + ch;
                mn = abs(B - A[i] - ch);
            }
            if(ch<sum){
                j++;
            } else k--;
            
        }
    }
    return ans;
}