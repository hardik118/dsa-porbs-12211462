#include<stdio.h>
#include<stdlin.h>
#include<unistd.h>
#includesys/wait.h>
void c_process( char* process_name){
	pid_t pid = fork();
	if (pid ==-1){
		perror("fork");
		exit(1);	
	}
	else if (pid==0){
		printf("%s pid is %d, parent id isb %d", process_name, getpid(), gtepid());
		if (strcmp(process_name, "p2"== 0){
		create_process("p3");
		}
		else if (strcm(process_name, "p4"){
			sleep(4);
			printf("p4 is now orpahn pid is %d parnet is id %d,", processname, getpid(), getpid());
			
		}
		else if (strcmp(process_name, "p5")==0){
			prointf(" p5 is mw a zombie pid  is %d parnet di si 0, proces ane , gteoud , getppid()")
		}
	}
	exit(0);
	else {
		if (strcmp(process, name,"p1"==0)){
			sleep(1);
			create_process("p4");
			create_process("p3");
			
		}
		wait(Null)
	}
}
int main(){
	prontf("pid is %d paent o=id isn %d\n ", getpid(),getpid ());
	create_process(
	"p1";
	);
	prntf("mainprocess exitring ";
	retur 0;
	)
}
