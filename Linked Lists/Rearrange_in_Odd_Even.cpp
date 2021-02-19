Node *rearrangeEvenOdd(Node *head)
{
  if(head==NULL)
  return NULL;
  
  Node *odd=head,*even=head->next,*evenHead=even;
  
  while(1)
  {   
     if(odd==NULL || even==NULL || even->next==NULL )
     {
         odd->next=evenHead; // here even->next is already NULL
         break;
     }
     odd->next=even->next;
     odd=even->next;
     
     if( odd->next==NULL)
     {
         even->next=NULL;
         odd->next=evenHead;
         break;
     }
     even->next=odd->next;
     even=odd->next;
     
     }
  
  return head;
}
