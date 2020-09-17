stack<int> s, gmin;
MinStack::MinStack() {
    while(!s.empty()) s.pop();
    while(!gmin.empty()) gmin.pop();
}
 
void MinStack::push(int x) {
    s.push(x);
    
    int y;
    if(gmin.empty() || gmin.top()>x) y=x;
    else y=gmin.top();
    gmin.push(y);
}
 
void MinStack::pop() {
    if(!s.empty()) s.pop();
    if(!gmin.empty()) gmin.pop();
}
 
int MinStack::top() {
    if(s.empty()) return -1;
    return s.top();
}
 
int MinStack::getMin() {
    if(gmin.empty()) return -1;
    return gmin.top();
}