bool isVowel( char c ){
    if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c=='a' ||
        c=='e' || c=='i' || c=='o' || c=='u' ) return 1;
    return 0;
}
 
int Solution::solve(string A) {
    long long int count=0;
    for(long long int i=0;i<A.size();i++){
        if( isVowel(A[i]) ){
            count = (count + (A.size() - i)%10003)%10003;
        }
    }
    return count%10003;
}