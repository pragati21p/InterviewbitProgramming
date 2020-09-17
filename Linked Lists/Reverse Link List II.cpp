ListNode* Solution::reverseBetween(ListNode* A, int B, int C) {
    ListNode *curr=A, *head=NULL, *next=NULL, *tail, *prev=NULL;
    int cnt=0;
    
    if(B==C) return A;
    
    while(curr){
        cnt++;
        
        next = curr->next;
        
        if(cnt<B) prev=curr;
        
        if(cnt>=B && cnt<=C){
            
            if(head==NULL){
               head=tail=curr; 
               curr->next=NULL;
            } 
            else{
                curr->next=head;
                head=curr;
            }
            
        }
        
        if(cnt>C) break;
        
        curr=next;
    }
    
    if(prev) prev->next=head;
    else A=head;
    
    tail->next=curr;
    return A;
}