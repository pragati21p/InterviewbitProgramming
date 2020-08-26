vector<int> Solution::getRow(int A) {
    int num=1, x=A, i;
    vector<int> v;
    
    for(i=0;i<=A/2;i++){
        v.push_back(num);
        num = num*x/(i+1);
        x--;
    }
    if(A%2==0) i--;
    i--;
    while(i>=0){
        v.push_back( v[i] );
        i--;
    }
    return v;
}