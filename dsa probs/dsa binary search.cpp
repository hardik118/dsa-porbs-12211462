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
	printf("enter the number you want to enter %d\n",i);
    scanf("%d",&n);
    (a->ptr)[i]= n;
}	
}
int  bi_search(struct newarray *a, int element){
	int mid ,low=0;
	 int high=a->use_size-1;
	while(low<=high)
	{  mid= (low+high)/2;
	if((a->ptr)[mid]== element)
	{
	int a= mid;
	return a;
		}
	else  if ((a->ptr)[mid]< element){ 
	low =mid+1;
	}
	else {
	high = mid -1;
	}	
	
}
return -1;
}
int  main(){
	struct newarray num;
	re_mem(&num,10,5);
	get(&num);

	
	printf("we are running bianry search");
	int  found =bi_search(&num,6);
    printf("%d",found );
	return 0;
		

}
