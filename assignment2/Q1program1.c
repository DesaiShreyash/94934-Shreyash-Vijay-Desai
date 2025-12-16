
#include <stdio.h>

int main()
{
   
 int reg1 = 0x2A;  // 0010 1010
   
  int reg2 = 0x10;
   int res;
   
   
   res= reg1^reg2;
   
   printf("\nset bit ans is %d  ",res);
     printf("\nset bit ans is %x  ",res);
       printf("\nset bit ans is %8b  ",res);
}