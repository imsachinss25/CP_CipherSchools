Node *solve(Node *A, Node *B){
	Node *heafd, *last;
	head=last=NULL:
	while(A!=NULL and B!=NULL){

	if(A->data<=B->data){
	
	if(head==NULL)head=last=A;
	
	else{
	
	last->next=A;
	
	last=last->next;
	
	}
	
	A=A->next;
	
	}
	
	else{
	
	if(head==NULL)head=last=B;
	
	else{
	
	last->next=B;
	
	last=last->next;
	
	}
	
	A=A->next;
	}
	
	}
	
	if(A)last->next=A;
	
	if(B)last->next=B;
	return head;
}
