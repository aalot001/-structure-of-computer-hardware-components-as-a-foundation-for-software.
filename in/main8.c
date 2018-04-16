#include  <stdio.h>
#include  <string.h>
#include  <stdlib.h>
#include  <sys/types.h>

/* Chap 8,  fork -  PP8.3 - P.726	*/ 


void  main(void)
{
     if (fork() == 0) 
	printf("a\n");
     
     else 
	printf("b\n");
	waitpid(-1, NULL,0);   /* -1: any child terminate */
     
     printf("c\n");
    /* printf("\n"); */
     exit (0);
}

