ListNode* reverse(ListNode* A, int B){
    if(A==NULL) return A;
    ListNode *curr=A, *head=NULL, *tail=NULL;
    int t=B;
    
    while(curr!=NULL && t>0){
        A=curr->next;
        curr->next=head;
        if(head==NULL) tail=curr;
        head=curr;
        curr=A;
        t--;
    }
    
    tail->next = reverse(A, B);
    return head;
}
 
ListNode* Solution::reverseList(ListNode* A, int B) {
    return reverse(A, B);
}