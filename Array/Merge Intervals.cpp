vector<Interval> Solution::insert(vector<Interval> &intervals, Interval newInterval) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ 
    // for more details
    
    // sort( intervals.begin(), intervals.end());
    int n=intervals.size();
    
    int newstart=n+1, newend=n+1, startinside=0, endinside=0;
    
    for(int i=0;i<n;i++){
        if(intervals[i].start>newInterval.start){
            newstart=i;
            
            if(i>0 && intervals[i-1].end>newInterval.start){
                startinside=1;
            } 
            break;
        }
        
        if(i==n-1 && intervals[n-1].end>newInterval.start){
            startinside=1;
            newstart=n;
        }
    }
    
    
    
    for(int i=0;i<n;i++){
        if(intervals[i].start>newInterval.end){
            newend=i;
            
            if(i>0 && intervals[i-1].end>newInterval.end){
                endinside=1;
            }
            break;
        }
        
        if(i==n-1 && intervals[n-1].end>newInterval.end){
            endinside=1;
            newend=n;
        }
    }
    
    vector<Interval> v;
    
    for(int i=0;i<min(newstart,n);i++){
        v.push_back( intervals[i] );
    }
    
    if(startinside == 0){
        v.push_back( Interval( newInterval.start, newInterval.start ) );
    }
    
    if(endinside==0)
        v[ v.size()-1 ].end = newInterval.end;
    else v[ v.size()-1 ].end = intervals[ newend-1 ].end ;
    
    for(int i=newend;i<n;i++){
        v.push_back( intervals[i] );
    }
    
    // cout<<newstart<<" "<<newend<<" "<<startinside<<" "<<endinside;
    return v;
}