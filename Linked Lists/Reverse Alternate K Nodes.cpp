ListNode* Solution::solve(ListNode* A, int B) {
    
    if(A==NULL) return NULL;
    ListNode *head=NULL, *head1=NULL, *tail1=NULL, *prev, *tail=NULL, *nxt, *curr=A;
    
    tail=curr;
    int x=B;
    while(curr && B--){
        nxt = curr->next;
        curr->next=head;
        head=curr;
        curr=nxt;
    }
    
    tail->next=curr;
    B=x-1;
    while(curr && B--){
        curr=curr->next;
    }
    if(curr) curr->next = solve(curr->next, x);
    return head;
}