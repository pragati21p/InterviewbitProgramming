vector<int> numToVec(int N) 
{ 
    vector<int> digit; 
  
    // Push all the digits of N from the end 
    // one by one to the vector 
    while (N != 0) { 
        digit.push_back(N % 10); 
        N = N / 10; 
    } 
  
    // If the original number was 0 
    if (digit.size() == 0) 
        digit.push_back(0); 
  
    // Reverse the vector elements 
    reverse(digit.begin(), digit.end()); 
  
    // Return the required vector 
    return digit; 
} 
  
// Function to return the count of B length integers 
// which are less than C and they 
// contain digits from set A[] only 
int Solution::solve(vector<int>& A, int B, int C) 
{ 
    vector<int> digit; 
    int d, d2; 
  
    // Convert number to digit array 
    digit = numToVec(C); 
    d = A.size(); 
  
    // Case 1: No such number possible as the 
    // generated numbers will always 
    // be greater than C 
    if (B > digit.size() || d == 0) 
        return 0; 
  
    // Case 2: All integers of length B are valid 
    // as they all are less than C 
    else if (B < digit.size()) { 
        // contain 0 
        if (A[0] == 0 && B != 1) 
            return (d - 1) * pow(d, B - 1); 
        else
            return pow(d, B); 
    } 
  
    // Case 3 
    else { 
        int dp[B + 1] = { 0 }; 
        int lower[10 + 1] = { 0 }; 
  
        // Update the lower[] array such that 
        // lower[i] stores the count of elements 
        // in A[] which are less than i 
        for (int i = 0; i < d; i++) 
            lower[A[i] + 1] = 1; 
        for (int i = 1; i <= 10; i++) 
            lower[i] = lower[i - 1] + lower[i]; 
  
        bool flag = true; 
        dp[0] = 0; 
        for (int i = 1; i <= B; i++) { 
            d2 = lower[digit[i - 1]]; 
            dp[i] = dp[i - 1] * d; 
  
            // For first index we can't use 0 
            if (i == 1 && A[0] == 0 && B != 1) 
                d2 = d2 - 1; 
  
            // Whether (i-1) digit of generated number 
            // can be equal to (i - 1) digit of C 
            if (flag) 
                dp[i] += d2; 
  
            // Is digit[i - 1] present in A ? 
            flag = (flag & (lower[digit[i - 1] + 1] 
                            == lower[digit[i - 1]] + 1)); 
        } 
        return dp[B]; 
    } 
} 