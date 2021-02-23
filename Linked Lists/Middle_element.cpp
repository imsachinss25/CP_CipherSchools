 ListNode* middleNode(ListNode* head) {
        int len=0;
         ListNode *temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int c=0;
        temp=head;
        while(c<len/2){
            temp=temp->next;
            c++;
        }
        return temp;
    }
