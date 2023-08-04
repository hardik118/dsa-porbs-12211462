#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *next;
};
void display(struct node *head){
	struct node *ptr= head;
	while(ptr!=head){
		printf("element: %d\n",ptr->data);
		ptr= ptr->next;
	}
}
struct node * delatfirst(struct node *head){

	struct node *p = head;
	while(p->next!=head){
		p=p->next;
	}
	head= head->next;
	p->next=head->next;
	free(p);
	return head;
}
int main(){
	struct node   *head;
	struct node   *second;
	struct node  *third;
 
 head= (struct node*)malloc(sizeof(struct  node));
second = (struct node*)malloc(sizeof(struct node));
 third= (struct node*)malloc(sizeof(struct node));
  
head->data= 7;
head->next= second;
second->data=8;
second->next= third;
third->data= 9;
third->next= head;
printf("done\n");


 head=delatfirst(head);
printf("afterchanges\n");
display(head);

return  0;
	
}
