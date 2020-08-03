int Solution::repeatedNumber(const vector<int> &A) {
    int n=A.size();
    if (n <= 1) 
        return -1; 
  
    // initialize fast and slow 
    int slow = A[0]; 
    int fast = A[A[0]]; 
  
    // loop to enter in the cycle 
    while (fast != slow) { 
  
        // move one step for slow 
        slow = A[slow]; 
  
        // move two step for fast 
        fast = A[A[fast]]; 
    } 
  
    // loop to find entry point of the cycle 
    fast = 0; 
    while (slow != fast) { 
        slow = A[slow]; 
        fast = A[fast]; 
    } 
    return slow;
}
