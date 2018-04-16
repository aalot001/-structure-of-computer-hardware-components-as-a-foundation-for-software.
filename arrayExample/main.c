#include <stdio.h>
#include <stdlib.h>
/*  Array accessing - 07-macine-date slide #18/19 */
#define ZLEN 5
typedef int zip_dig [ZLEN];

int get_digit(zip_dig z, int dig); 

int main()
{
   zip_dig cmu = { 1, 5, 2, 1, 3};
   zip_dig mit = { 0, 2, 1, 3, 9};
   zip_dig ucb = { 9, 4, 7, 2, 0};

   int i, j;
   printf("cmu: ");
   for (i = 0; i < ZLEN; i++) 	/* fill the array -transpose */
      printf(" %3d,", get_digit(cmu, i));
   printf(" \n");

   printf("mit: ");
   for (i = 0; i < ZLEN; i++) 	/* fill the array -transpose */
      printf(" %3d,", get_digit(mit, i)); 
   printf(" \n");
    
   printf("cmu: ");
   for (i = 0; i < ZLEN; i++) 	/* fill the array -transpose */
      printf(" %3d,", get_digit(ucb, i));
   printf(" \n");
   
   return (0);
}
