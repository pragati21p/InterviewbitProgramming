bool isPossible(int A, long long int x, vector<int> &C) {
    long long int cnt=1, sum=0;
    for(long long int i=0;i<C.size();i++) {
        
        if(x<C[i]) return 0;
        if(sum + C[i]>x) {
            cnt++;
            if(cnt>A) return 0;
            sum=0;
        }
        
        sum += C[i];
    }
    return 1;
}
 
int Solution::paint(int A, int B, vector<int> &C) {
    
    long long int sum = 0;
    
    for(long long int i=0;i<C.size();i++) sum += C[i];
    long long int low=0, high=sum, mid, ans=sum;
    // cout<<sum<<" ";
    while(low<=high) {
        mid = (low+high+1)/2;
        // cout<<"changed: "<<low<<" "<<high<<" "<<mid<<" ";
        if(isPossible(A, mid, C)) {
            ans = mid;
            high = mid-1;
        } else low = mid+1;
    }
    
    return (ans*B)%10000003;
}