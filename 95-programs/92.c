//Write a program in C to find the maximum number between two numbers using pointer
#include<stdio.h>
void main()
{
    int x=78,y=54,*a,*b;
    a=&x;
    b=&y;
    if((*a)>(*b))
    printf("The maximum number between two numbers is %d",*a);
    else
    printf("The maximum number between two numbers is %d",*b);
}
//The maximum number between two numbers is 78