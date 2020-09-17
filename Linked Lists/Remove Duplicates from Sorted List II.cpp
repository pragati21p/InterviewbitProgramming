ListNode* Solution::deleteDuplicates(ListNode* A) {
    ListNode *prev=NULL, *head=NULL, *curr=A, *prev1=NULL;
    
    while(curr!=NULL){
        bool b1=0, b2=0;
        if(prev1==NULL || prev1->val!=curr->val) b1=1;
        if(curr->next==NULL || curr->next->val!=curr->val) b2=1;
        
        if(b1 && b2){
            if(head==NULL) head=prev=curr;
            else{
                prev->next=curr;
                prev=curr;
            }
        }
        
        prev1=curr;
        curr=curr->next;
    }
    if(prev) prev->next=NULL;
    return head;
}