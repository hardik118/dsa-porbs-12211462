#include<stdio.h>
#include<stdlib.h>
struct  node
{
	int data;
	struct node *prevnode;
	struct node *next;
	
};void revtraverse(struct node *head){

struct node *ptr = head;
while(ptr->next!=NULL){
	ptr=ptr->next;
	
}
while(ptr!=NULL)
{
	printf("%d",ptr->data);
	ptr=ptr->prevnode;
}
}
int main()
{
	struct node *head;
	struct node *second;
	struct node *third;
	struct node *fourth;
	
	head= (struct node*)malloc(sizeof(struct node));
	second= (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth= (struct node*)malloc(sizeof(struct node));
	
	head->data=4;
	head->prevnode=NULL;
	head->next=second;
	second->data=5;
	second->prevnode = head;
	second->next=third;
	third->data=6;
	third->prevnode = second;
	third->next=fourth;
	fourth->data=8;
	fourth->prevnode=third;
	fourth->next=NULL;

	printf("\n");
	revtraverse(head);
	
}
