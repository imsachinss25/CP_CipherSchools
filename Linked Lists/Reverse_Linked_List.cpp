struct Node* reverseList(struct Node *head)
{
    Node *prev,*curr,*nextt;
    
    if(head==NULL)
    return NULL;
    
    prev=NULL;
    nextt=NULL;
    curr=head;
    
    
    while(curr!=NULL)
    {   
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev; // as current is pointing to NULL
}
