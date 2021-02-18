int interpoint(Node* head1, Node* head2, int d)
{  
    while(d>0)
    {   
        if(head1==NULL)
        return -1;
        head1=head1->next;
        d--;
    }
    // now both heads pointing at same distance before common starts
    while(head1!=NULL)
    {
        if(head1==head2)
        return head1->data;
        
        head1=head1->next;
        head2=head2->next;
    }
    return -1;
}
int count(Node* head)
{
    if(head==NULL)
    return 0;
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
    return c;
}
int intersectPoint(Node* head1, Node* head2)
{
    int n1=count(head1);
    int n2=count(head2);
    int ans=-1;
    if(n1>=n2)
    ans=interpoint(head1,head2,n1-n2);
    else
    ans=interpoint(head2,head1,n2-n1);
    return ans;
}
