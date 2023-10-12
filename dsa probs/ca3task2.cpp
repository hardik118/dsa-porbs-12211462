#include<iostream>
#include<stdio.h>
#inlcude<unistd.h>
int main(){
	int   pd = getpid();
	pid = fork();
	if (pid ==0){
		printf("child procces is sleeping ");
		sleep(10);
		printf(" orphan parent id is %d",getpid(););
		for (int i=1;i<=10;i++){
			printf("4 x %d =  %d", i,i*4);	
		}
	}
		else{
		printf("parent process id is completed");
		printf("maths\n english\n spanish\n  french\n geography");
		
		}
	return 0;
}
