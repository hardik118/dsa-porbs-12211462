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
struct node * delatindex(struct node *head,int index){
struct node *ptr= head;
	struct node *p = head->next;
	int i=0;
	while(i<index-1){
		ptr=ptr->next;
		p=p->next;
		i++;
	}
	
	ptr->next=p->next;
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


 head=delatindex(head,1);
printf("afterchanges\n");
display(head);


return  0;
	
}
