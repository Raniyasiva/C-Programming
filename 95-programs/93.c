//Write a program in C to store n elements in an array and print the elements using pointer
#include<stdio.h>
void main()
{
int i,a[5],*p[5];
printf("Enter the elements in an array: ");
for(i=0;i<5;i++)
scanf("%d",&a[i]);

for(i=0;i<5;i++)
p[i]=&a[i];

printf("The entered elements using pointers are");
for(i=0;i<5;i++)
printf(" %d ",*p[i]);

}
/*
Enter the elements in an array: 3 5 7 8 1 
The entered elements using pointers are 3  5  7  8  1 
*/