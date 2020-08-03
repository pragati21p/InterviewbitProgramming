vector<int> Solution::flip(string A) {
    
    int start, summ=0, suml=0, end, ms, me, x;
    bool set=0;
    int c=0;
    
    for(int i=0;i<A.length();i++){
        
        if(A[i]=='1') x=-1;
        else x=1;
        
        if(x==1) c++;
        
        if(set==0){
            set=1; start=0; end=0; ms=0; me=0;
            suml=x; summ=x;
            continue;
        }
        
        
        
        if(suml+x<x){
            start=end=i;
            suml=x;
        } else {
            suml+=x;
            end=i;
        }
        
        if(summ<suml){
            ms=start; me=end; summ=suml;
        }
    }
    
    vector<int> b;
    if(set==1 && c>0){
        b.push_back(ms+1); b.push_back(me+1);
    }
    return b;
}
