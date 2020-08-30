vector<int> computeLPSArray(string A){
    vector<int> id(A.length(), 0);
    
    id[0] =0;
    
    int j=0;
    for(int i=1;i<A.length();){
        
        if(A[j]==A[i]){
            
            id[i] = j+1;
            j++; i++;
        } else {
            if(j==0){
                id[i]=0; i++;
            } else {
                j = id[j-1];
            }
        }
    }
    return id;
}
 
int Solution::solve(string str) {
    
    string revStr = str; 
    reverse(revStr.begin(), revStr.end()); 
  
    // Get concatenation of string, special character 
    // and reverse string 
    string concat = str + "$" + revStr; 
  
    //  Get LPS array of this concatenated string 
    vector<int> lps = computeLPSArray(concat); 
  
    // By subtracting last entry of lps vector from 
    // string length, we will get our result 
    return (str.length() - lps.back()); 
    
    
    
}