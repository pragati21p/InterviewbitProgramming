int Solution::largestRectangleArea(vector<int> &A) {
    stack<int> s;
    int i=1;
    s.push(0);
    int mx=0;
    while(i<A.size()){
        
        while(!s.empty() && A[ s.top()]>A[i]){
            int t=s.top(); s.pop();
            int area = A[t]*(s.empty()?i:i-s.top()-1);
            mx = max(mx, area);
        }
        s.push(i);
        i++;
    }
    
    while(!s.empty()){
        int t=s.top(); s.pop();
        int area = A[t]*(s.empty()?i:i-s.top()-1);
        mx = max(mx, area);
    }
    return mx;
}