#include<stdio.h>
#include<stdlib.h>
struct node {
	int data ;
	struct node *next;
};
void display(struct node *head){
	struct node *ptr= head;
	do{
		printf("element: %d\n",ptr->data);
		ptr= ptr->next;
	}
	while(ptr!=head);
}
 struct node *insertatindex(struct node *head,int data,int index){
 	struct node *ptr =(struct node*)malloc(sizeof(struct node));
 	struct node *p= head->next;
 	ptr->data=data;
 	int i=0;
 	while(i!=index-1){
 		p=p->next;
 		i++;
	 }
	 ptr->next=p->next;
	 p->next=ptr;
	
	 return head;
 }
 
int main(){
	struct node *head;
	struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    fifth= (struct node*)malloc(sizeof(struct node));

head->data= 7;
head->next= second;
second->data=8;
second->next= third;
third->data= 9;
third->next= fourth;
fourth->data= 10;
fourth->next= fifth;
fifth->data= 11;
fifth->next= head;
printf("displaying ");
display(head);
head=insertatindex(head,4,3);
printf("edited list\n");
display(head);
return 0;
}
