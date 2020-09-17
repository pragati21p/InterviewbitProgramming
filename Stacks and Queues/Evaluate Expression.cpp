bool isNumber(string s){
    if(s.length()==0) return 0;
    
    int i=0;
    if(s[i]=='-'){
        i++;
    }
    
    if(i==s.length()) return 0;
    
    for(;i<s.length();i++){
        if(s[i]<'0' || s[i]>'9') return 0;
    }
    return 1;
}
 
int Solution::evalRPN(vector<string> &A) {
    stack <long long int> num;
    
    for(int i=0;i<A.size();i++){
        if(isNumber(A[i])){
            num.push( stoi(A[i]));
        } else {
            long long int b=num.top();
            num.pop();
            
            long long int a=num.top();
            num.pop();
            
            long long int c=0;
            if(A[i]=="*") c=a*b;
            else if(A[i]=="+") c=a+b;
            else if(A[i]=="-") c=a-b;
            else if(b!=0) c=a/b;
            
            num.push(c);
        }
    }
    return num.top();
}