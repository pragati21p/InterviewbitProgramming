ListNode* Solution::partition(ListNode* A, int B) {
    
    ListNode *head1=NULL, *tail1=NULL;
    ListNode *curr=A, *prev=NULL;
    
    while(curr!=NULL){
        if(curr->val < B){
            if(head1==NULL) head1=tail1=curr;
            else{
                tail1->next=curr;
                tail1=curr;
            }
            
            if(prev!=NULL){
                prev->next=curr->next;
            } else {
                A=curr->next;
            }
        } else {
            prev = curr;
        }
        
        curr=curr->next;
    }
    
    if(tail1!=NULL) tail1->next=A;
    else head1=A;
    return head1;
}