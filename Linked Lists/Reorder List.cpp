ListNode* Solution::reorderList(ListNode* A) {
    ListNode *curr=A, *mid=A, *head=NULL, *next, *next1, *next2;
    
    if(A==NULL) return A;
    
    while(curr!=NULL && curr->next!=NULL){
        // cout<<"h";
        mid=mid->next;
        curr=curr->next->next;
    }
    
    curr=mid->next;
    mid->next=NULL;
    while(curr!=NULL){
        // cout<<"h1";
        next=curr->next;
        curr->next=head;
        head=curr;
        curr=next;
    }
    
    ListNode *n1=A, *n2=head;
    while(n1!=NULL && n2!=NULL){
        // cout<<"h2";
        next1=n1->next;
        next2=n2->next;
        
        n1->next=n2;
        n2->next=next1;
        
        n1=next1; n2=next2;
    }
    return A;
}