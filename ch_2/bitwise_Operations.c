#include <stdio.h>
#include <stdlib.h>

 main()
{
   int  v1, v2 = 3, v3 = 2;;
 
   printf("\nValues using bitwise operation ( x, <<, >>, )\n"
   "\nEnter s1 values: 0X");
   scanf("%X", &v1);
   printf("\n\tA- Using << : \t0X%X << 0X%X = 0X%X ", v1, v2, v1 << v2);
   printf("\n"
   "\nEnter 2nd value: ");
   printf("\n\tA- Using >> : \t0X%X >> 0X%X = 0X%X ", v1, v2, v1 >> v3);
   printf("\n");
   printf("x in Binary x%x", v1);
   printf("\n");
   


}
