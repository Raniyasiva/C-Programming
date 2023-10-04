//Write a program in c to swap two numbers using function

#include<stdio.h>
void swap(int a, int b);
void main()
{
 int m,n;
 printf("The value of m is ");
 scanf("%d",&m);
 printf("The value of n is ");
 scanf("%d",&n);
 
 swap(m,n);
}
void swap(int a, int b)
{
 int temp;
 temp=a;
 a= b;
 b= temp;
 printf ("Values after swap m=%d and n=%d\n",a,b);
}
/*
Values before swap m=10 and n=20
Values after swap m=20 and n=10
*/

