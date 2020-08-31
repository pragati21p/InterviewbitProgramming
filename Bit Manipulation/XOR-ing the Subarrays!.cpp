int Solution::solve(vector<int> &arr) {
    
    int N=arr.size();
    int res = 0; 
  
    for (int i = 0; i < N; i++) 
    { 
        int freq = (i + 1) * (N - i); 
  
        if (freq % 2 == 1) 
            res = res ^ arr[i]; 
    } 
  
    return res; 
}