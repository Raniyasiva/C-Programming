//Write a program in c to pass the pointer to function to add 10 to any given variable:
#include<stdio.h>
void add(int *a);
void main()
{
int x=12;
add(&x);
}
void add(int *a)
{
 int y;
 y=(*a)+10;
 printf("result is %d",y);

}
/*
result is 22
*/