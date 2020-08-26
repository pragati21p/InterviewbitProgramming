bool Solution::hotel(vector<int> &arrive, vector<int> &depart, int K) {
    int i=0, j=0;
    sort(arrive.begin(), arrive.end());
    sort(depart.begin(), depart.end());
    
    int count=0;
    while(i<arrive.size()){
        if( arrive[i] < depart[j]){
            count++;
            i++;
        } else {
            count--; j++;
        }
        
        if(count>K) return 0;
    }
    
    return 1;
}