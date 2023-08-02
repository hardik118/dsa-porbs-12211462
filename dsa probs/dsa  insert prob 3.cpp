#include<stdio.h>
#include<stdlib.h>
struct newarray {
	 int to_size;
	 int use_size;
	 int *ptr;
	 
};
void re_mem( struct newarray *a, int tsize, int usize){
	a->to_size= tsize;
	a->use_size= usize;
	a->ptr= (int*)malloc(tsize*(sizeof(int)));
}

void get(struct newarray *a)
{
int n;
for(int i =0;i< a->use_size;i++){
	printf("enter the number you want to enter %d",i);
    scanf("\n%d",&n);
    (a->ptr)[i]= n;
}	
}
void insert(struct newarray *a, int size,int index, int element  ){
	
for (int i=(a->use_size )-1;i>=index;i--){
		a->ptr[i+1]= a->ptr[i];
	}

	a->ptr[index]= element;
	a->use_size++;
	
}
void display(struct newarray *a){
	for (int i=0;i< a->use_size;i++){
		printf("%d " ,(a->ptr)[i]);
	}

	
}
int  main(){
	struct newarray num;
	re_mem(&num,10,5);
	get(&num);
	
	printf("we are running insert");
	insert(&num,5,2,45);
	display(&num);
	
	return 0;
		
}
