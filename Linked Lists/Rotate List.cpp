ListNode* Solution::rotateRight(ListNode* A, int B) {
    
    ListNode *curr=A, *head;
    int len=0;
    
    // find length
    while(curr){
        len++;
        curr=curr->next;
    }
    
    // reach till k
    if(B%len==0) return A;
    
    len = len - (B%len);
    head=A;
    while(len && head){
        curr=head;
        head=head->next;
        len--;
    }
    
    ListNode *temp=A;
    A=head;
    while(head->next) head=head->next;
    head->next = temp;
    curr->next=NULL;
    return A;
}