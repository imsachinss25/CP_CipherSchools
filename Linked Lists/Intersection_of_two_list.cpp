Node* findIntersection(Node* head1, Node* head2)
{
    Node *res=NULL,*head=NULL,*a=head1,*b=head2;
    
    while(a!=NULL && b!=NULL)
    {
        if(a->data==b->data)
        {
            Node *temp=new Node(a->data);
            if(res==NULL)
            {
                res=temp;
                head=res;
            }
            else
            {
                res->next=temp;
                res=temp;
            }
           // delete(temp);
            a=a->next;
            b=b->next;
        }
        else if(a->data>b->data)
        {
            b=b->next;
        }
        else
        a=a->next;
    }
    return head;
    
}
