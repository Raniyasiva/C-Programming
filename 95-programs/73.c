//Write a program in c to check whether number is prime or not using the function 

#include<stdio.h>
int prime(int n);
void main()
{
 int n,count=0,i;
printf("Enter any number: ");
scanf("%d",&n);
prime(n);
}
int prime(int n)
{
int i,count=0;
for(i=2;i<n;i++)
{
  if(n%i==0)
  {
    count++;
   }
}
if(count==0)
printf("Prime number");
else
 printf("Not a prime number");
}

/*
Enter any number: 47
Prime number
Enter any number: 77
Not a prime number
*/