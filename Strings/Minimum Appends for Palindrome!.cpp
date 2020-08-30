int Solution::solve(string A) {
    string tmp = A;
    reverse(A.begin(), A.end());
    string str = A + "$" + tmp;
    
    int id[str.length()], i=1, j=0;
    id[0]=0;
    
    while(i<str.length()) {
        if(str[j]==str[i]) {
            j++;
            id[i] = j;
            i++;
        } else {
            if(j==0){
                id[i]=0; i++;
            } 
            else j = id[j-1];
        }
    }
    return A.length() - id[ str.length()-1 ];
}