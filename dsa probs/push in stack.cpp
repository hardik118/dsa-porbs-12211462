#include<stdio.h>
#include<stdlib.h> 

struct stack
{
	int size;
	int top;
	int *arr;	
};
int   isempty(struct  stack *ptr )
{  
	if(ptr->top==-1)
	{
	return 1;
	}
	else {
		return 0;
	}		
	}
int   isfull(struct stack *ptr)
{
	if(ptr->top==ptr->size-1)
	{
	return 1;
	}  
	else {
		return 0;
	}
}
void push(struct stack *ptr,int val)
{
	if(isfull(ptr)){
		printf("stack overflow\n");
	}
	else 
	{
		ptr->top++;
		ptr->arr[ptr->top]=val;
	}
}


int main(){

	struct stack *s= (struct stack *)malloc(sizeof(struct stack));
	s->size =6;
	s->top=-1;
	s->arr= (int*)malloc(s->size*sizeof(int));
	printf("%d\n",isempty(s));
	printf("%d\n",isfull(s));
	push(s,5);
	push(s,6);
	push(s,6);
	push(s,6);
	push(s,6);
	push(s,6);

	printf("%d\n",isempty(s));
	printf("%d\n",isfull(s));	
	
	
	
	return 0;
	
}

