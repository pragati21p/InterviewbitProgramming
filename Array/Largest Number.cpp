bool compareString(const string &i1, const string &i2) 
{ 
    return ( i1 + i2 > i2 + i1 );
}
 
string Solution::largestNumber(const vector<int> &A) {
    vector<string> v;
    
    for(int i=0;i<A.size();i++){
        v.push_back( to_string(A[i]) );
    }
    
    sort( v.begin(), v.end() , compareString );
    
    string ch;
    
    
    if(v[0]=="0") return "0";
    
    for(int i=0;i<v.size();i++){
        ch.append(v[i]);
    }
    return ch;
}