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
struct node * delatindex(struct node *head,int index){
	struct node *ptr=head;
	struct node *p = head->next;
	int i;
	for(i=0;i<index-1;i++){
		ptr=ptr->next;
		p=p->next;
		
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


head=delatindex(head,2);
printf("afterchanges\n");
display(head);

return  0;
	
}
