bool compareInt(const Interval a1, const Interval a2){
    return a1.start<a2.start;
}
vector<Interval> Solution::merge(vector<Interval> &A) {
    
    if(A.size()<2) return A;
    sort(A.begin(), A.end(), compareInt);
    
    vector<Interval> ans;
    Interval temp;
    ans.push_back(A[0]);
    for(int i=1; i<A.size();i++){
        temp = ans[ ans.size()-1 ];
        if( temp.end >= A[i].start){
            A[i].start = temp.start;
            A[i].end = max( temp.end, A[i].end);
            
            ans.pop_back();
        }
        ans.push_back(A[i]);
    }
    return ans;
}