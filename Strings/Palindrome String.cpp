int Solution::isPalindrome(string A) {
    int i=0, j=A.length()-1;
    while(i<j){
        while( j>=0 ){
            
            if((A[j]>='A' && A[j]<='Z')) break;
            if((A[j]>='a' && A[j]<='z')) break;
            if((A[j]>='0' && A[j]<='9')) break;
            j--;
        }
        while(i<A.length()){
            if((A[i]>='A' && A[i]<='Z')) break;
            if((A[i]>='a' && A[i]<='z')) break;
            if((A[i]>='0' && A[i]<='9')) break;
            i++;
        }
        
        if(i>=j) return 1;
        
//        cout<<A[i]<<A[j]<<endl;
        if(tolower(A[i])!=tolower(A[j]) )return 0;
        i++;
        j--;
    }
    return 1;
}