#include <stdio.h>
#include <stdlib.h>

 main()
{
   int  v1, v2;
  
   printf("\nValues using bitwise operation ( & - | - && - || - ! - ~ )\n"
   "\nEnter s1 values: 0X");
   scanf("%X", &v1);
   printf("\nEnter 2nd values: 0X");
   scanf("%x", &v2);
   printf("\n\tA- Using & : \t0X%X & 0X%X = 0X%X ", v1, v2, v1&v2);
   printf("\n");
   printf("\n\tB- Using && : \t0X%X && 0X%X = 0X%X ", v1, v2, v1&&v2);
   printf("\n"); 
   printf("\n\tC- Using | : \t0X%X | 0X%X = 0X%X ", v1, v2, v1|v2);
   printf("\n");
   printf("\n\tE- Using || : \t0X%X || 0X%X = 0X%X ", v1, v2, v1|| v2);
   printf("\n");
   printf("\n\tF- Using &! : \t0X%X &! 0X%X = 0X%X ", v1, v2, v1 &! v2);
   printf("\n");
}
