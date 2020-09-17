ListNode* Solution::removeNthFromEnd(ListNode* A, int B) {
    ListNode *curr=A, *prev=NULL;
    int len=0;
    while(curr!=NULL){
        curr=curr->next;
        len++;
    }
    
    if(B>=len) return A->next;
    
    B = (len - B );
    curr=A;
    while(B--){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    return A;
}