//Write a program in c to add two numbers using call by reference 
#include<stdio.h>
int add(int *i,int *j);
void main()
{
 int a=9,b=7;
 printf("The sum is %d  ",add(&a,&b));
}
int add(int *i, int *j)
{
 int sum;
sum=(*i)+(*j);
return sum;
}
//The sum is 16  