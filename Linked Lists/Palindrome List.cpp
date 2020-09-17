int Solution::lPalin(ListNode* A) {
    
    if(A==NULL || A->next==NULL) return 1;
    
    ListNode *mid=A, *curr=A, *head=NULL, *prev;
    
    while(curr!=NULL && curr->next!=NULL){
        mid=mid->next;
        curr=curr->next->next;
    }
    
    int isEven;
    if(curr==NULL) isEven=1;
    else isEven=0;
    
    curr=A;
    while(curr!=mid){
        prev=curr->next;
        curr->next=head; head=curr; curr=prev;
    }
    
    ListNode *curr1=head, *curr2=mid;
    
    if(!isEven) curr2=curr2->next;
    while(curr2!=NULL && curr1!=NULL){
        if(curr2->val!=curr1->val) return 0;
        curr2=curr2->next;
        curr1=curr1->next;
    }
    return 1;
}