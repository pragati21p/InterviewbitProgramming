vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long int i = 0, sum1=0, sum2=0, org1, org2, x, y;
    vector<int> v1;
    
    for(i=(long long)0;i<(long long)A.size();i++){
        sum1 += (long long) A[i];
        sum2 += (long long) A[i] * (long long) A[i];
    }
    i = (long long) A.size();
    org1 = i*(i+1)/2;
    org2 = i*(i+1)*(2*i+1)/6;
    
    x = sum1 - org1;
    y = (sum2 - org2)/x;
    
    v1.push_back((x+y)/2);
    v1.push_back((y-x)/2);
    
    
    return v1;
}
