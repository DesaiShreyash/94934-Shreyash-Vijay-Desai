
  #include<stdio.h>
int main()
{
    int reg =0x05;
    int reg1=0x00;
    int res;
    res=reg^reg1;
    if(res==0x05);
    {
    printf("res of left shift is %8b",res);
    
    }
    
}