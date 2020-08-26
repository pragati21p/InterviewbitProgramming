vector<int> choose(int n){
    int i=0, x=n, num=1;
    
    vector<int> v;
    if(n==0){
        v.push_back(1); return v;
    }
    for(i=0;i<=n/2;i++){
        v.push_back(num);
        
        if(x==0) x=1;
        num = num*(x)/(i+1);
        x--;
    }
    
    if(n%2==0) i--;
    i--;
    while(i>=0){
        v.push_back( v[i] );
        i--;
    }
    return v;
}
 
vector<vector<int> > Solution::solve(int A) {
    vector<vector<int> > v;
    for(int i=0;i<A;i++){
        v.push_back( choose(i) );
        
    }
    return v;
}