string Solution::convertToTitle(int A) {
    
    string str="";
    while(A>0){
        int rem = (A%26);
        
        if(rem==0){
            string s(1, 'Z');
            str = s+str;
            A=A/26 -1;
        } else {
            string s(1, (char)(rem + 'A' - 1));
            str = s+str;
            A=A/26;
        }
    }
    return str;
}