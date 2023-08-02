#include<stdio.h>
#include<stdlib.h>
struct newarray {
	 int to_size;
	 int use_size;
	 int *ptr;
	 
};
void  traverse(struct node *head){
	struct node *ptr= head;
	do{
		printf(ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}
int main(){
	struct node *head;
	struct node *seocnd;
	struct node *third;
	struct node *fouth;
	 
	head= (struct node*)malloc(sizeof(struct node));
	second =( struct node*)malloc(sizeof(struct node));
	third= (struct node*)malloc(sizeof(struct node));
	fourth(struct node*)malloc(sizeof(struct node));
	 head->data= 7;
	 head->next= second;
	 second->data= 9;
	 second->next= third;
	 third->data=10;
	 third->next= fouth;
	 fouth->data=11;
	 fouth->next=head;
	 traverse(head);
	 return 0;
	 
}
