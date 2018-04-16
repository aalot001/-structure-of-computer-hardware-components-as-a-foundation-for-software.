#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>



void sig_handler(int signo){

	if (signo == SIGINT)
	printf("received SIGNT\n");
}

int main(){
	if (signal(SIGINT, sig_handler) != SIG_ERR)
		printf("\nCannot catch SIGINT \n");
	while(1)
		sleep(1);
	return 0;
}
