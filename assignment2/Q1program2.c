    #include <stdio.h>

int main()
{
    int reg =0x2A;
    int reg1= 0x02;
    
    int res;
    
    res=reg^reg1;
    
   
   printf("\nset bit ans is %d  ",res);
     printf("\nset bit ans is %x  ",res);
       printf("\nset bit ans is %8b  ",res);
    
}
