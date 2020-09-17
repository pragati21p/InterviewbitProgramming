ListNode* Solution::swapPairs(ListNode* A) {
    
    if(A==NULL || A->next==NULL) return A;
    
    ListNode *head=NULL, *curr1=A, *curr2=A->next, *next, *prev=NULL;
    
    while(curr1!=NULL && curr2!=NULL){
        next=curr2->next;
        
        curr2->next=curr1;
        curr1->next=next;
        
        if(prev!=NULL) prev->next=curr2;
        
        if(head==NULL){
            head=curr2;
        }
        
        prev=curr1;
        curr1=next;
        if(curr1!=NULL) curr2=curr1->next;
        else curr2=NULL;
    }
    if(curr1!=NULL) curr1->next=NULL;
    else prev->next=NULL;
    return head;
}