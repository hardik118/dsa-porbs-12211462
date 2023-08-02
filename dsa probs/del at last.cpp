#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *next;
};
void display(struct node *ptr){
	while(ptr!=NULL){
		printf("element: %d\n",ptr->data);
		ptr= ptr->next;
	}
}
struct node * delatlast(struct node *head){
	struct node *ptr = head;
	struct node *p= head->next;
	while(p->next!=NULL){
		ptr= ptr->next;
		p=p->next;
	}
	ptr->next=NULL; 
	free(p);
	return head;
	
}
int main(){
	struct node   *head;
	struct node   *second;
	struct node  *third;
	struct node  *fourth;
	struct node  *fifth;
 
 head= (struct node*)malloc(sizeof(struct  node));
second = (struct node*)malloc(sizeof(struct node));
 third= (struct node*)malloc(sizeof(struct node));
 fourth= (struct node*)malloc(sizeof(struct node));
 fifth= (struct node*)malloc(sizeof(struct node)); 
head->data= 7;
head->next= second;
second->data=8;
second->next= third;
third->data= 9;
third->next= fourth;
third->next= fifth;
fifth->data= 11;
fifth->next= NULL;
printf("done\n");
display(head);
 head=delatlast(head);
 printf("done\n");
 display(head);
return  0;
	
}
