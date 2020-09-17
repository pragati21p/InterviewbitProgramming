ListNode* insertNode(ListNode* A, ListNode* B, ListNode *C){
    int data = B->val;
    
    ListNode *curr=A, *prev=NULL;
    while(curr!=B && curr->val<B->val){
        prev=curr;
        curr=curr->next;
    }
    
    if(curr==B) return A;
    
    C->next = B->next;
    
    if(prev!=NULL){
        B->next = curr;
        prev->next = B;
    } else {
        B->next=A;
        A = B;
    }
    
    return A;
}
 
ListNode* Solution::insertionSortList(ListNode* A) {
    if(A==NULL || A->next==NULL) return A;
    
    ListNode *curr=A->next, *prev=A, *next;
    while(curr){
        next = curr->next;
        A = insertNode(A, curr, prev);
        
        if(curr->next==next) prev=curr;
        curr=next;
    }
    return A;
}