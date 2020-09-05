int Solution::solve(vector<int> &arr, int n) {
    // Initialize positions of two elements 
    sort(arr.begin(), arr.end());
    int i = 0;  
    int j = 1;  
    int size = arr.size();
    // Search for a pair  
    while (i < size && j < size)  
    {  
        if (i != j && arr[j] - arr[i] == n)  
        {   
            return true;  
        }  
        else if (arr[j]-arr[i] < n)  
            j++;  
        else
            i++;  
    }  
   
    return false;  
}