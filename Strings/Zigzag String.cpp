string Solution::convert(string A, int B) {
    if(B<2 || A.size()==0) return A;
    
    vector<int> arr, alt;
    string str;
    int j=(2*B)-2, i=0, x=1;
    while(i<A.size()){
        string t(1, A[i]);
        str.append(t);
        arr.push_back(i);
        i=i+j;
    }
    arr.push_back(i);
    
    while(x<B){
        for(int i=0;i<arr.size();i++){
            int t1= arr[i]-x;
            int t2= arr[i]+x;
            
            if(t1>=0 && t1<A.size() && (alt.size()==0 
                || alt[ alt.size()-1 ]!=t1)){
                alt.push_back(t1);
                string t(1, A[t1]);
                str.append(t);
            }
            
            if( t2>=0 && t2<A.size() ){
                alt.push_back(t2);
                string t(1, A[t2]);
                str.append(t);
            }
        }
        alt.clear();
        x++;
    }
    return str;
}