int Solution::pow(int x, int n, int d) {
    
    // bool b=0;
    while(x<0){
        x += d;
    }
    
    if(n==0){
        if(x==0) return 0;
        else return 1;
    }
    
    if(n==1){
        return x%d;
    } 
    
    x=x%d;
    long long int temp = (pow(x, n/2, d));
    long long int y = (temp*temp)%d;
    if(n%2==0){
        return y;
    } else {
        return (x*y)%d;
    }
}