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
void del_(struct newarray *a, int size,int index ){
	
for (int i=index;i < size;i++){
		a->ptr[i]= a->ptr[i+1];
	}

	a->use_size--;
	
}
void display(struct newarray *a){
	for (int i=0;i< a->use_size;i++){
		printf("%d" ,a->ptr[i]);
	}
}
int  main(){
	struct newarray num;
	re_mem(&num,6,4);
	get(&num);
	printf("we are running del_");
	del_(&num,4,2);
	display(&num);
	
	return 0;
		
}
