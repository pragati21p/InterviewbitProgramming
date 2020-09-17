ListNode* Solution::solve(ListNode* A) {
    
    ListNode *curr=A, *head=NULL, *nxt, *prev;
    
    while(curr!=NULL && curr->next!=NULL){
        nxt=curr->next->next;
        curr->next->next=head;
        head=curr->next;
        curr->next=nxt;
        curr=nxt;
    }
    
    curr=A;
    while(curr){
        nxt=curr->next;
        curr->next=head;
        
        if(head){
            prev=head->next;
            head->next=nxt;
            head=prev;
        } else break;
        
        // cout<<"h ";
        curr=nxt;
    }
    return A;
}