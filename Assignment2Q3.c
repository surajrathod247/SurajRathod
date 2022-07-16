#include<stdio.h>
int main()
{
   int x=5,y=10,Temp;	
   Temp=x;
   x=y;
   y=Temp;
   printf("x=%d y=%d", x,y);
}
