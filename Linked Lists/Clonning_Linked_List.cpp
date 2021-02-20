Node *copyList(Node *head) {
    Node *nextt,*temp;
    for(Node *curr=head;curr!=NULL;)
    {
        nextt=curr->next;
        curr->next=new Node(curr->data);
        curr->next->next=nextt;
        curr=nextt;
    }

   for(Node *curr=head;curr!=NULL;curr=curr->next->next)
    {
        curr->next->arb=(curr->arb!=NULL)?curr->arb->next:NULL;
        
    }
    Node *copy=head->next,*original=head;
   
    
    temp=copy;
    while(original!=NULL && copy!=NULL)
    {
        original->next = 
         original->next? original->next->next : original->next; 
  
        copy->next = copy->next?copy->next->next:copy->next; 
        original = original->next; 
        copy = copy->next; 
    }
    

    return temp;
}
