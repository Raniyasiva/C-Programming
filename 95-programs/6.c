//Fibonacci series by 3 variable

#include<stdio.h>
void main()
{
int a=0,b=1,c=1,d,i;
printf("%d %d %d ", a,b,c); 
for(i=0;i<15;i++)
{
 d=a+b+c;
 a=b;
 b=c; 
 c=d;
 printf(" %d ", d);
 }
}

/*0 1 1  2  4  7  13  24  44  81  149  274  504  927  1705  3136  5768  10609 */