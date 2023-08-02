#include <stdio.h>
#include <stdlib.h>
struct  myarray {
	 int t_size;
	 int u_size;
	 int *ptr;
	 
};
void res_mem( struct myarray *a ,int tsize, int usize){
	(*a).t_size= tsize;
	(*a).u_size= usize;
	(*a).ptr= (int*)malloc(tsize*(sizeof(int)));
}
void get_(struct myarray *a){
	int n;
	for (int i=0;i< a->u_size;i++){
	printf("enter the element %d",i);
	scanf("%d",&n);
	(a->ptr)[i]=n;
}
}
void display (struct myarray *a){
	for (int i=0;i< a->u_size;i++){
		printf("%d\n",(a->ptr)[i]);
	}
}
/*void del_(struct myarray *a, int size ){
	int index;
	printf("enter the index at which you want to delete the element  %d",index);
	scanf("%d",&index);
	a->u_size= size;
	for (int i=index;i<size-1;i++){
		a[i]=a[i+1];
	}
	
}
*/
int main(){
	struct myarray reg_num;
	res_mem(&reg_num,10,5);
	printf("our get() is running \n");

	get_(&reg_num);
	printf("our display is running ");
	display(&reg_num);
	//del_(&reg_num);
	return 0;
	
	 
}
