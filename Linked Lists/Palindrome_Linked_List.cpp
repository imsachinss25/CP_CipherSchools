Node* reverse(Node *head)
{
    if(head==NULL)
    return head;
    
    Node *prev,*curr,*nextt;
    curr=head;
    prev=NULL;
    nextt=NULL;
    
    while(curr!=NULL)
    {
        nextt=curr->next;
        curr->next=prev;
        prev=curr;
        curr=nextt;
    }
    return prev;
    
}
bool isPalindrome(Node *head)
{
    Node *slow,*fast,*head2;
    slow=head;
    fast=head;
    
    while(fast!=NULL && fast->next!=NULL)
    {
        fast=fast->next->next;
        slow=slow->next;
    }
    head2=reverse(slow);
    
    while(head!=NULL && head2!=NULL)
    {
        if(head->data!=head2->data)
        return false;
        
        head=head->next;
        head2=head2->next;
    }
    return true;
    
}
