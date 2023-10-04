//Write a program in c to add up n numbers using pointers:

#include<stdio.h>
void main()
{
 int i,n,sum=0,*s;
 s=&sum;
 printf("Enter the size: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 *s=*s+i;
 printf("The sum is %d",*s);

}
/*
Enter the size: 6 
The sum is 15
*/