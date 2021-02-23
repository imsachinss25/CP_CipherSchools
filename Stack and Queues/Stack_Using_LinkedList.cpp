#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	Node *next;
	Node(int x){
		data=x;
		next=NULL;
	}
	
};

Node *insertBeg(Node *head, int x){
	Node *temp=new Node(x);
	temp->next=head;
	return temp;
}


void solve(Node *head){
	stack<int>s;
	for(Node *t=head;t!=NULL;t=t->next){
		s.push(t->data);
	}
while(s.empty()==false){
	int x=s.top();
	cout<<x<<" ";
	s.pop();
}
}


void resolve(Node *head){
	queue<int>q;
	for(Node *t=head;t!=NULL;t=t->next){
		q.push(t->data);
	}
	
while(q.empty()==false){
	int x=q.front();
	cout<<x<<" ";
	q.pop();
}
cout<<endl;
}

int main(){
Node *head=NULL;
head=insertBeg(head, 10);
head=insertBeg(head, 20);
head=insertBeg(head, 30);
head=insertBeg(head, 40);
head=insertBeg(head, 50);
resolve(head);
solve(head); 

	return 0;
}
