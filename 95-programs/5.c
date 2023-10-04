//Fibonacci series in 2 variables upto 15 numbers:


#include<stdio.h>
void main()
{
int a=0,b=1,c,i;
printf("%d %d",a,b);
for(i=0;i<15;i++)
{
c=a+b; 
printf(" %d ",c);   //0 1 1 3 5 8 13
a=b;                //a b c
b=c;                //  a b c
}
}

/* 0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987*/