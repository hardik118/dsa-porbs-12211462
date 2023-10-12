#include<stdio.h>
#include<pthread.h>
 void* even(){
 	for (int i=2;i<=100;i+2){
 		printf("even numnber is %d", i);
 		
	 }
	 pthread_exit(NULL);
	 
 }
  void* odd(){
 	for (int i=1;i<=99;i+2){
 		printf("odd numnber is %d", i);
 		
	 }
	 pthread_exit(NULL);
	 
 }
 int main(){
 	pthread_t = even_thread, odd_thread;
 	pthread_create(&even_thread, NULL, even, NULL);
 	pthread_join(even_thread,NULL);
 	
	pthread_create(&odd_thread, NULL, odd, NULL);
 	pthread_join(odd_thread,NULL);
 	return 0;
 	
 }
