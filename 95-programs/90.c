//Write a program in C to add two numbers using pointers
#include<stdio.h>
void main()
{
int a,b,*x,*y,sum;
printf("The value of a is ");
scanf("%d",&a);

printf("The value of b is ");
scanf("%d",&b);

x=&a;
y=&b;
sum= (*x) + (*y);
printf("The sum is %d",sum);
}
/*
The value of a is 34
The value of b is 12
The sum is 46
*/