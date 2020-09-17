ListNode* Solution::deleteDuplicates(ListNode* A) {
    
    ListNode *curr=A->next, *prev=A;
    while(curr!=NULL){
        if(prev->val==curr->val){
            prev->next = curr->next;
            curr = prev->next;
        } else {
            prev = curr;
            curr = curr->next;
        }
    }
    return A;
}