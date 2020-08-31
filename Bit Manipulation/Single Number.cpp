int Solution::singleNumber(const vector<int> &A) {
    
    int num=0;
    for(int i=0;i<A.size();i++){
        num = num^A[i];
    }
    return num;
}