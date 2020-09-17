ListNode* solve(ListNode* A, ListNode* B, int carry){
    
    int a= A?A->val:0;
    int b= B?B->val:0;
    
    int c=a+b+carry;
    if(c==0 && A==NULL && B==NULL) return NULL;
    
    ListNode* n1= A?A->next:A;
    ListNode* n2= B?B->next:B;
    
    ListNode* curr=new ListNode(c%10);
    curr->next = solve(n1,n2,c/10);
    return curr;
}
 
ListNode* Solution::addTwoNumbers(ListNode* A, ListNode* B) {
    ListNode* head= solve(A, B, 0);
    ListNode* curr=head, *last;
    
    while(curr){
        if(curr->val>0) last=curr;
        curr=curr->next;
    }
    last->next=NULL;
    return head;
}