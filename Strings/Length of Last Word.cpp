int Solution::lengthOfLastWord(const string A) {
    int i=A.length()-1;
    while(A[i]==' ') i--;
    
    int count=0;
    while(A[i]!=' ' && i>=0){
        i--; count++;
    }
    return count;
}