unsigned int Solution::reverse(unsigned int A) {
   
   unsigned long long int bit=31, ans=0;
   while(A>0 && bit>=0){
       ans += A%2==1?pow(2, bit):0;
       A/=2;
       bit--;
   }
   return ans;
}