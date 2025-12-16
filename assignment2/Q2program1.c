
#include <stdio.h>

int main()
{
   int reg = 0x2A;
   int reg1=0xFF;
   
 int res ;
 
 res = reg&reg1;
  
  if(res==0x2A)
  {
   printf("\nbit is set ");
  }
  else{
      printf("\n bit is clear");
      
  }