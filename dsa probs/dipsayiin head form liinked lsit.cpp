#include<iostream>
using namespace std;
 struct node(){
 	int val;
 	node* next;
 	
 	node(int data){
 		val= data;
 		nexyt= NULL;
 		
	 }
 };
void display(node* head,int val){
	node* temp= head;
	while(temp!=NULL){
	cout<<temp->val<<endl;
	temp=temp->next;
		
	}
}
int main(){
	node * head= new node(10);
	node * second= new node(12);
	display(head);
	return 0;
}
