vector<vector<int> > Solution::generateMatrix(int A) {
    
    vector<vector<int> > v;
    
    vector<int> temp;
    for(int j=0;j<A;j++){
        temp.push_back(0);
    }
    
    for(int i=0;i<A; i++){
        v.push_back(temp);
    }
    
    
    int dir=0;
    int i=0, j=0, count=1;
    
    while(1){
          
         v[i][j] = count++;
        
        if(dir==0 && j<A-1 && v[i][j+1]==0){
            j++;
            continue;
        } 
        else dir=1;
        
        if(dir==1 && i<A-1 && v[i+1][j]==0){ 
            i++;
            continue;
        } else dir=2;
        
        if(dir==2 && j>0 && v[i][j-1]==0){ 
            j--;
            continue;
        } else dir=3;
        
        if(dir==3 && i>0 && v[i-1][j]==0){ 
            i--;
            continue;
        } else{
            dir=0;
            if(dir==0 && j<A-1 && v[i][j+1]==0){
                j++;
                continue;
            } 
            else break;
        }
    }
    return v;
}