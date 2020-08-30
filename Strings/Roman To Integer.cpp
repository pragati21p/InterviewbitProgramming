int value(char r) 
{ 
    if (r == 'I') 
        return 1; 
    if (r == 'V') 
        return 5; 
    if (r == 'X') 
        return 10; 
    if (r == 'L') 
        return 50; 
    if (r == 'C') 
        return 100; 
    if (r == 'D') 
        return 500; 
    if (r == 'M') 
        return 1000; 
  
    return -1; 
}
 
int Solution::romanToInt(string str) {
    
    int res=0, i=0;
    while(i<str.length()) {
        int val1 = value(str[i]);
        int val2=0;
        if(i+1<str.length()) val2 = value(str[i+1]);
        
        if(val2>val1) {
            res = res + (val2-val1);
            i+=2;
        } else {
            res = res + val1;
            i++;
        }
    }
    return res;
}