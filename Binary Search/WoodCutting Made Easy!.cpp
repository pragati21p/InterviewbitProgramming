long long int obtainedWood(vector<int> &A, long long int ht) {
    long long int sum=0;
    for(long long int i=0;i<A.size();i++){
        sum += max((long long int)0, A[i]-ht);
    }
    return sum;
}
 
int Solution::solve(vector<int> &A, int B) {
    long long int mx = *max_element(A.begin(), A.end());
    
    long long int low=0, high=mx, ans=mx, mid;
    // int cnt=0;
    while(low<=high) {
        // cnt++;
        
        // if(cnt==15) break;
        mid = (high+low+1)/2;
        
        // cout<<"changed: "<<low<<" "<<high<<" ";
        // cout<<mid<<" ";
        if( obtainedWood(A, mid) >= B ){
            ans = mid;
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    
    return ans;
}