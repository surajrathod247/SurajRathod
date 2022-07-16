#include<stdio.h>
int main()
{
   int a=5,A;
   float b=3.2,B;
   char c='A',C;
   long d=12.13, D;
   A=sizeof(a);
   B=sizeof(float);
   C=sizeof(c);
   D=sizeof(d);
   printf("Size Of Int :%d\n", A);
   printf("Size Of float: %d\n", B);
   printf("Size Of Char: %d\n", C);
   printf("Size Of double: %d\n", D);
}
