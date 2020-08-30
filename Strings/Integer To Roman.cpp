int perform(int num, int *val1){
    
    int low=0, high=13, mid, ans=0;
    
    while(low<=high) {
        mid=(low+high+1)/2;
        
        if(val1[mid]<=num) {
            ans=mid;
            low=mid+1;
        } else {
            high=mid-1;
        }
    }
    return ans;
}
 
string Solution::intToRoman(int A) {
    int val1[]={1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    string str[]={"I", "IV", "V", "IX", "X", "XL", "L",  "XC", "C",  "CD", "D", "CM", "M"};
    string ans="";
    
    while(A>0){
        int x=perform(A, val1);
        ans.append(str[x]);
        A-=val1[x];
    }
    return ans;
}