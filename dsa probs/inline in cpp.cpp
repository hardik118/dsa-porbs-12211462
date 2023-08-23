#include <iostream>
// uisng inline  fucntions 
// a fcumtion i sused to reduce the code redundancy,as well as to save memory space as  it is invoked  , abunch  of taks are performed (matching arguments,matching return [happens internaly]).
// but when a fcuntion defination consists of hardly one or two sattements then this bunch of task appears to be time consuming so to fix thuis isssue we use the concept of inline fucntions 
// when  a fcuntion is declared inline its fucntion body is replicated at the function calling space 

using namespace std;
inline int  add(int a,int b ){
	return a+b;
	
}
int main(){
	cout <<" sum: "<< add(2,3)<<endl;
	
}
