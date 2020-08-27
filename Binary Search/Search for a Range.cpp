int findStart(const vector<int> &A, int B, int mn, int mx){
    int mid, last=mn-1;
    while(mn<=mx){
        mid = mn + (mx-mn)/2;
        if(last==mid) break;
        
        if(A[mid]==B){
            if(mid==0 || A[mid-1]!=B) return mid;
            else mx = mid;
        } else if(A[mid] > B){
            mx = mid;
        } else mn = mid +1;
        last=mid;
    }
    
    return -1;
}
 
int findEnd(const vector<int> &A, int B, int mn, int mx){
    int mid, last=mn-1;
    while(mn<=mx){
        mid = mn + (mx-mn)/2;
        if(last==mid) break;
        
        if(A[mid]==B){
            if(mid==A.size()-1 || A[mid+1]!=B) return mid;
            else mn = mid +1;
        } else if(A[mid] > B){
            mx = mid;
        } else mn = mid +1;
        last=mid;
        
    }
    
    return -1;
}
 
vector<int> Solution::searchRange(const vector<int> &A, int B) {
    
    vector<int> v;
    v.push_back(findStart(A, B, 0, A.size()-1));
    v.push_back(findEnd(A, B, 0, A.size()-1));
    
    return v;
}