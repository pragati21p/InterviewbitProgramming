int Solution::sqrt(int A) {
    if(A<2) return A;
    
    long long int low=1, high=A, mid=A, ans;
    while(low<=high) {
        mid = (low+high+1)/2;
        
        long long int cal=(mid*mid);
        if( cal>A ){
            high=mid-1;
        } 
        else if( cal<A ){
            low=mid+1;
            ans = mid;
        } 
        else return mid;
    }
    return ans;
}