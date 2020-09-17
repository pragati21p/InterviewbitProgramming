ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *head=NULL, *tail=NULL, *next1, *next2, *curr1=A, *curr2=B;
    
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->val < curr2->val){
            
            next1=curr1->next;
            if(head==NULL) head=tail=curr1;
            else{
                tail->next=curr1;
                tail=curr1;
            }
            curr1=next1;
        } else {
            next2=curr2->next;
            if(head==NULL) head=tail=curr2;
            else{
                tail->next=curr2;
                tail=curr2;
            }
            curr2=next2;
        }
        
    }
    
    while(curr1!=NULL){
        next1=curr1->next;
        if(head==NULL) head=tail=curr1;
        else{
            tail->next=curr1;
            tail=curr1;
        }
        curr1=next1;
    }
    
    while(curr2!=NULL){
        next2=curr2->next;
        if(head==NULL) head=tail=curr2;
        else{
            tail->next=curr2;
            tail=curr2;
        }
        curr2=next2;
    }
    tail->next=NULL;
    return head;
}