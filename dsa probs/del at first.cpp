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
struct node * delatfirst(struct node *head){
	struct node *ptr= head;
	head= head->next;
	free(ptr);
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
third->next= NULL;
printf("done\n");


 head=delatfirst(head);
printf("afterchanges\n");
display(head);

return  0;
	
}
