×
int Solution::maxArea(vector<int> &A) {
    long long int area=0;
    
    int i=0, j=A.size()-1;
    
    while(i<j){
        long long int local = min(A[i], A[j]) * (long long int) (j-i);
        
        
        if(A[i]>A[j]) j--;
        else i++;
        
        if(area < local){
            area = local;
        }
    }
    return area;
}