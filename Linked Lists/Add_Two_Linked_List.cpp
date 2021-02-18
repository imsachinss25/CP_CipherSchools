Node* push_Front(Node* head,int data)
{
  
    Node *n=new Node(data);
   n->next=head;
   head=n;
   return head;
    
}
struct Node* reverse(Node* root)
{
    Node *curr,*nextt,*prev;
    curr=root;
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
struct Node* addTwoLists(struct Node* first, struct Node* second)
{
   Node *head1,*head2,*head3=NULL,*temp=NULL;
   head1=reverse(first);
   head2=reverse(second);
   
   int sum=0,carry=0;
   while(head1!=NULL || head2!=NULL)
   {   
       int s1,s2;
       if(head1==NULL)
       s1=0;
       else
       s1=head1->data;
       if(head2==NULL)
       s2=0;
       else
       s2=head2->data;
       sum=s1+s2+carry;
       if(sum>9)
       carry=1;
       else
       carry=0;
       
       sum=sum%10;
        head3=push_Front(head3,sum);
        
       
       if(head1!=NULL)
       head1=head1->next;
       if(head2!=NULL)
       head2=head2->next;
   }
   if(carry)
   head3=push_Front(head3,carry);
   
   return head3;
}
