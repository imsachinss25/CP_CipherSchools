struct node *reverse (struct node *head, int k)
{ 
    node *curr,*next,*prev,*head2=head;
    prev=NULL;
    next=NULL;
    curr=head;
    int t=k;
    
    while(curr!=NULL && t!=0)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        t--;
    }
    if(curr!=NULL)
    {  
        head2->next=reverse(curr,k);
    }

    return prev;
}
