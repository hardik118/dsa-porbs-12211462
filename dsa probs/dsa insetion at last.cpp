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
struct node * insertatlast(struct node *head, int data){
	struct node *ptr = (struct node*)malloc(sizeof(struct node));
	struct node *p= head;
	int i =0;
	while(p->next!=NULL){
		p= p->next;
		i++;
	}
	ptr->data= data; 
	p->next=ptr;
	ptr->next= NULL;
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
fourth->data= 10;
third->next= fifth;
fifth->data= 11;
fifth->next= NULL;
printf("done\n");
display(head);
 head=insertatlast(head,34);
 printf("done\n");
 display(head);
return  0;
	
}
