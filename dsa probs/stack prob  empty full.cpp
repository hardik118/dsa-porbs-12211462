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
		
	}
int   isfull(struct stack *ptr)
{
	if(ptr->top==(ptr->size-1))
	{
	return 1;
	}
}

int main(){

	struct stack *s= (struct stack *)malloc(sizeof(struct stack));
	s->size =90;
	s->top=-1;
	s->arr= (int*)malloc(s->size*sizeof(int));
	s->arr[0]=4;
	s->top++;
printf("checking\n");
	if(isempty(s)){
		printf("empty\n");
	}
	else  if   (isfull(s)){
		printf("full");
	}
	isfull(s);
	
	return 0;
	
}

