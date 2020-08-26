vector<int> Solution::subUnsort(vector<int> &A) {
    int n=A.size();
    vector<int> v;
    int min1=-1, max1=-1;
    for(int i=1;i<n;i++){
        if(A[i]<A[i-1]){
            min1=i;
            break;
        }
    }
    for(int i=1;i<n;i++){
        if(A[n-i]<A[n-i-1]){
            max1=n-i;
            break;
        }
    }
    
    if(min1==-1 && max1==-1){
        v.push_back(-1);
        return v;
    }
    
    int mn=A[min1], mx=A[max1];
    for(int i=min1;i<=max1;i++){
        if(mn>A[i]) mn=A[i];
        if(mx<A[i]) mx=A[i];
    }
    
    int limit1=min1;
    for(int i=0;i<min1;i++){
        if(A[i]>mn){
            limit1=i;
            break;
        }
    }
    
    if(min1>0)
        mx = max(mx, A[min1-1]);
    int limit2=max1;
    for(int i=n-1;i>max1;i--){
        if(A[i]<mx){
            limit2=i;
            break;
        }
    }
    
//     for(int i=limit1;i<=limit2;i++){
        v.push_back(limit1);
        v.push_back(limit2);
//     }
//     cout<<min1<<" "<<max1<<" "<<mn<<" "<<mx<<" "<<limit1<<" "<<limit2;
    return v;
}