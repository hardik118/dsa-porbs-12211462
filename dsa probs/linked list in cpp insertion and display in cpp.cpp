#include<iostream>
using namespace std;
 	class Node{
 		public:
 			int data;
 			Node *next;	
		Node(int val){
			data= val;
			next=NULL;
			
		}	
	 };
	 void insertattail(Node* &head,int val){
	 	Node* n= new Node(val);
	 	Node* temp= head;
	if(head==NULL){
		head = n;
		return ;
	 	Node *temp= head;
	 	while(temp->next!=NULL){
	 		temp=temp->next;		
		 }
		 temp->next=n;
 }
}
void display(Node* head){
Node* temp= head;
	while(temp!=NULL){
		cout<<temp->data;
		temp=temp->next;
		
	}
}
 int main(){
 	Node *head= NULL;
 	insertattail(head,1);
 	
 	insertattail(head,2);
 	display(head);
 	insertattail(head,3);
 	display(head);	
 }


