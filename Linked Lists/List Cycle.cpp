ListNode* Solution::detectCycle(ListNode* A) {
    
    if( A==NULL || A->next==NULL) return NULL;
    
    ListNode *fast=A->next->next, *slow=A->next;
    
    while(fast!=slow && fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    if(fast==NULL || fast->next==NULL) return NULL;
    
    slow = A;
    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}